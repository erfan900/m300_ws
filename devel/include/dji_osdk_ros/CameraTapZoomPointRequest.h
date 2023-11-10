// Generated by gencpp from file dji_osdk_ros/CameraTapZoomPointRequest.msg
// DO NOT EDIT!


#ifndef DJI_OSDK_ROS_MESSAGE_CAMERATAPZOOMPOINTREQUEST_H
#define DJI_OSDK_ROS_MESSAGE_CAMERATAPZOOMPOINTREQUEST_H


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
struct CameraTapZoomPointRequest_
{
  typedef CameraTapZoomPointRequest_<ContainerAllocator> Type;

  CameraTapZoomPointRequest_()
    : payload_index(0)
    , multiplier(0)
    , x(0.0)
    , y(0.0)  {
    }
  CameraTapZoomPointRequest_(const ContainerAllocator& _alloc)
    : payload_index(0)
    , multiplier(0)
    , x(0.0)
    , y(0.0)  {
  (void)_alloc;
    }



   typedef uint8_t _payload_index_type;
  _payload_index_type payload_index;

   typedef uint8_t _multiplier_type;
  _multiplier_type multiplier;

   typedef float _x_type;
  _x_type x;

   typedef float _y_type;
  _y_type y;





  typedef boost::shared_ptr< ::dji_osdk_ros::CameraTapZoomPointRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::dji_osdk_ros::CameraTapZoomPointRequest_<ContainerAllocator> const> ConstPtr;

}; // struct CameraTapZoomPointRequest_

typedef ::dji_osdk_ros::CameraTapZoomPointRequest_<std::allocator<void> > CameraTapZoomPointRequest;

typedef boost::shared_ptr< ::dji_osdk_ros::CameraTapZoomPointRequest > CameraTapZoomPointRequestPtr;
typedef boost::shared_ptr< ::dji_osdk_ros::CameraTapZoomPointRequest const> CameraTapZoomPointRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::dji_osdk_ros::CameraTapZoomPointRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::dji_osdk_ros::CameraTapZoomPointRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::dji_osdk_ros::CameraTapZoomPointRequest_<ContainerAllocator1> & lhs, const ::dji_osdk_ros::CameraTapZoomPointRequest_<ContainerAllocator2> & rhs)
{
  return lhs.payload_index == rhs.payload_index &&
    lhs.multiplier == rhs.multiplier &&
    lhs.x == rhs.x &&
    lhs.y == rhs.y;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::dji_osdk_ros::CameraTapZoomPointRequest_<ContainerAllocator1> & lhs, const ::dji_osdk_ros::CameraTapZoomPointRequest_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace dji_osdk_ros

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::dji_osdk_ros::CameraTapZoomPointRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::dji_osdk_ros::CameraTapZoomPointRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::dji_osdk_ros::CameraTapZoomPointRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::dji_osdk_ros::CameraTapZoomPointRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::dji_osdk_ros::CameraTapZoomPointRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::dji_osdk_ros::CameraTapZoomPointRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::dji_osdk_ros::CameraTapZoomPointRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "076bf0aff3d25a6b03acbcb3de6f3567";
  }

  static const char* value(const ::dji_osdk_ros::CameraTapZoomPointRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x076bf0aff3d25a6bULL;
  static const uint64_t static_value2 = 0x03acbcb3de6f3567ULL;
};

template<class ContainerAllocator>
struct DataType< ::dji_osdk_ros::CameraTapZoomPointRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "dji_osdk_ros/CameraTapZoomPointRequest";
  }

  static const char* value(const ::dji_osdk_ros::CameraTapZoomPointRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::dji_osdk_ros::CameraTapZoomPointRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "#request\n"
"uint8 payload_index #see enum class PayloadIndex in common_type.h\n"
"uint8 multiplier #Data struct of tap zoom multiplier used by user. Limit: 1~5\n"
"float32 x  # range from 0~1, top left corner is origin point\n"
"float32 y  # range from 0~1, top left corner is origin point\n"
;
  }

  static const char* value(const ::dji_osdk_ros::CameraTapZoomPointRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::dji_osdk_ros::CameraTapZoomPointRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.payload_index);
      stream.next(m.multiplier);
      stream.next(m.x);
      stream.next(m.y);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct CameraTapZoomPointRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::dji_osdk_ros::CameraTapZoomPointRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::dji_osdk_ros::CameraTapZoomPointRequest_<ContainerAllocator>& v)
  {
    s << indent << "payload_index: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.payload_index);
    s << indent << "multiplier: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.multiplier);
    s << indent << "x: ";
    Printer<float>::stream(s, indent + "  ", v.x);
    s << indent << "y: ";
    Printer<float>::stream(s, indent + "  ", v.y);
  }
};

} // namespace message_operations
} // namespace ros

#endif // DJI_OSDK_ROS_MESSAGE_CAMERATAPZOOMPOINTREQUEST_H
