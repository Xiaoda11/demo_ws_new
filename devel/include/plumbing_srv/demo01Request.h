// Generated by gencpp from file plumbing_srv/demo01Request.msg
// DO NOT EDIT!


#ifndef PLUMBING_SRV_MESSAGE_DEMO01REQUEST_H
#define PLUMBING_SRV_MESSAGE_DEMO01REQUEST_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace plumbing_srv
{
template <class ContainerAllocator>
struct demo01Request_
{
  typedef demo01Request_<ContainerAllocator> Type;

  demo01Request_()
    : num1(0)
    , num2(0)  {
    }
  demo01Request_(const ContainerAllocator& _alloc)
    : num1(0)
    , num2(0)  {
  (void)_alloc;
    }



   typedef int32_t _num1_type;
  _num1_type num1;

   typedef int32_t _num2_type;
  _num2_type num2;





  typedef boost::shared_ptr< ::plumbing_srv::demo01Request_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::plumbing_srv::demo01Request_<ContainerAllocator> const> ConstPtr;

}; // struct demo01Request_

typedef ::plumbing_srv::demo01Request_<std::allocator<void> > demo01Request;

typedef boost::shared_ptr< ::plumbing_srv::demo01Request > demo01RequestPtr;
typedef boost::shared_ptr< ::plumbing_srv::demo01Request const> demo01RequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::plumbing_srv::demo01Request_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::plumbing_srv::demo01Request_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::plumbing_srv::demo01Request_<ContainerAllocator1> & lhs, const ::plumbing_srv::demo01Request_<ContainerAllocator2> & rhs)
{
  return lhs.num1 == rhs.num1 &&
    lhs.num2 == rhs.num2;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::plumbing_srv::demo01Request_<ContainerAllocator1> & lhs, const ::plumbing_srv::demo01Request_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace plumbing_srv

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::plumbing_srv::demo01Request_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::plumbing_srv::demo01Request_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::plumbing_srv::demo01Request_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::plumbing_srv::demo01Request_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::plumbing_srv::demo01Request_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::plumbing_srv::demo01Request_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::plumbing_srv::demo01Request_<ContainerAllocator> >
{
  static const char* value()
  {
    return "c68f3979e1a90aac7d1c75a1096d1e60";
  }

  static const char* value(const ::plumbing_srv::demo01Request_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xc68f3979e1a90aacULL;
  static const uint64_t static_value2 = 0x7d1c75a1096d1e60ULL;
};

template<class ContainerAllocator>
struct DataType< ::plumbing_srv::demo01Request_<ContainerAllocator> >
{
  static const char* value()
  {
    return "plumbing_srv/demo01Request";
  }

  static const char* value(const ::plumbing_srv::demo01Request_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::plumbing_srv::demo01Request_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# 客户端请求时发送的两个数字\n"
"int32 num1\n"
"int32 num2\n"
;
  }

  static const char* value(const ::plumbing_srv::demo01Request_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::plumbing_srv::demo01Request_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.num1);
      stream.next(m.num2);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct demo01Request_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::plumbing_srv::demo01Request_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::plumbing_srv::demo01Request_<ContainerAllocator>& v)
  {
    s << indent << "num1: ";
    Printer<int32_t>::stream(s, indent + "  ", v.num1);
    s << indent << "num2: ";
    Printer<int32_t>::stream(s, indent + "  ", v.num2);
  }
};

} // namespace message_operations
} // namespace ros

#endif // PLUMBING_SRV_MESSAGE_DEMO01REQUEST_H
