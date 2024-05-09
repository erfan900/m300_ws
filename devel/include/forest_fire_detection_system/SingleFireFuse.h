// Generated by gencpp from file forest_fire_detection_system/SingleFireFuse.msg
// DO NOT EDIT!


#ifndef FOREST_FIRE_DETECTION_SYSTEM_MESSAGE_SINGLEFIREFUSE_H
#define FOREST_FIRE_DETECTION_SYSTEM_MESSAGE_SINGLEFIREFUSE_H


#include <string>
#include <vector>
#include <memory>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <std_msgs/Header.h>

namespace forest_fire_detection_system
{
template <class ContainerAllocator>
struct SingleFireFuse_
{
  typedef SingleFireFuse_<ContainerAllocator> Type;

  SingleFireFuse_()
    : header()
    , ir_img_width(0)
    , ir_img_height(0)
    , rgb_img_width(0)
    , rgb_img_height(0)
    , target_type(0)
    , focuse_mode(0)
    , ir_img_x(0.0)
    , ir_img_y(0.0)
    , rgb_img_x(0.0)
    , rgb_img_y(0.0)
    , scale(0.0)
    , offset_x(0.0)
    , offset_y(0.0)  {
    }
  SingleFireFuse_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , ir_img_width(0)
    , ir_img_height(0)
    , rgb_img_width(0)
    , rgb_img_height(0)
    , target_type(0)
    , focuse_mode(0)
    , ir_img_x(0.0)
    , ir_img_y(0.0)
    , rgb_img_x(0.0)
    , rgb_img_y(0.0)
    , scale(0.0)
    , offset_x(0.0)
    , offset_y(0.0)  {
  (void)_alloc;
    }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef uint16_t _ir_img_width_type;
  _ir_img_width_type ir_img_width;

   typedef uint16_t _ir_img_height_type;
  _ir_img_height_type ir_img_height;

   typedef uint16_t _rgb_img_width_type;
  _rgb_img_width_type rgb_img_width;

   typedef uint16_t _rgb_img_height_type;
  _rgb_img_height_type rgb_img_height;

   typedef uint8_t _target_type_type;
  _target_type_type target_type;

   typedef uint8_t _focuse_mode_type;
  _focuse_mode_type focuse_mode;

   typedef float _ir_img_x_type;
  _ir_img_x_type ir_img_x;

   typedef float _ir_img_y_type;
  _ir_img_y_type ir_img_y;

   typedef float _rgb_img_x_type;
  _rgb_img_x_type rgb_img_x;

   typedef float _rgb_img_y_type;
  _rgb_img_y_type rgb_img_y;

   typedef float _scale_type;
  _scale_type scale;

   typedef float _offset_x_type;
  _offset_x_type offset_x;

   typedef float _offset_y_type;
  _offset_y_type offset_y;



// reducing the odds to have name collisions with Windows.h 
#if defined(_WIN32) && defined(IS_BACKGROUND)
  #undef IS_BACKGROUND
#endif
#if defined(_WIN32) && defined(IS_TARGET)
  #undef IS_TARGET
#endif
#if defined(_WIN32) && defined(IS_UNKNOWN)
  #undef IS_UNKNOWN
#endif
#if defined(_WIN32) && defined(USE_NONE)
  #undef USE_NONE
#endif
#if defined(_WIN32) && defined(USE_IR)
  #undef USE_IR
#endif
#if defined(_WIN32) && defined(USE_RGB)
  #undef USE_RGB
#endif

  enum {
    IS_BACKGROUND = 0u,
    IS_TARGET = 1u,
    IS_UNKNOWN = 255u,
    USE_NONE = 0u,
    USE_IR = 1u,
    USE_RGB = 2u,
  };


  typedef boost::shared_ptr< ::forest_fire_detection_system::SingleFireFuse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::forest_fire_detection_system::SingleFireFuse_<ContainerAllocator> const> ConstPtr;

}; // struct SingleFireFuse_

typedef ::forest_fire_detection_system::SingleFireFuse_<std::allocator<void> > SingleFireFuse;

typedef boost::shared_ptr< ::forest_fire_detection_system::SingleFireFuse > SingleFireFusePtr;
typedef boost::shared_ptr< ::forest_fire_detection_system::SingleFireFuse const> SingleFireFuseConstPtr;

// constants requiring out of line definition

   

   

   

   

   

   



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::forest_fire_detection_system::SingleFireFuse_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::forest_fire_detection_system::SingleFireFuse_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::forest_fire_detection_system::SingleFireFuse_<ContainerAllocator1> & lhs, const ::forest_fire_detection_system::SingleFireFuse_<ContainerAllocator2> & rhs)
{
  return lhs.header == rhs.header &&
    lhs.ir_img_width == rhs.ir_img_width &&
    lhs.ir_img_height == rhs.ir_img_height &&
    lhs.rgb_img_width == rhs.rgb_img_width &&
    lhs.rgb_img_height == rhs.rgb_img_height &&
    lhs.target_type == rhs.target_type &&
    lhs.focuse_mode == rhs.focuse_mode &&
    lhs.ir_img_x == rhs.ir_img_x &&
    lhs.ir_img_y == rhs.ir_img_y &&
    lhs.rgb_img_x == rhs.rgb_img_x &&
    lhs.rgb_img_y == rhs.rgb_img_y &&
    lhs.scale == rhs.scale &&
    lhs.offset_x == rhs.offset_x &&
    lhs.offset_y == rhs.offset_y;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::forest_fire_detection_system::SingleFireFuse_<ContainerAllocator1> & lhs, const ::forest_fire_detection_system::SingleFireFuse_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace forest_fire_detection_system

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::forest_fire_detection_system::SingleFireFuse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::forest_fire_detection_system::SingleFireFuse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::forest_fire_detection_system::SingleFireFuse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::forest_fire_detection_system::SingleFireFuse_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::forest_fire_detection_system::SingleFireFuse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::forest_fire_detection_system::SingleFireFuse_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::forest_fire_detection_system::SingleFireFuse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "5acee9e57a872fd936b9b0d95ff37894";
  }

  static const char* value(const ::forest_fire_detection_system::SingleFireFuse_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x5acee9e57a872fd9ULL;
  static const uint64_t static_value2 = 0x36b9b0d95ff37894ULL;
};

template<class ContainerAllocator>
struct DataType< ::forest_fire_detection_system::SingleFireFuse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "forest_fire_detection_system/SingleFireFuse";
  }

  static const char* value(const ::forest_fire_detection_system::SingleFireFuse_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::forest_fire_detection_system::SingleFireFuse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "Header header\n"
"\n"
"# image detecting on info\n"
"uint16 ir_img_width\n"
"uint16 ir_img_height\n"
"uint16 rgb_img_width\n"
"uint16 rgb_img_height\n"
"\n"
"# target type\n"
"uint8 IS_BACKGROUND = 0\n"
"uint8 IS_TARGET = 1\n"
"uint8 IS_UNKNOWN = 255\n"
"\n"
"uint8 target_type\n"
"\n"
"# focuse mode\n"
"uint8 USE_NONE = 0\n"
"uint8 USE_IR  = 1\n"
"uint8 USE_RGB  = 2\n"
"\n"
"uint8 focuse_mode\n"
"\n"
"# the x and y pos (sub-pixel) of the single fire, opencv style coordinates\n"
"float32 ir_img_x\n"
"float32 ir_img_y\n"
"float32 rgb_img_x\n"
"float32 rgb_img_y\n"
"\n"
"# translation(ir->rgb)\n"
"float32 scale\n"
"float32 offset_x\n"
"float32 offset_y\n"
"\n"
"================================================================================\n"
"MSG: std_msgs/Header\n"
"# Standard metadata for higher-level stamped data types.\n"
"# This is generally used to communicate timestamped data \n"
"# in a particular coordinate frame.\n"
"# \n"
"# sequence ID: consecutively increasing ID \n"
"uint32 seq\n"
"#Two-integer timestamp that is expressed as:\n"
"# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')\n"
"# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')\n"
"# time-handling sugar is provided by the client library\n"
"time stamp\n"
"#Frame this data is associated with\n"
"string frame_id\n"
;
  }

  static const char* value(const ::forest_fire_detection_system::SingleFireFuse_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::forest_fire_detection_system::SingleFireFuse_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.ir_img_width);
      stream.next(m.ir_img_height);
      stream.next(m.rgb_img_width);
      stream.next(m.rgb_img_height);
      stream.next(m.target_type);
      stream.next(m.focuse_mode);
      stream.next(m.ir_img_x);
      stream.next(m.ir_img_y);
      stream.next(m.rgb_img_x);
      stream.next(m.rgb_img_y);
      stream.next(m.scale);
      stream.next(m.offset_x);
      stream.next(m.offset_y);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct SingleFireFuse_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::forest_fire_detection_system::SingleFireFuse_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::forest_fire_detection_system::SingleFireFuse_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "ir_img_width: ";
    Printer<uint16_t>::stream(s, indent + "  ", v.ir_img_width);
    s << indent << "ir_img_height: ";
    Printer<uint16_t>::stream(s, indent + "  ", v.ir_img_height);
    s << indent << "rgb_img_width: ";
    Printer<uint16_t>::stream(s, indent + "  ", v.rgb_img_width);
    s << indent << "rgb_img_height: ";
    Printer<uint16_t>::stream(s, indent + "  ", v.rgb_img_height);
    s << indent << "target_type: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.target_type);
    s << indent << "focuse_mode: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.focuse_mode);
    s << indent << "ir_img_x: ";
    Printer<float>::stream(s, indent + "  ", v.ir_img_x);
    s << indent << "ir_img_y: ";
    Printer<float>::stream(s, indent + "  ", v.ir_img_y);
    s << indent << "rgb_img_x: ";
    Printer<float>::stream(s, indent + "  ", v.rgb_img_x);
    s << indent << "rgb_img_y: ";
    Printer<float>::stream(s, indent + "  ", v.rgb_img_y);
    s << indent << "scale: ";
    Printer<float>::stream(s, indent + "  ", v.scale);
    s << indent << "offset_x: ";
    Printer<float>::stream(s, indent + "  ", v.offset_x);
    s << indent << "offset_y: ";
    Printer<float>::stream(s, indent + "  ", v.offset_y);
  }
};

} // namespace message_operations
} // namespace ros

#endif // FOREST_FIRE_DETECTION_SYSTEM_MESSAGE_SINGLEFIREFUSE_H
