// Generated by gencpp from file perception_msgs/MarkerList.msg
// DO NOT EDIT!


#ifndef PERCEPTION_MSGS_MESSAGE_MARKERLIST_H
#define PERCEPTION_MSGS_MESSAGE_MARKERLIST_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <std_msgs/Header.h>
#include <perception_msgs/Marker.h>

namespace perception_msgs
{
template <class ContainerAllocator>
struct MarkerList_
{
  typedef MarkerList_<ContainerAllocator> Type;

  MarkerList_()
    : header()
    , imageTopicName()
    , markers()  {
    }
  MarkerList_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , imageTopicName(_alloc)
    , markers(_alloc)  {
  (void)_alloc;
    }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _imageTopicName_type;
  _imageTopicName_type imageTopicName;

   typedef std::vector< ::perception_msgs::Marker_<ContainerAllocator> , typename ContainerAllocator::template rebind< ::perception_msgs::Marker_<ContainerAllocator> >::other >  _markers_type;
  _markers_type markers;





  typedef boost::shared_ptr< ::perception_msgs::MarkerList_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::perception_msgs::MarkerList_<ContainerAllocator> const> ConstPtr;

}; // struct MarkerList_

typedef ::perception_msgs::MarkerList_<std::allocator<void> > MarkerList;

typedef boost::shared_ptr< ::perception_msgs::MarkerList > MarkerListPtr;
typedef boost::shared_ptr< ::perception_msgs::MarkerList const> MarkerListConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::perception_msgs::MarkerList_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::perception_msgs::MarkerList_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace perception_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': True}
// {'sensor_msgs': ['/opt/ros/kinetic/share/sensor_msgs/cmake/../msg'], 'perception_msgs': ['/home/mpleune/lfa_ws/ACTor_Person_Following/src/perception_msgs/msg'], 'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg'], 'geometry_msgs': ['/opt/ros/kinetic/share/geometry_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::perception_msgs::MarkerList_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::perception_msgs::MarkerList_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::perception_msgs::MarkerList_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::perception_msgs::MarkerList_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::perception_msgs::MarkerList_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::perception_msgs::MarkerList_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::perception_msgs::MarkerList_<ContainerAllocator> >
{
  static const char* value()
  {
    return "9f0edb9bb4a3a12d927b2fa0af3294e1";
  }

  static const char* value(const ::perception_msgs::MarkerList_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x9f0edb9bb4a3a12dULL;
  static const uint64_t static_value2 = 0x927b2fa0af3294e1ULL;
};

template<class ContainerAllocator>
struct DataType< ::perception_msgs::MarkerList_<ContainerAllocator> >
{
  static const char* value()
  {
    return "perception_msgs/MarkerList";
  }

  static const char* value(const ::perception_msgs::MarkerList_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::perception_msgs::MarkerList_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# Header\n\
Header header\n\
\n\
# Image info\n\
string imageTopicName\n\
\n\
# List of visual markers\n\
perception_msgs/Marker[] markers\n\
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
MSG: perception_msgs/Marker\n\
# Header. Needed for the frame_id\n\
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

  static const char* value(const ::perception_msgs::MarkerList_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::perception_msgs::MarkerList_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.imageTopicName);
      stream.next(m.markers);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct MarkerList_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::perception_msgs::MarkerList_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::perception_msgs::MarkerList_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "imageTopicName: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.imageTopicName);
    s << indent << "markers[]" << std::endl;
    for (size_t i = 0; i < v.markers.size(); ++i)
    {
      s << indent << "  markers[" << i << "]: ";
      s << std::endl;
      s << indent;
      Printer< ::perception_msgs::Marker_<ContainerAllocator> >::stream(s, indent + "    ", v.markers[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // PERCEPTION_MSGS_MESSAGE_MARKERLIST_H
