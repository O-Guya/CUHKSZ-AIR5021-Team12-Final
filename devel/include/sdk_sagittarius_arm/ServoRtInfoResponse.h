// Generated by gencpp from file sdk_sagittarius_arm/ServoRtInfoResponse.msg
// DO NOT EDIT!


#ifndef SDK_SAGITTARIUS_ARM_MESSAGE_SERVORTINFORESPONSE_H
#define SDK_SAGITTARIUS_ARM_MESSAGE_SERVORTINFORESPONSE_H


#include <string>
#include <vector>
#include <memory>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace sdk_sagittarius_arm
{
template <class ContainerAllocator>
struct ServoRtInfoResponse_
{
  typedef ServoRtInfoResponse_<ContainerAllocator> Type;

  ServoRtInfoResponse_()
    : speed(0)
    , payload(0)
    , voltage(0)
    , current(0)  {
    }
  ServoRtInfoResponse_(const ContainerAllocator& _alloc)
    : speed(0)
    , payload(0)
    , voltage(0)
    , current(0)  {
  (void)_alloc;
    }



   typedef int16_t _speed_type;
  _speed_type speed;

   typedef int16_t _payload_type;
  _payload_type payload;

   typedef uint8_t _voltage_type;
  _voltage_type voltage;

   typedef uint16_t _current_type;
  _current_type current;





  typedef boost::shared_ptr< ::sdk_sagittarius_arm::ServoRtInfoResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::sdk_sagittarius_arm::ServoRtInfoResponse_<ContainerAllocator> const> ConstPtr;

}; // struct ServoRtInfoResponse_

typedef ::sdk_sagittarius_arm::ServoRtInfoResponse_<std::allocator<void> > ServoRtInfoResponse;

typedef boost::shared_ptr< ::sdk_sagittarius_arm::ServoRtInfoResponse > ServoRtInfoResponsePtr;
typedef boost::shared_ptr< ::sdk_sagittarius_arm::ServoRtInfoResponse const> ServoRtInfoResponseConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::sdk_sagittarius_arm::ServoRtInfoResponse_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::sdk_sagittarius_arm::ServoRtInfoResponse_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::sdk_sagittarius_arm::ServoRtInfoResponse_<ContainerAllocator1> & lhs, const ::sdk_sagittarius_arm::ServoRtInfoResponse_<ContainerAllocator2> & rhs)
{
  return lhs.speed == rhs.speed &&
    lhs.payload == rhs.payload &&
    lhs.voltage == rhs.voltage &&
    lhs.current == rhs.current;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::sdk_sagittarius_arm::ServoRtInfoResponse_<ContainerAllocator1> & lhs, const ::sdk_sagittarius_arm::ServoRtInfoResponse_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace sdk_sagittarius_arm

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::sdk_sagittarius_arm::ServoRtInfoResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::sdk_sagittarius_arm::ServoRtInfoResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::sdk_sagittarius_arm::ServoRtInfoResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::sdk_sagittarius_arm::ServoRtInfoResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::sdk_sagittarius_arm::ServoRtInfoResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::sdk_sagittarius_arm::ServoRtInfoResponse_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::sdk_sagittarius_arm::ServoRtInfoResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "15d6e070ac72abaf596d9dae7ca80e56";
  }

  static const char* value(const ::sdk_sagittarius_arm::ServoRtInfoResponse_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x15d6e070ac72abafULL;
  static const uint64_t static_value2 = 0x596d9dae7ca80e56ULL;
};

template<class ContainerAllocator>
struct DataType< ::sdk_sagittarius_arm::ServoRtInfoResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "sdk_sagittarius_arm/ServoRtInfoResponse";
  }

  static const char* value(const ::sdk_sagittarius_arm::ServoRtInfoResponse_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::sdk_sagittarius_arm::ServoRtInfoResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "\n"
"# return the realtime state\n"
"# speed(50step/s)\n"
"# payload(0.1%)\n"
"# voltage(0.1V)\n"
"# current(1mA)\n"
"int16 speed\n"
"int16 payload\n"
"uint8 voltage\n"
"uint16 current\n"
"\n"
"\n"
;
  }

  static const char* value(const ::sdk_sagittarius_arm::ServoRtInfoResponse_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::sdk_sagittarius_arm::ServoRtInfoResponse_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.speed);
      stream.next(m.payload);
      stream.next(m.voltage);
      stream.next(m.current);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct ServoRtInfoResponse_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::sdk_sagittarius_arm::ServoRtInfoResponse_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::sdk_sagittarius_arm::ServoRtInfoResponse_<ContainerAllocator>& v)
  {
    s << indent << "speed: ";
    Printer<int16_t>::stream(s, indent + "  ", v.speed);
    s << indent << "payload: ";
    Printer<int16_t>::stream(s, indent + "  ", v.payload);
    s << indent << "voltage: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.voltage);
    s << indent << "current: ";
    Printer<uint16_t>::stream(s, indent + "  ", v.current);
  }
};

} // namespace message_operations
} // namespace ros

#endif // SDK_SAGITTARIUS_ARM_MESSAGE_SERVORTINFORESPONSE_H
