// Generated by gencpp from file perception_msgs/Marker.msg
// DO NOT EDIT!


#ifndef PERCEPTION_MSGS_MESSAGE_MARKER_H
#define PERCEPTION_MSGS_MESSAGE_MARKER_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <std_msgs/Header.h>
#include <perception_msgs/LabeledPointInImage.h>
#include <geometry_msgs/PoseWithCovariance.h>

namespace perception_msgs
{
template <class ContainerAllocator>
struct Marker_
{
  typedef Marker_<ContainerAllocator> Type;

  Marker_()
    : header()
    , id()
    , size()
    , labeledPointsInImage()
    , is3dReconstructed(false)
    , pose()
    , confidence(0.0)  {
    }
  Marker_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , id(_alloc)
    , size(_alloc)
    , labeledPointsInImage(_alloc)
    , is3dReconstructed(false)
    , pose(_alloc)
    , confidence(0.0)  {
  (void)_alloc;
    }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _id_type;
  _id_type id;

   typedef std::vector<float, typename ContainerAllocator::template rebind<float>::other >  _size_type;
  _size_type size;

   typedef std::vector< ::perception_msgs::LabeledPointInImage_<ContainerAllocator> , typename ContainerAllocator::template rebind< ::perception_msgs::LabeledPointInImage_<ContainerAllocator> >::other >  _labeledPointsInImage_type;
  _labeledPointsInImage_type labeledPointsInImage;

   typedef uint8_t _is3dReconstructed_type;
  _is3dReconstructed_type is3dReconstructed;

   typedef  ::geometry_msgs::PoseWithCovariance_<ContainerAllocator>  _pose_type;
  _pose_type pose;

   typedef double _confidence_type;
  _confidence_type confidence;





  typedef boost::shared_ptr< ::perception_msgs::Marker_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::perception_msgs::Marker_<ContainerAllocator> const> ConstPtr;

}; // struct Marker_

typedef ::perception_msgs::Marker_<std::allocator<void> > Marker;

typedef boost::shared_ptr< ::perception_msgs::Marker > MarkerPtr;
typedef boost::shared_ptr< ::perception_msgs::Marker const> MarkerConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::perception_msgs::Marker_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::perception_msgs::Marker_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace perception_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': True}
// {'sensor_msgs': ['/opt/ros/kinetic/share/sensor_msgs/cmake/../msg'], 'perception_msgs': ['/home/mpleune/catkin_ws/src/perception_msgs/msg'], 'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg'], 'geometry_msgs': ['/opt/ros/kinetic/share/geometry_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::perception_msgs::Marker_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::perception_msgs::Marker_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::perception_msgs::Marker_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::perception_msgs::Marker_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::perception_msgs::Marker_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::perception_msgs::Marker_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::perception_msgs::Marker_<ContainerAllocator> >
{
  static const char* value()
  {
    return "da8deb44ff01a0f90906148027b06f04";
  }

  static const char* value(const ::perception_msgs::Marker_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xda8deb44ff01a0f9ULL;
  static const uint64_t static_value2 = 0x0906148027b06f04ULL;
};

template<class ContainerAllocator>
struct DataType< ::perception_msgs::Marker_<ContainerAllocator> >
{
  static const char* value()
  {
    return "perception_msgs/Marker";
  }

  static const char* value(const ::perception_msgs::Marker_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::perception_msgs::Marker_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# Header. Needed for the frame_id\n\
Header header\n\
\n\
# Id of the visual marker\n\
string id\n\
\n\
# Size of the visual marker if available\n\
float32[] size\n\
\n\
# Points of the visual marker in the Image\n\
perception_msgs/LabeledPointInImage[] labeledPointsInImage\n\
\n\
# Flag for the 3D reconstruction\n\
bool is3dReconstructed\n\
\n\
# Pose of the Visual Marker wrt Camera if calibration file is available\n\
geometry_msgs/PoseWithCovariance pose\n\
\n\
# Confidence in the detection. TODO\n\
float64 confidence\n\
\n\
================================================================================\n\
MSG: std_msgs/Header\n\
# Standard metadata for higher-level stamped data types.\n\
# This is generally used to communicate timestamped data \n\
# in a particular coordinate frame.\n\
# \n\
# sequence ID: consecutively increasing ID \n\
uint32 seq\n\
#Two-integer timestamp that is expressed as:\n\
# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')\n\
# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')\n\
# time-handling sugar is provided by the client library\n\
time stamp\n\
#Frame this data is associated with\n\
# 0: no frame\n\
# 1: global frame\n\
string frame_id\n\
\n\
================================================================================\n\
MSG: perception_msgs/LabeledPointInImage\n\
# string value. Empty if there is no label\n\
string value\n\
# Point with x,y coordinates of the point in the image\n\
PointInImage pointsInImage\n\
\n\
================================================================================\n\
MSG: perception_msgs/PointInImage\n\
# x coordinate of the point in the image\n\
float32 x\n\
# y coordinate of the poitn in the image\n\
float32 y\n\
\n\
================================================================================\n\
MSG: geometry_msgs/PoseWithCovariance\n\
# This represents a pose in free space with uncertainty.\n\
\n\
Pose pose\n\
\n\
# Row-major representation of the 6x6 covariance matrix\n\
# The orientation parameters use a fixed-axis representation.\n\
# In order, the parameters are:\n\
# (x, y, z, rotation about X axis, rotation about Y axis, rotation about Z axis)\n\
float64[36] covariance\n\
\n\
================================================================================\n\
MSG: geometry_msgs/Pose\n\
# A representation of pose in free space, composed of position and orientation. \n\
Point position\n\
Quaternion orientation\n\
\n\
================================================================================\n\
MSG: geometry_msgs/Point\n\
# This contains the position of a point in free space\n\
float64 x\n\
float64 y\n\
float64 z\n\
\n\
================================================================================\n\
MSG: geometry_msgs/Quaternion\n\
# This represents an orientation in free space in quaternion form.\n\
\n\
float64 x\n\
float64 y\n\
float64 z\n\
float64 w\n\
";
  }

  static const char* value(const ::perception_msgs::Marker_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::perception_msgs::Marker_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.id);
      stream.next(m.size);
      stream.next(m.labeledPointsInImage);
      stream.next(m.is3dReconstructed);
      stream.next(m.pose);
      stream.next(m.confidence);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct Marker_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::perception_msgs::Marker_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::perception_msgs::Marker_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "id: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.id);
    s << indent << "size[]" << std::endl;
    for (size_t i = 0; i < v.size.size(); ++i)
    {
      s << indent << "  size[" << i << "]: ";
      Printer<float>::stream(s, indent + "  ", v.size[i]);
    }
    s << indent << "labeledPointsInImage[]" << std::endl;
    for (size_t i = 0; i < v.labeledPointsInImage.size(); ++i)
    {
      s << indent << "  labeledPointsInImage[" << i << "]: ";
      s << std::endl;
      s << indent;
      Printer< ::perception_msgs::LabeledPointInImage_<ContainerAllocator> >::stream(s, indent + "    ", v.labeledPointsInImage[i]);
    }
    s << indent << "is3dReconstructed: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.is3dReconstructed);
    s << indent << "pose: ";
    s << std::endl;
    Printer< ::geometry_msgs::PoseWithCovariance_<ContainerAllocator> >::stream(s, indent + "  ", v.pose);
    s << indent << "confidence: ";
    Printer<double>::stream(s, indent + "  ", v.confidence);
  }
};

} // namespace message_operations
} // namespace ros

#endif // PERCEPTION_MSGS_MESSAGE_MARKER_H
