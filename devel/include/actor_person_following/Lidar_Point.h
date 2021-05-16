// Generated by gencpp from file actor_person_following/Lidar_Point.msg
// DO NOT EDIT!


#ifndef ACTOR_PERSON_FOLLOWING_MESSAGE_LIDAR_POINT_H
#define ACTOR_PERSON_FOLLOWING_MESSAGE_LIDAR_POINT_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace actor_person_following
{
template <class ContainerAllocator>
struct Lidar_Point_
{
  typedef Lidar_Point_<ContainerAllocator> Type;

  Lidar_Point_()
    : x(0.0)
    , y(0.0)
    , z(0.0)
    , distance(0.0)
    , pitch(0.0)
    , yaw(0.0)
    , frame_x(0.0)
    , frame_y(0.0)  {
    }
  Lidar_Point_(const ContainerAllocator& _alloc)
    : x(0.0)
    , y(0.0)
    , z(0.0)
    , distance(0.0)
    , pitch(0.0)
    , yaw(0.0)
    , frame_x(0.0)
    , frame_y(0.0)  {
  (void)_alloc;
    }



   typedef double _x_type;
  _x_type x;

   typedef double _y_type;
  _y_type y;

   typedef double _z_type;
  _z_type z;

   typedef double _distance_type;
  _distance_type distance;

   typedef double _pitch_type;
  _pitch_type pitch;

   typedef double _yaw_type;
  _yaw_type yaw;

   typedef double _frame_x_type;
  _frame_x_type frame_x;

   typedef double _frame_y_type;
  _frame_y_type frame_y;





  typedef boost::shared_ptr< ::actor_person_following::Lidar_Point_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::actor_person_following::Lidar_Point_<ContainerAllocator> const> ConstPtr;

}; // struct Lidar_Point_

typedef ::actor_person_following::Lidar_Point_<std::allocator<void> > Lidar_Point;

typedef boost::shared_ptr< ::actor_person_following::Lidar_Point > Lidar_PointPtr;
typedef boost::shared_ptr< ::actor_person_following::Lidar_Point const> Lidar_PointConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::actor_person_following::Lidar_Point_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::actor_person_following::Lidar_Point_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace actor_person_following

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': True, 'IsMessage': True, 'HasHeader': False}
// {'sensor_msgs': ['/opt/ros/kinetic/share/sensor_msgs/cmake/../msg'], 'actionlib_msgs': ['/opt/ros/kinetic/share/actionlib_msgs/cmake/../msg'], 'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg'], 'actor_person_following': ['/home/mpleune/lfa_ws/ACTor_Person_Following/src/actor_person_following/msg'], 'geometry_msgs': ['/opt/ros/kinetic/share/geometry_msgs/cmake/../msg'], 'perception_msgs': ['/home/mpleune/lfa_ws/ACTor_Person_Following/src/perception_msgs/msg'], 'darknet_ros_msgs': ['/home/mpleune/lfa_ws/ACTor_Person_Following/src/darknet_ros/darknet_ros_msgs/msg', '/home/mpleune/lfa_ws/ACTor_Person_Following/devel/share/darknet_ros_msgs/msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::actor_person_following::Lidar_Point_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::actor_person_following::Lidar_Point_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::actor_person_following::Lidar_Point_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::actor_person_following::Lidar_Point_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::actor_person_following::Lidar_Point_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::actor_person_following::Lidar_Point_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::actor_person_following::Lidar_Point_<ContainerAllocator> >
{
  static const char* value()
  {
    return "5ef9fa9be200f6b495d5f703b43a50f7";
  }

  static const char* value(const ::actor_person_following::Lidar_Point_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x5ef9fa9be200f6b4ULL;
  static const uint64_t static_value2 = 0x95d5f703b43a50f7ULL;
};

template<class ContainerAllocator>
struct DataType< ::actor_person_following::Lidar_Point_<ContainerAllocator> >
{
  static const char* value()
  {
    return "actor_person_following/Lidar_Point";
  }

  static const char* value(const ::actor_person_following::Lidar_Point_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::actor_person_following::Lidar_Point_<ContainerAllocator> >
{
  static const char* value()
  {
    return "float64 x\n\
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

  static const char* value(const ::actor_person_following::Lidar_Point_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::actor_person_following::Lidar_Point_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.x);
      stream.next(m.y);
      stream.next(m.z);
      stream.next(m.distance);
      stream.next(m.pitch);
      stream.next(m.yaw);
      stream.next(m.frame_x);
      stream.next(m.frame_y);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct Lidar_Point_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::actor_person_following::Lidar_Point_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::actor_person_following::Lidar_Point_<ContainerAllocator>& v)
  {
    s << indent << "x: ";
    Printer<double>::stream(s, indent + "  ", v.x);
    s << indent << "y: ";
    Printer<double>::stream(s, indent + "  ", v.y);
    s << indent << "z: ";
    Printer<double>::stream(s, indent + "  ", v.z);
    s << indent << "distance: ";
    Printer<double>::stream(s, indent + "  ", v.distance);
    s << indent << "pitch: ";
    Printer<double>::stream(s, indent + "  ", v.pitch);
    s << indent << "yaw: ";
    Printer<double>::stream(s, indent + "  ", v.yaw);
    s << indent << "frame_x: ";
    Printer<double>::stream(s, indent + "  ", v.frame_x);
    s << indent << "frame_y: ";
    Printer<double>::stream(s, indent + "  ", v.frame_y);
  }
};

} // namespace message_operations
} // namespace ros

#endif // ACTOR_PERSON_FOLLOWING_MESSAGE_LIDAR_POINT_H
