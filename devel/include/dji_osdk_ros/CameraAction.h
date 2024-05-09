// Generated by gencpp from file dji_osdk_ros/CameraAction.msg
// DO NOT EDIT!


#ifndef DJI_OSDK_ROS_MESSAGE_CAMERAACTION_H
#define DJI_OSDK_ROS_MESSAGE_CAMERAACTION_H

#include <ros/service_traits.h>


#include <dji_osdk_ros/CameraActionRequest.h>
#include <dji_osdk_ros/CameraActionResponse.h>


namespace dji_osdk_ros
{

struct CameraAction
{

typedef CameraActionRequest Request;
typedef CameraActionResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct CameraAction
} // namespace dji_osdk_ros


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::dji_osdk_ros::CameraAction > {
  static const char* value()
  {
    return "cffa80c600cf5ffacb2c7279944f208e";
  }

  static const char* value(const ::dji_osdk_ros::CameraAction&) { return value(); }
};

template<>
struct DataType< ::dji_osdk_ros::CameraAction > {
  static const char* value()
  {
    return "dji_osdk_ros/CameraAction";
  }

  static const char* value(const ::dji_osdk_ros::CameraAction&) { return value(); }
};


// service_traits::MD5Sum< ::dji_osdk_ros::CameraActionRequest> should match
// service_traits::MD5Sum< ::dji_osdk_ros::CameraAction >
template<>
struct MD5Sum< ::dji_osdk_ros::CameraActionRequest>
{
  static const char* value()
  {
    return MD5Sum< ::dji_osdk_ros::CameraAction >::value();
  }
  static const char* value(const ::dji_osdk_ros::CameraActionRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::dji_osdk_ros::CameraActionRequest> should match
// service_traits::DataType< ::dji_osdk_ros::CameraAction >
template<>
struct DataType< ::dji_osdk_ros::CameraActionRequest>
{
  static const char* value()
  {
    return DataType< ::dji_osdk_ros::CameraAction >::value();
  }
  static const char* value(const ::dji_osdk_ros::CameraActionRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::dji_osdk_ros::CameraActionResponse> should match
// service_traits::MD5Sum< ::dji_osdk_ros::CameraAction >
template<>
struct MD5Sum< ::dji_osdk_ros::CameraActionResponse>
{
  static const char* value()
  {
    return MD5Sum< ::dji_osdk_ros::CameraAction >::value();
  }
  static const char* value(const ::dji_osdk_ros::CameraActionResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::dji_osdk_ros::CameraActionResponse> should match
// service_traits::DataType< ::dji_osdk_ros::CameraAction >
template<>
struct DataType< ::dji_osdk_ros::CameraActionResponse>
{
  static const char* value()
  {
    return DataType< ::dji_osdk_ros::CameraAction >::value();
  }
  static const char* value(const ::dji_osdk_ros::CameraActionResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // DJI_OSDK_ROS_MESSAGE_CAMERAACTION_H
