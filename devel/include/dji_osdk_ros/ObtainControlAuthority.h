// Generated by gencpp from file dji_osdk_ros/ObtainControlAuthority.msg
// DO NOT EDIT!


#ifndef DJI_OSDK_ROS_MESSAGE_OBTAINCONTROLAUTHORITY_H
#define DJI_OSDK_ROS_MESSAGE_OBTAINCONTROLAUTHORITY_H

#include <ros/service_traits.h>


#include <dji_osdk_ros/ObtainControlAuthorityRequest.h>
#include <dji_osdk_ros/ObtainControlAuthorityResponse.h>


namespace dji_osdk_ros
{

struct ObtainControlAuthority
{

typedef ObtainControlAuthorityRequest Request;
typedef ObtainControlAuthorityResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct ObtainControlAuthority
} // namespace dji_osdk_ros


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::dji_osdk_ros::ObtainControlAuthority > {
  static const char* value()
  {
    return "e82063bf828152ad11b7c5ce93e9a2dd";
  }

  static const char* value(const ::dji_osdk_ros::ObtainControlAuthority&) { return value(); }
};

template<>
struct DataType< ::dji_osdk_ros::ObtainControlAuthority > {
  static const char* value()
  {
    return "dji_osdk_ros/ObtainControlAuthority";
  }

  static const char* value(const ::dji_osdk_ros::ObtainControlAuthority&) { return value(); }
};


// service_traits::MD5Sum< ::dji_osdk_ros::ObtainControlAuthorityRequest> should match
// service_traits::MD5Sum< ::dji_osdk_ros::ObtainControlAuthority >
template<>
struct MD5Sum< ::dji_osdk_ros::ObtainControlAuthorityRequest>
{
  static const char* value()
  {
    return MD5Sum< ::dji_osdk_ros::ObtainControlAuthority >::value();
  }
  static const char* value(const ::dji_osdk_ros::ObtainControlAuthorityRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::dji_osdk_ros::ObtainControlAuthorityRequest> should match
// service_traits::DataType< ::dji_osdk_ros::ObtainControlAuthority >
template<>
struct DataType< ::dji_osdk_ros::ObtainControlAuthorityRequest>
{
  static const char* value()
  {
    return DataType< ::dji_osdk_ros::ObtainControlAuthority >::value();
  }
  static const char* value(const ::dji_osdk_ros::ObtainControlAuthorityRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::dji_osdk_ros::ObtainControlAuthorityResponse> should match
// service_traits::MD5Sum< ::dji_osdk_ros::ObtainControlAuthority >
template<>
struct MD5Sum< ::dji_osdk_ros::ObtainControlAuthorityResponse>
{
  static const char* value()
  {
    return MD5Sum< ::dji_osdk_ros::ObtainControlAuthority >::value();
  }
  static const char* value(const ::dji_osdk_ros::ObtainControlAuthorityResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::dji_osdk_ros::ObtainControlAuthorityResponse> should match
// service_traits::DataType< ::dji_osdk_ros::ObtainControlAuthority >
template<>
struct DataType< ::dji_osdk_ros::ObtainControlAuthorityResponse>
{
  static const char* value()
  {
    return DataType< ::dji_osdk_ros::ObtainControlAuthority >::value();
  }
  static const char* value(const ::dji_osdk_ros::ObtainControlAuthorityResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // DJI_OSDK_ROS_MESSAGE_OBTAINCONTROLAUTHORITY_H
