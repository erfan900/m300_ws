// Generated by gencpp from file dji_osdk_ros/SetHardSync.msg
// DO NOT EDIT!


#ifndef DJI_OSDK_ROS_MESSAGE_SETHARDSYNC_H
#define DJI_OSDK_ROS_MESSAGE_SETHARDSYNC_H

#include <ros/service_traits.h>


#include <dji_osdk_ros/SetHardSyncRequest.h>
#include <dji_osdk_ros/SetHardSyncResponse.h>


namespace dji_osdk_ros
{

struct SetHardSync
{

typedef SetHardSyncRequest Request;
typedef SetHardSyncResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct SetHardSync
} // namespace dji_osdk_ros


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::dji_osdk_ros::SetHardSync > {
  static const char* value()
  {
    return "11e826f14456b3511264f6a734868e08";
  }

  static const char* value(const ::dji_osdk_ros::SetHardSync&) { return value(); }
};

template<>
struct DataType< ::dji_osdk_ros::SetHardSync > {
  static const char* value()
  {
    return "dji_osdk_ros/SetHardSync";
  }

  static const char* value(const ::dji_osdk_ros::SetHardSync&) { return value(); }
};


// service_traits::MD5Sum< ::dji_osdk_ros::SetHardSyncRequest> should match
// service_traits::MD5Sum< ::dji_osdk_ros::SetHardSync >
template<>
struct MD5Sum< ::dji_osdk_ros::SetHardSyncRequest>
{
  static const char* value()
  {
    return MD5Sum< ::dji_osdk_ros::SetHardSync >::value();
  }
  static const char* value(const ::dji_osdk_ros::SetHardSyncRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::dji_osdk_ros::SetHardSyncRequest> should match
// service_traits::DataType< ::dji_osdk_ros::SetHardSync >
template<>
struct DataType< ::dji_osdk_ros::SetHardSyncRequest>
{
  static const char* value()
  {
    return DataType< ::dji_osdk_ros::SetHardSync >::value();
  }
  static const char* value(const ::dji_osdk_ros::SetHardSyncRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::dji_osdk_ros::SetHardSyncResponse> should match
// service_traits::MD5Sum< ::dji_osdk_ros::SetHardSync >
template<>
struct MD5Sum< ::dji_osdk_ros::SetHardSyncResponse>
{
  static const char* value()
  {
    return MD5Sum< ::dji_osdk_ros::SetHardSync >::value();
  }
  static const char* value(const ::dji_osdk_ros::SetHardSyncResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::dji_osdk_ros::SetHardSyncResponse> should match
// service_traits::DataType< ::dji_osdk_ros::SetHardSync >
template<>
struct DataType< ::dji_osdk_ros::SetHardSyncResponse>
{
  static const char* value()
  {
    return DataType< ::dji_osdk_ros::SetHardSync >::value();
  }
  static const char* value(const ::dji_osdk_ros::SetHardSyncResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // DJI_OSDK_ROS_MESSAGE_SETHARDSYNC_H
