// Generated by gencpp from file perception_msgs/LabeledPointInImage.msg
// DO NOT EDIT!


#ifndef PERCEPTION_MSGS_MESSAGE_LABELEDPOINTINIMAGE_H
#define PERCEPTION_MSGS_MESSAGE_LABELEDPOINTINIMAGE_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <perception_msgs/PointInImage.h>

namespace perception_msgs
{
template <class ContainerAllocator>
struct LabeledPointInImage_
{
  typedef LabeledPointInImage_<ContainerAllocator> Type;

  LabeledPointInImage_()
    : value()
    , pointsInImage()  {
    }
  LabeledPointInImage_(const ContainerAllocator& _alloc)
    : value(_alloc)
    , pointsInImage(_alloc)  {
  (void)_alloc;
    }



   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _value_type;
  _value_type value;

   typedef  ::perception_msgs::PointInImage_<ContainerAllocator>  _pointsInImage_type;
  _pointsInImage_type pointsInImage;





  typedef boost::shared_ptr< ::perception_msgs::LabeledPointInImage_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::perception_msgs::LabeledPointInImage_<ContainerAllocator> const> ConstPtr;

}; // struct LabeledPointInImage_

typedef ::perception_msgs::LabeledPointInImage_<std::allocator<void> > LabeledPointInImage;

typedef boost::shared_ptr< ::perception_msgs::LabeledPointInImage > LabeledPointInImagePtr;
typedef boost::shared_ptr< ::perception_msgs::LabeledPointInImage const> LabeledPointInImageConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::perception_msgs::LabeledPointInImage_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::perception_msgs::LabeledPointInImage_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::perception_msgs::LabeledPointInImage_<ContainerAllocator1> & lhs, const ::perception_msgs::LabeledPointInImage_<ContainerAllocator2> & rhs)
{
  return lhs.value == rhs.value &&
    lhs.pointsInImage == rhs.pointsInImage;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::perception_msgs::LabeledPointInImage_<ContainerAllocator1> & lhs, const ::perception_msgs::LabeledPointInImage_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace perception_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::perception_msgs::LabeledPointInImage_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::perception_msgs::LabeledPointInImage_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::perception_msgs::LabeledPointInImage_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::perception_msgs::LabeledPointInImage_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::perception_msgs::LabeledPointInImage_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::perception_msgs::LabeledPointInImage_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::perception_msgs::LabeledPointInImage_<ContainerAllocator> >
{
  static const char* value()
  {
    return "1e84abf3e87ce958922be1dad2422c33";
  }

  static const char* value(const ::perception_msgs::LabeledPointInImage_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x1e84abf3e87ce958ULL;
  static const uint64_t static_value2 = 0x922be1dad2422c33ULL;
};

template<class ContainerAllocator>
struct DataType< ::perception_msgs::LabeledPointInImage_<ContainerAllocator> >
{
  static const char* value()
  {
    return "perception_msgs/LabeledPointInImage";
  }

  static const char* value(const ::perception_msgs::LabeledPointInImage_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::perception_msgs::LabeledPointInImage_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# string value. Empty if there is no label\n"
"string value\n"
"# Point with x,y coordinates of the point in the image\n"
"PointInImage pointsInImage\n"
"\n"
"================================================================================\n"
"MSG: perception_msgs/PointInImage\n"
"# x coordinate of the point in the image\n"
"float32 x\n"
"# y coordinate of the poitn in the image\n"
"float32 y\n"
;
  }

  static const char* value(const ::perception_msgs::LabeledPointInImage_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::perception_msgs::LabeledPointInImage_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.value);
      stream.next(m.pointsInImage);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct LabeledPointInImage_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::perception_msgs::LabeledPointInImage_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::perception_msgs::LabeledPointInImage_<ContainerAllocator>& v)
  {
    s << indent << "value: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.value);
    s << indent << "pointsInImage: ";
    s << std::endl;
    Printer< ::perception_msgs::PointInImage_<ContainerAllocator> >::stream(s, indent + "  ", v.pointsInImage);
  }
};

} // namespace message_operations
} // namespace ros

#endif // PERCEPTION_MSGS_MESSAGE_LABELEDPOINTINIMAGE_H
