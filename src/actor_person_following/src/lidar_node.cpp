#include <ros/ros.h>
#include <std_msgs/Header.h>
#include <sensor_msgs/PointCloud2.h>
#include <actor_person_following/Lidar_Point.h>
#include <actor_person_following/Lidar_Points.h>
#include <string>
#include <vector>
#include <ros/console.h>
#include <math.h>

using namespace std;

const double PI = 3.14159265359;

ros::Subscriber lidar_sub;
ros::Publisher point_pub;

double center_yaw, hfov, frame_z0, 
	frame_z1, min_radius, max_radius, 
	min_height, max_height, center_pitch, 
	vfov, x_roll, y_roll, 
	zero_height, camera_x, camera_y,
	camera_z;
float xmax, xmin, ymax, ymin, zmax, zmin, rmax;

struct lidar_point{
	double x, y, z;
	double pitch, yaw;
	double distance;
	double fx, fy;
};
vector<lidar_point> lidar_points;
std_msgs::Header cur_header;

lidar_point rotate(lidar_point p0, double xa, double ya){
	lidar_point p1, p2;
	p1.x = p0.x;
	p1.y = cos(xa)*p0.y - sin(xa)*p0.z;
	p1.z = sin(xa)*p0.y + cos(xa)*p0.z;

	p2.x = cos(ya)*p1.x + sin(ya)*p1.z;
	p2.y = p1.y;
	p2.z = -sin(ya)*p1.x + cos(ya)*p1.z;

	p2.distance = p0.distance;
	p2.pitch = p0.pitch;
	p2.yaw = p0.yaw;

	return p2;
}

lidar_point translate(lidar_point p0, double dx, double dy, double dz){
	lidar_point tmp;
	tmp.x = p0.x + dx;
	tmp.y = p0.y + dy;
	tmp.z = p0.z + dz;

	tmp.distance = p0.distance;
	tmp.pitch = p0.pitch;
	tmp.yaw = p0.yaw;

	return tmp;
}

lidar_point compute_all(lidar_point p0, double cx, double cy, double cz){
	lidar_point tmp;
	tmp.x = p0.x;
	tmp.y = p0.y;
	tmp.z = p0.z;

	tmp.distance = sqrt(pow(p0.x - cx, 2) + pow(p0.y - cy, 2));
	tmp.pitch = atan((tmp.z - cz)/sqrt(pow(tmp.x - cx, 2) + pow(tmp.y - cy, 2)));
	tmp.yaw = atan((tmp.y - cy)/(tmp.x - cx));
	if(tmp.x <= cx){ tmp.yaw = tmp.yaw + PI; }
	else if(tmp.y <= cy){ tmp.yaw = tmp.yaw + 2*PI; }

	tmp.fx = 1 - fmod(tmp.yaw - center_yaw - hfov/2 + 2*PI, 2*PI)/hfov;
	tmp.fy = 1 - (tmp.pitch - center_pitch + vfov/2)/vfov;

	rmax = max(rmax, (float)abs(tmp.distance));

	return tmp;
}

bool heightsort(lidar_point a, lidar_point b){ return a.z < b.z; }
bool distsort(lidar_point a, lidar_point b){ return a.distance > b.distance; }
lidar_point median(vector<lidar_point> points){
	int size = points.size();
	if (size == 0){
		lidar_point nah;
		nah.distance = -1;
		return nah;  // Undefined, really.
	}else{
		sort(points.begin(), points.end(), heightsort);
		return points[size/2];
	}
}

void send_points(vector<lidar_point> points){
	vector<actor_person_following::Lidar_Point> msgs;
	for(lidar_point point : points){
		actor_person_following::Lidar_Point tmp;
		tmp.x = point.x;
		tmp.y = point.y;
		tmp.z = point.z;
		tmp.distance = point.distance;
		tmp.pitch = point.pitch;
		tmp.yaw = point.yaw;
		tmp.frame_x = point.fx;
		tmp.frame_y = point.fy;
		msgs.push_back(tmp);
	}
	actor_person_following::Lidar_Points points_msg;
	points_msg.header = cur_header;
	points_msg.points = msgs;
	points_msg.max_distance = rmax;
	points_msg.xmin = xmin;
	points_msg.xmax = xmax;
	points_msg.ymin = ymin;
	points_msg.ymax = ymax;
	points_msg.zmin = zmin;
	points_msg.zmax = zmax;
	point_pub.publish(points_msg);
}

void lidar_callback(const sensor_msgs::PointCloud2::ConstPtr& lidar_msg){
	int rows = lidar_msg->height;
	int cols = lidar_msg->width;
	int x_offset = lidar_msg->fields[0].offset;
	int y_offset = lidar_msg->fields[1].offset;
	int z_offset = lidar_msg->fields[2].offset;
	int data_offset = lidar_msg->fields[3].offset;
	vector<lidar_point> points;
	for(int i = 0; i < rows*cols; i++){
		int ind = i*lidar_msg->point_step;
		float x, y, z, dist, angle, pitch;
		memcpy(&x, &lidar_msg->data[ind + x_offset], sizeof(float));
		memcpy(&y, &lidar_msg->data[ind + y_offset], sizeof(float));
		memcpy(&z, &lidar_msg->data[ind + z_offset], sizeof(float));
		xmax = max(xmax, x);
		xmin = min(xmin, x);
		ymax = max(ymax, y);
		ymin = min(ymin, y);
		zmax = max(zmax, z);
		zmin = min(zmin, z);

		lidar_point tmp;
		tmp.x = x;
		tmp.y = y;
		tmp.z = z;

		lidar_point oriented = rotate(tmp, x_roll, y_roll);
		lidar_point shifted = translate(oriented, 0, 0, -zero_height);
		//lidar_point filled = compute_all(shifted, 0, 0, 0);
		points.push_back(shifted);
	}

	vector<lidar_point> filled;
	for(lidar_point point : points){
		filled.push_back(compute_all(point, camera_x, camera_y, camera_z));
	}

	lidar_points = filled;
	cur_header = lidar_msg->header;
	send_points(filled);

	// Log
	ROS_INFO("New Frame:");
	ROS_INFO("  (width, height) = (%d, %d)", lidar_msg->width, lidar_msg->height);
	ROS_INFO("  point_step = %d", lidar_msg->point_step);
	ROS_INFO("  row_step = %d", lidar_msg->row_step);
	ROS_INFO("  is_dense = %s", lidar_msg->is_dense ? "true" : "false");
	ROS_INFO("  x bounds: [%f, %f]", xmin, xmax);
	ROS_INFO("  y bounds: [%f, %f]", ymin, ymax);
	ROS_INFO("  z bounds: [%f, %f]", zmin, zmax);
	ROS_INFO("  r bound: %f", rmax);
	ROS_INFO("  fields:");
	for(int i = 0; i < lidar_msg->fields.size(); i++){
		ROS_INFO("  %d: %s (%d)", lidar_msg->fields[i].offset, lidar_msg->fields[i].name.c_str(), lidar_msg->fields[i].datatype);
	}
}

int main(int argc, char* argv[])
{
	//Initialize and set up ROS
	ros::init(argc, argv, "lidar");
	ros::NodeHandle nh("~");

	center_yaw = -PI/3;
	hfov = PI/3;
	frame_z0 = 0;
	frame_z1 = 1;
	min_radius = 0;
	max_radius = 0;
	min_height = 0;
	max_height = 0;
	center_pitch = 0;
	vfov = PI;
	x_roll = 0;
	y_roll = 0;
	zero_height = 0;
	camera_x = 0;
	camera_y = 0;
	camera_z = 0;

	nh.getParam("/lidar_node/center_yaw", center_yaw);
	nh.getParam("/lidar_node/hfov", hfov);
	nh.getParam("/lidar_node/frame_top", frame_z1);
	nh.getParam("/lidar_node/frame_bottom", frame_z0);
	nh.getParam("/lidar_node/min_radius", min_radius);
	nh.getParam("/lidar_node/max_radius", max_radius);
	nh.getParam("/lidar_node/min_height", min_height);
	nh.getParam("/lidar_node/max_height", max_height);
	nh.getParam("/lidar_node/center_pitch", center_pitch);
	nh.getParam("/lidar_node/vfov", vfov);
	nh.getParam("/lidar_node/x_roll", x_roll);
	nh.getParam("/lidar_node/y_roll", y_roll);
	nh.getParam("/lidar_node/zero_height", zero_height);
	nh.getParam("/lidar_node/camera_x", camera_x);
	nh.getParam("/lidar_node/camera_y", camera_y);
	nh.getParam("/lidar_node/camera_z", camera_z);

	xmin = 0;
	xmax = 0;
	ymin = 0;
	ymax = 0;
	zmin = 0;
	zmax = 0;
	rmax = 0;

	lidar_sub = nh.subscribe("/velodyne_points", 10, lidar_callback);
	point_pub = nh.advertise<actor_person_following::Lidar_Points>("/follower/lidar_points", 1000);

	ros::spin();
}
