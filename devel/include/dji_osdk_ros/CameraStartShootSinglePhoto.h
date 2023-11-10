// Generated by gencpp from file dji_osdk_ros/CameraStartShootSinglePhoto.msg
// DO NOT EDIT!


#ifndef DJI_OSDK_ROS_MESSAGE_CAMERASTARTSHOOTSINGLEPHOTO_H
#define DJI_OSDK_ROS_MESSAGE_CAMERASTARTSHOOTSINGLEPHOTO_H

#include <ros/service_traits.h>


#include <dji_osdk_ros/CameraStartShootSinglePhotoRequest.h>
#include <dji_osdk_ros/CameraStartShootSinglePhotoResponse.h>


namespace dji_osdk_ros
{

struct CameraStartShootSinglePhoto
{

typedef CameraStartShootSinglePhotoRequest Request;
typedef CameraStartShootSinglePhotoResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct CameraStartShootSinglePhoto
} // namespace dji_osdk_ros


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::dji_osdk_ros::CameraStartShootSinglePhoto > {
  static const char* value()
  {
    return "71b2b29d454b340190356e9e51a9c2fe";
  }

  static const char* value(const ::dji_osdk_ros::CameraStartShootSinglePhoto&) { return value(); }
};

template<>
struct DataType< ::dji_osdk_ros::CameraStartShootSinglePhoto > {
  static const char* value()
  {
    return "dji_osdk_ros/CameraStartShootSinglePhoto";
  }

  static const char* value(const ::dji_osdk_ros::CameraStartShootSinglePhoto&) { return value(); }
};


// service_traits::MD5Sum< ::dji_osdk_ros::CameraStartShootSinglePhotoRequest> should match
// service_traits::MD5Sum< ::dji_osdk_ros::CameraStartShootSinglePhoto >
template<>
struct MD5Sum< ::dji_osdk_ros::CameraStartShootSinglePhotoRequest>
{
  static const char* value()
  {
    return MD5Sum< ::dji_osdk_ros::CameraStartShootSinglePhoto >::value();
  }
  static const char* value(const ::dji_osdk_ros::CameraStartShootSinglePhotoRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::dji_osdk_ros::CameraStartShootSinglePhotoRequest> should match
// service_traits::DataType< ::dji_osdk_ros::CameraStartShootSinglePhoto >
template<>
struct DataType< ::dji_osdk_ros::CameraStartShootSinglePhotoRequest>
{
  static const char* value()
  {
    return DataType< ::dji_osdk_ros::CameraStartShootSinglePhoto >::value();
  }
  static const char* value(const ::dji_osdk_ros::CameraStartShootSinglePhotoRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::dji_osdk_ros::CameraStartShootSinglePhotoResponse> should match
// service_traits::MD5Sum< ::dji_osdk_ros::CameraStartShootSinglePhoto >
template<>
struct MD5Sum< ::dji_osdk_ros::CameraStartShootSinglePhotoResponse>
{
  static const char* value()
  {
    return MD5Sum< ::dji_osdk_ros::CameraStartShootSinglePhoto >::value();
  }
  static const char* value(const ::dji_osdk_ros::CameraStartShootSinglePhotoResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::dji_osdk_ros::CameraStartShootSinglePhotoResponse> should match
// service_traits::DataType< ::dji_osdk_ros::CameraStartShootSinglePhoto >
template<>
struct DataType< ::dji_osdk_ros::CameraStartShootSinglePhotoResponse>
{
  static const char* value()
  {
    return DataType< ::dji_osdk_ros::CameraStartShootSinglePhoto >::value();
  }
  static const char* value(const ::dji_osdk_ros::CameraStartShootSinglePhotoResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // DJI_OSDK_ROS_MESSAGE_CAMERASTARTSHOOTSINGLEPHOTO_H
