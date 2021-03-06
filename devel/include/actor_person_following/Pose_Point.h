// Generated by gencpp from file actor_person_following/Pose_Point.msg
// DO NOT EDIT!


#ifndef ACTOR_PERSON_FOLLOWING_MESSAGE_POSE_POINT_H
#define ACTOR_PERSON_FOLLOWING_MESSAGE_POSE_POINT_H


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
struct Pose_Point_
{
  typedef Pose_Point_<ContainerAllocator> Type;

  Pose_Point_()
    : x(0.0)
    , y(0.0)
    , frame_x(0)
    , frame_y(0)  {
    }
  Pose_Point_(const ContainerAllocator& _alloc)
    : x(0.0)
    , y(0.0)
    , frame_x(0)
    , frame_y(0)  {
  (void)_alloc;
    }



   typedef double _x_type;
  _x_type x;

   typedef double _y_type;
  _y_type y;

   typedef int32_t _frame_x_type;
  _frame_x_type frame_x;

   typedef int32_t _frame_y_type;
  _frame_y_type frame_y;





  typedef boost::shared_ptr< ::actor_person_following::Pose_Point_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::actor_person_following::Pose_Point_<ContainerAllocator> const> ConstPtr;

}; // struct Pose_Point_

typedef ::actor_person_following::Pose_Point_<std::allocator<void> > Pose_Point;

typedef boost::shared_ptr< ::actor_person_following::Pose_Point > Pose_PointPtr;
typedef boost::shared_ptr< ::actor_person_following::Pose_Point const> Pose_PointConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::actor_person_following::Pose_Point_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::actor_person_following::Pose_Point_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::actor_person_following::Pose_Point_<ContainerAllocator1> & lhs, const ::actor_person_following::Pose_Point_<ContainerAllocator2> & rhs)
{
  return lhs.x == rhs.x &&
    lhs.y == rhs.y &&
    lhs.frame_x == rhs.frame_x &&
    lhs.frame_y == rhs.frame_y;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::actor_person_following::Pose_Point_<ContainerAllocator1> & lhs, const ::actor_person_following::Pose_Point_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace actor_person_following

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::actor_person_following::Pose_Point_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::actor_person_following::Pose_Point_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::actor_person_following::Pose_Point_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::actor_person_following::Pose_Point_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::actor_person_following::Pose_Point_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::actor_person_following::Pose_Point_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::actor_person_following::Pose_Point_<ContainerAllocator> >
{
  static const char* value()
  {
    return "dfd463ee421cc1e9e1267153d3d5f543";
  }

  static const char* value(const ::actor_person_following::Pose_Point_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xdfd463ee421cc1e9ULL;
  static const uint64_t static_value2 = 0xe1267153d3d5f543ULL;
};

template<class ContainerAllocator>
struct DataType< ::actor_person_following::Pose_Point_<ContainerAllocator> >
{
  static const char* value()
  {
    return "actor_person_following/Pose_Point";
  }

  static const char* value(const ::actor_person_following::Pose_Point_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::actor_person_following::Pose_Point_<ContainerAllocator> >
{
  static const char* value()
  {
    return "float64 x\n"
"float64 y\n"
"int32 frame_x\n"
"int32 frame_y\n"
;
  }

  static const char* value(const ::actor_person_following::Pose_Point_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::actor_person_following::Pose_Point_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.x);
      stream.next(m.y);
      stream.next(m.frame_x);
      stream.next(m.frame_y);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct Pose_Point_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::actor_person_following::Pose_Point_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::actor_person_following::Pose_Point_<ContainerAllocator>& v)
  {
    s << indent << "x: ";
    Printer<double>::stream(s, indent + "  ", v.x);
    s << indent << "y: ";
    Printer<double>::stream(s, indent + "  ", v.y);
    s << indent << "frame_x: ";
    Printer<int32_t>::stream(s, indent + "  ", v.frame_x);
    s << indent << "frame_y: ";
    Printer<int32_t>::stream(s, indent + "  ", v.frame_y);
  }
};

} // namespace message_operations
} // namespace ros

#endif // ACTOR_PERSON_FOLLOWING_MESSAGE_POSE_POINT_H
