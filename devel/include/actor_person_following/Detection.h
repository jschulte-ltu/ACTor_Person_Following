// Generated by gencpp from file actor_person_following/Detection.msg
// DO NOT EDIT!


#ifndef ACTOR_PERSON_FOLLOWING_MESSAGE_DETECTION_H
#define ACTOR_PERSON_FOLLOWING_MESSAGE_DETECTION_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <darknet_ros_msgs/BoundingBox.h>
#include <actor_person_following/Lidar_Point.h>

namespace actor_person_following
{
template <class ContainerAllocator>
struct Detection_
{
  typedef Detection_<ContainerAllocator> Type;

  Detection_()
    : width(0.0)
    , height(0.0)
    , center(0.0)
    , close_overlap(0.0)
    , aruco_overlap(0.0)
    , close_dist(0.0)
    , aruco_dist(0.0)
    , aruco_strength(0.0)
    , r(0.0)
    , g(0.0)
    , b(0.0)
    , box()
    , lidar_point()  {
    }
  Detection_(const ContainerAllocator& _alloc)
    : width(0.0)
    , height(0.0)
    , center(0.0)
    , close_overlap(0.0)
    , aruco_overlap(0.0)
    , close_dist(0.0)
    , aruco_dist(0.0)
    , aruco_strength(0.0)
    , r(0.0)
    , g(0.0)
    , b(0.0)
    , box(_alloc)
    , lidar_point(_alloc)  {
  (void)_alloc;
    }



   typedef double _width_type;
  _width_type width;

   typedef double _height_type;
  _height_type height;

   typedef double _center_type;
  _center_type center;

   typedef double _close_overlap_type;
  _close_overlap_type close_overlap;

   typedef double _aruco_overlap_type;
  _aruco_overlap_type aruco_overlap;

   typedef double _close_dist_type;
  _close_dist_type close_dist;

   typedef double _aruco_dist_type;
  _aruco_dist_type aruco_dist;

   typedef double _aruco_strength_type;
  _aruco_strength_type aruco_strength;

   typedef float _r_type;
  _r_type r;

   typedef float _g_type;
  _g_type g;

   typedef float _b_type;
  _b_type b;

   typedef  ::darknet_ros_msgs::BoundingBox_<ContainerAllocator>  _box_type;
  _box_type box;

   typedef  ::actor_person_following::Lidar_Point_<ContainerAllocator>  _lidar_point_type;
  _lidar_point_type lidar_point;





  typedef boost::shared_ptr< ::actor_person_following::Detection_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::actor_person_following::Detection_<ContainerAllocator> const> ConstPtr;

}; // struct Detection_

typedef ::actor_person_following::Detection_<std::allocator<void> > Detection;

typedef boost::shared_ptr< ::actor_person_following::Detection > DetectionPtr;
typedef boost::shared_ptr< ::actor_person_following::Detection const> DetectionConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::actor_person_following::Detection_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::actor_person_following::Detection_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace actor_person_following

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': False}
// {'sensor_msgs': ['/opt/ros/kinetic/share/sensor_msgs/cmake/../msg'], 'actionlib_msgs': ['/opt/ros/kinetic/share/actionlib_msgs/cmake/../msg'], 'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg'], 'actor_person_following': ['/home/mpleune/lfa_ws/ACTor_Person_Following/src/actor_person_following/msg'], 'geometry_msgs': ['/opt/ros/kinetic/share/geometry_msgs/cmake/../msg'], 'perception_msgs': ['/home/mpleune/lfa_ws/ACTor_Person_Following/src/perception_msgs/msg'], 'darknet_ros_msgs': ['/home/mpleune/lfa_ws/ACTor_Person_Following/src/darknet_ros/darknet_ros_msgs/msg', '/home/mpleune/lfa_ws/ACTor_Person_Following/devel/share/darknet_ros_msgs/msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::actor_person_following::Detection_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::actor_person_following::Detection_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::actor_person_following::Detection_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::actor_person_following::Detection_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::actor_person_following::Detection_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::actor_person_following::Detection_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::actor_person_following::Detection_<ContainerAllocator> >
{
  static const char* value()
  {
    return "5e399b4ad5ae6de8338e645f4db8e5a4";
  }

  static const char* value(const ::actor_person_following::Detection_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x5e399b4ad5ae6de8ULL;
  static const uint64_t static_value2 = 0x338e645f4db8e5a4ULL;
};

template<class ContainerAllocator>
struct DataType< ::actor_person_following::Detection_<ContainerAllocator> >
{
  static const char* value()
  {
    return "actor_person_following/Detection";
  }

  static const char* value(const ::actor_person_following::Detection_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::actor_person_following::Detection_<ContainerAllocator> >
{
  static const char* value()
  {
    return "float64 width\n\
float64 height\n\
float64 center\n\
\n\
float64 close_overlap\n\
float64 aruco_overlap\n\
\n\
float64 close_dist\n\
float64 aruco_dist\n\
\n\
float64 aruco_strength\n\
\n\
float32 r\n\
float32 g\n\
float32 b\n\
\n\
darknet_ros_msgs/BoundingBox box\n\
actor_person_following/Lidar_Point lidar_point\n\
\n\
================================================================================\n\
MSG: darknet_ros_msgs/BoundingBox\n\
float64 probability\n\
int64 xmin\n\
int64 ymin\n\
int64 xmax\n\
int64 ymax\n\
int16 id\n\
string Class\n\
\n\
================================================================================\n\
MSG: actor_person_following/Lidar_Point\n\
float64 x\n\
float64 y\n\
float64 z\n\
\n\
float64 distance\n\
float64 pitch\n\
float64 yaw\n\
\n\
float64 frame_x\n\
float64 frame_y\n\
";
  }

  static const char* value(const ::actor_person_following::Detection_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::actor_person_following::Detection_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.width);
      stream.next(m.height);
      stream.next(m.center);
      stream.next(m.close_overlap);
      stream.next(m.aruco_overlap);
      stream.next(m.close_dist);
      stream.next(m.aruco_dist);
      stream.next(m.aruco_strength);
      stream.next(m.r);
      stream.next(m.g);
      stream.next(m.b);
      stream.next(m.box);
      stream.next(m.lidar_point);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct Detection_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::actor_person_following::Detection_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::actor_person_following::Detection_<ContainerAllocator>& v)
  {
    s << indent << "width: ";
    Printer<double>::stream(s, indent + "  ", v.width);
    s << indent << "height: ";
    Printer<double>::stream(s, indent + "  ", v.height);
    s << indent << "center: ";
    Printer<double>::stream(s, indent + "  ", v.center);
    s << indent << "close_overlap: ";
    Printer<double>::stream(s, indent + "  ", v.close_overlap);
    s << indent << "aruco_overlap: ";
    Printer<double>::stream(s, indent + "  ", v.aruco_overlap);
    s << indent << "close_dist: ";
    Printer<double>::stream(s, indent + "  ", v.close_dist);
    s << indent << "aruco_dist: ";
    Printer<double>::stream(s, indent + "  ", v.aruco_dist);
    s << indent << "aruco_strength: ";
    Printer<double>::stream(s, indent + "  ", v.aruco_strength);
    s << indent << "r: ";
    Printer<float>::stream(s, indent + "  ", v.r);
    s << indent << "g: ";
    Printer<float>::stream(s, indent + "  ", v.g);
    s << indent << "b: ";
    Printer<float>::stream(s, indent + "  ", v.b);
    s << indent << "box: ";
    s << std::endl;
    Printer< ::darknet_ros_msgs::BoundingBox_<ContainerAllocator> >::stream(s, indent + "  ", v.box);
    s << indent << "lidar_point: ";
    s << std::endl;
    Printer< ::actor_person_following::Lidar_Point_<ContainerAllocator> >::stream(s, indent + "  ", v.lidar_point);
  }
};

} // namespace message_operations
} // namespace ros

#endif // ACTOR_PERSON_FOLLOWING_MESSAGE_DETECTION_H
