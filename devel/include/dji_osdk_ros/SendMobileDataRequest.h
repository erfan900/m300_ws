// Generated by gencpp from file dji_osdk_ros/SendMobileDataRequest.msg
// DO NOT EDIT!


#ifndef DJI_OSDK_ROS_MESSAGE_SENDMOBILEDATAREQUEST_H
#define DJI_OSDK_ROS_MESSAGE_SENDMOBILEDATAREQUEST_H


#include <string>
#include <vector>
#include <memory>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace dji_osdk_ros
{
template <class ContainerAllocator>
struct SendMobileDataRequest_
{
  typedef SendMobileDataRequest_<ContainerAllocator> Type;

  SendMobileDataRequest_()
    : data()  {
    }
  SendMobileDataRequest_(const ContainerAllocator& _alloc)
    : data(_alloc)  {
  (void)_alloc;
    }



   typedef std::vector<uint8_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<uint8_t>> _data_type;
  _data_type data;





  typedef boost::shared_ptr< ::dji_osdk_ros::SendMobileDataRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::dji_osdk_ros::SendMobileDataRequest_<ContainerAllocator> const> ConstPtr;

}; // struct SendMobileDataRequest_

typedef ::dji_osdk_ros::SendMobileDataRequest_<std::allocator<void> > SendMobileDataRequest;

typedef boost::shared_ptr< ::dji_osdk_ros::SendMobileDataRequest > SendMobileDataRequestPtr;
typedef boost::shared_ptr< ::dji_osdk_ros::SendMobileDataRequest const> SendMobileDataRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::dji_osdk_ros::SendMobileDataRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::dji_osdk_ros::SendMobileDataRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::dji_osdk_ros::SendMobileDataRequest_<ContainerAllocator1> & lhs, const ::dji_osdk_ros::SendMobileDataRequest_<ContainerAllocator2> & rhs)
{
  return lhs.data == rhs.data;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::dji_osdk_ros::SendMobileDataRequest_<ContainerAllocator1> & lhs, const ::dji_osdk_ros::SendMobileDataRequest_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace dji_osdk_ros

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::dji_osdk_ros::SendMobileDataRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::dji_osdk_ros::SendMobileDataRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::dji_osdk_ros::SendMobileDataRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::dji_osdk_ros::SendMobileDataRequest_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::dji_osdk_ros::SendMobileDataRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::dji_osdk_ros::SendMobileDataRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::dji_osdk_ros::SendMobileDataRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "f43a8e1b362b75baa741461b46adc7e0";
  }

  static const char* value(const ::dji_osdk_ros::SendMobileDataRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xf43a8e1b362b75baULL;
  static const uint64_t static_value2 = 0xa741461b46adc7e0ULL;
};

template<class ContainerAllocator>
struct DataType< ::dji_osdk_ros::SendMobileDataRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "dji_osdk_ros/SendMobileDataRequest";
  }

  static const char* value(const ::dji_osdk_ros::SendMobileDataRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::dji_osdk_ros::SendMobileDataRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "uint8[] data  #length(data) <= 100\n"
;
  }

  static const char* value(const ::dji_osdk_ros::SendMobileDataRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::dji_osdk_ros::SendMobileDataRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.data);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct SendMobileDataRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::dji_osdk_ros::SendMobileDataRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::dji_osdk_ros::SendMobileDataRequest_<ContainerAllocator>& v)
  {
    s << indent << "data[]" << std::endl;
    for (size_t i = 0; i < v.data.size(); ++i)
    {
      s << indent << "  data[" << i << "]: ";
      Printer<uint8_t>::stream(s, indent + "  ", v.data[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // DJI_OSDK_ROS_MESSAGE_SENDMOBILEDATAREQUEST_H
