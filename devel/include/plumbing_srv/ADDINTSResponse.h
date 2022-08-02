// Generated by gencpp from file plumbing_srv/ADDINTSResponse.msg
// DO NOT EDIT!


#ifndef PLUMBING_SRV_MESSAGE_ADDINTSRESPONSE_H
#define PLUMBING_SRV_MESSAGE_ADDINTSRESPONSE_H


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
struct ADDINTSResponse_
{
  typedef ADDINTSResponse_<ContainerAllocator> Type;

  ADDINTSResponse_()
    : sum(0)  {
    }
  ADDINTSResponse_(const ContainerAllocator& _alloc)
    : sum(0)  {
  (void)_alloc;
    }



   typedef int32_t _sum_type;
  _sum_type sum;





  typedef boost::shared_ptr< ::plumbing_srv::ADDINTSResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::plumbing_srv::ADDINTSResponse_<ContainerAllocator> const> ConstPtr;

}; // struct ADDINTSResponse_

typedef ::plumbing_srv::ADDINTSResponse_<std::allocator<void> > ADDINTSResponse;

typedef boost::shared_ptr< ::plumbing_srv::ADDINTSResponse > ADDINTSResponsePtr;
typedef boost::shared_ptr< ::plumbing_srv::ADDINTSResponse const> ADDINTSResponseConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::plumbing_srv::ADDINTSResponse_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::plumbing_srv::ADDINTSResponse_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::plumbing_srv::ADDINTSResponse_<ContainerAllocator1> & lhs, const ::plumbing_srv::ADDINTSResponse_<ContainerAllocator2> & rhs)
{
  return lhs.sum == rhs.sum;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::plumbing_srv::ADDINTSResponse_<ContainerAllocator1> & lhs, const ::plumbing_srv::ADDINTSResponse_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace plumbing_srv

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::plumbing_srv::ADDINTSResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::plumbing_srv::ADDINTSResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::plumbing_srv::ADDINTSResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::plumbing_srv::ADDINTSResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::plumbing_srv::ADDINTSResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::plumbing_srv::ADDINTSResponse_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::plumbing_srv::ADDINTSResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "0ba699c25c9418c0366f3595c0c8e8ec";
  }

  static const char* value(const ::plumbing_srv::ADDINTSResponse_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x0ba699c25c9418c0ULL;
  static const uint64_t static_value2 = 0x366f3595c0c8e8ecULL;
};

template<class ContainerAllocator>
struct DataType< ::plumbing_srv::ADDINTSResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "plumbing_srv/ADDINTSResponse";
  }

  static const char* value(const ::plumbing_srv::ADDINTSResponse_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::plumbing_srv::ADDINTSResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# 服务器响应发送的数据\n"
"int32 sum\n"
"\n"
;
  }

  static const char* value(const ::plumbing_srv::ADDINTSResponse_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::plumbing_srv::ADDINTSResponse_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.sum);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct ADDINTSResponse_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::plumbing_srv::ADDINTSResponse_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::plumbing_srv::ADDINTSResponse_<ContainerAllocator>& v)
  {
    s << indent << "sum: ";
    Printer<int32_t>::stream(s, indent + "  ", v.sum);
  }
};

} // namespace message_operations
} // namespace ros

#endif // PLUMBING_SRV_MESSAGE_ADDINTSRESPONSE_H