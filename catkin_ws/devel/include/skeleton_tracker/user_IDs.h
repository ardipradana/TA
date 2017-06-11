// Generated by gencpp from file skeleton_tracker/user_IDs.msg
// DO NOT EDIT!


#ifndef SKELETON_TRACKER_MESSAGE_USER_IDS_H
#define SKELETON_TRACKER_MESSAGE_USER_IDS_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace skeleton_tracker
{
template <class ContainerAllocator>
struct user_IDs_
{
  typedef user_IDs_<ContainerAllocator> Type;

  user_IDs_()
    : users()  {
    }
  user_IDs_(const ContainerAllocator& _alloc)
    : users(_alloc)  {
  (void)_alloc;
    }



   typedef std::vector<uint8_t, typename ContainerAllocator::template rebind<uint8_t>::other >  _users_type;
  _users_type users;




  typedef boost::shared_ptr< ::skeleton_tracker::user_IDs_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::skeleton_tracker::user_IDs_<ContainerAllocator> const> ConstPtr;

}; // struct user_IDs_

typedef ::skeleton_tracker::user_IDs_<std::allocator<void> > user_IDs;

typedef boost::shared_ptr< ::skeleton_tracker::user_IDs > user_IDsPtr;
typedef boost::shared_ptr< ::skeleton_tracker::user_IDs const> user_IDsConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::skeleton_tracker::user_IDs_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::skeleton_tracker::user_IDs_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace skeleton_tracker

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': False}
// {'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg'], 'geometry_msgs': ['/opt/ros/kinetic/share/geometry_msgs/cmake/../msg'], 'skeleton_tracker': ['/home/ardi/catkin_ws/src/skeleton_tracker/msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::skeleton_tracker::user_IDs_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::skeleton_tracker::user_IDs_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::skeleton_tracker::user_IDs_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::skeleton_tracker::user_IDs_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::skeleton_tracker::user_IDs_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::skeleton_tracker::user_IDs_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::skeleton_tracker::user_IDs_<ContainerAllocator> >
{
  static const char* value()
  {
    return "0370fea64fb82134b7a78a66cb25797c";
  }

  static const char* value(const ::skeleton_tracker::user_IDs_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x0370fea64fb82134ULL;
  static const uint64_t static_value2 = 0xb7a78a66cb25797cULL;
};

template<class ContainerAllocator>
struct DataType< ::skeleton_tracker::user_IDs_<ContainerAllocator> >
{
  static const char* value()
  {
    return "skeleton_tracker/user_IDs";
  }

  static const char* value(const ::skeleton_tracker::user_IDs_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::skeleton_tracker::user_IDs_<ContainerAllocator> >
{
  static const char* value()
  {
    return "uint8[] users\n\
";
  }

  static const char* value(const ::skeleton_tracker::user_IDs_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::skeleton_tracker::user_IDs_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.users);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct user_IDs_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::skeleton_tracker::user_IDs_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::skeleton_tracker::user_IDs_<ContainerAllocator>& v)
  {
    s << indent << "users[]" << std::endl;
    for (size_t i = 0; i < v.users.size(); ++i)
    {
      s << indent << "  users[" << i << "]: ";
      Printer<uint8_t>::stream(s, indent + "  ", v.users[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // SKELETON_TRACKER_MESSAGE_USER_IDS_H