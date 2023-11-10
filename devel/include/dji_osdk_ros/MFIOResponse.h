// Generated by gencpp from file dji_osdk_ros/MFIOResponse.msg
// DO NOT EDIT!


#ifndef DJI_OSDK_ROS_MESSAGE_MFIORESPONSE_H
#define DJI_OSDK_ROS_MESSAGE_MFIORESPONSE_H


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
struct MFIOResponse_
{
  typedef MFIOResponse_<ContainerAllocator> Type;

  MFIOResponse_()
    : read_value(0)  {
    }
  MFIOResponse_(const ContainerAllocator& _alloc)
    : read_value(0)  {
  (void)_alloc;
    }



   typedef uint32_t _read_value_type;
  _read_value_type read_value;





  typedef boost::shared_ptr< ::dji_osdk_ros::MFIOResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::dji_osdk_ros::MFIOResponse_<ContainerAllocator> const> ConstPtr;

}; // struct MFIOResponse_

typedef ::dji_osdk_ros::MFIOResponse_<std::allocator<void> > MFIOResponse;

typedef boost::shared_ptr< ::dji_osdk_ros::MFIOResponse > MFIOResponsePtr;
typedef boost::shared_ptr< ::dji_osdk_ros::MFIOResponse const> MFIOResponseConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::dji_osdk_ros::MFIOResponse_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::dji_osdk_ros::MFIOResponse_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::dji_osdk_ros::MFIOResponse_<ContainerAllocator1> & lhs, const ::dji_osdk_ros::MFIOResponse_<ContainerAllocator2> & rhs)
{
  return lhs.read_value == rhs.read_value;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::dji_osdk_ros::MFIOResponse_<ContainerAllocator1> & lhs, const ::dji_osdk_ros::MFIOResponse_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace dji_osdk_ros

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::dji_osdk_ros::MFIOResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::dji_osdk_ros::MFIOResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::dji_osdk_ros::MFIOResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::dji_osdk_ros::MFIOResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::dji_osdk_ros::MFIOResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::dji_osdk_ros::MFIOResponse_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::dji_osdk_ros::MFIOResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "043ff3265f9d1adda151364edd27337c";
  }

  static const char* value(const ::dji_osdk_ros::MFIOResponse_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x043ff3265f9d1addULL;
  static const uint64_t static_value2 = 0xa151364edd27337cULL;
};

template<class ContainerAllocator>
struct DataType< ::dji_osdk_ros::MFIOResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "dji_osdk_ros/MFIOResponse";
  }

  static const char* value(const ::dji_osdk_ros::MFIOResponse_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::dji_osdk_ros::MFIOResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "uint32 read_value\n"
"\n"
;
  }

  static const char* value(const ::dji_osdk_ros::MFIOResponse_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::dji_osdk_ros::MFIOResponse_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.read_value);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct MFIOResponse_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::dji_osdk_ros::MFIOResponse_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::dji_osdk_ros::MFIOResponse_<ContainerAllocator>& v)
  {
    s << indent << "read_value: ";
    Printer<uint32_t>::stream(s, indent + "  ", v.read_value);
  }
};

} // namespace message_operations
} // namespace ros

#endif // DJI_OSDK_ROS_MESSAGE_MFIORESPONSE_H
