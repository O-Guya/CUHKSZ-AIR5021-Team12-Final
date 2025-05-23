// Generated by gencpp from file sagittarius_object_color_detector/SGRCtrlActionGoal.msg
// DO NOT EDIT!


#ifndef SAGITTARIUS_OBJECT_COLOR_DETECTOR_MESSAGE_SGRCTRLACTIONGOAL_H
#define SAGITTARIUS_OBJECT_COLOR_DETECTOR_MESSAGE_SGRCTRLACTIONGOAL_H


#include <string>
#include <vector>
#include <memory>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <std_msgs/Header.h>
#include <actionlib_msgs/GoalID.h>
#include <sagittarius_object_color_detector/SGRCtrlGoal.h>

namespace sagittarius_object_color_detector
{
template <class ContainerAllocator>
struct SGRCtrlActionGoal_
{
  typedef SGRCtrlActionGoal_<ContainerAllocator> Type;

  SGRCtrlActionGoal_()
    : header()
    , goal_id()
    , goal()  {
    }
  SGRCtrlActionGoal_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , goal_id(_alloc)
    , goal(_alloc)  {
  (void)_alloc;
    }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef  ::actionlib_msgs::GoalID_<ContainerAllocator>  _goal_id_type;
  _goal_id_type goal_id;

   typedef  ::sagittarius_object_color_detector::SGRCtrlGoal_<ContainerAllocator>  _goal_type;
  _goal_type goal;





  typedef boost::shared_ptr< ::sagittarius_object_color_detector::SGRCtrlActionGoal_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::sagittarius_object_color_detector::SGRCtrlActionGoal_<ContainerAllocator> const> ConstPtr;

}; // struct SGRCtrlActionGoal_

typedef ::sagittarius_object_color_detector::SGRCtrlActionGoal_<std::allocator<void> > SGRCtrlActionGoal;

typedef boost::shared_ptr< ::sagittarius_object_color_detector::SGRCtrlActionGoal > SGRCtrlActionGoalPtr;
typedef boost::shared_ptr< ::sagittarius_object_color_detector::SGRCtrlActionGoal const> SGRCtrlActionGoalConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::sagittarius_object_color_detector::SGRCtrlActionGoal_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::sagittarius_object_color_detector::SGRCtrlActionGoal_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::sagittarius_object_color_detector::SGRCtrlActionGoal_<ContainerAllocator1> & lhs, const ::sagittarius_object_color_detector::SGRCtrlActionGoal_<ContainerAllocator2> & rhs)
{
  return lhs.header == rhs.header &&
    lhs.goal_id == rhs.goal_id &&
    lhs.goal == rhs.goal;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::sagittarius_object_color_detector::SGRCtrlActionGoal_<ContainerAllocator1> & lhs, const ::sagittarius_object_color_detector::SGRCtrlActionGoal_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace sagittarius_object_color_detector

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::sagittarius_object_color_detector::SGRCtrlActionGoal_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::sagittarius_object_color_detector::SGRCtrlActionGoal_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::sagittarius_object_color_detector::SGRCtrlActionGoal_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::sagittarius_object_color_detector::SGRCtrlActionGoal_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::sagittarius_object_color_detector::SGRCtrlActionGoal_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::sagittarius_object_color_detector::SGRCtrlActionGoal_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::sagittarius_object_color_detector::SGRCtrlActionGoal_<ContainerAllocator> >
{
  static const char* value()
  {
    return "88690564d9e0e03f5ffd356cf575c626";
  }

  static const char* value(const ::sagittarius_object_color_detector::SGRCtrlActionGoal_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x88690564d9e0e03fULL;
  static const uint64_t static_value2 = 0x5ffd356cf575c626ULL;
};

template<class ContainerAllocator>
struct DataType< ::sagittarius_object_color_detector::SGRCtrlActionGoal_<ContainerAllocator> >
{
  static const char* value()
  {
    return "sagittarius_object_color_detector/SGRCtrlActionGoal";
  }

  static const char* value(const ::sagittarius_object_color_detector::SGRCtrlActionGoal_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::sagittarius_object_color_detector::SGRCtrlActionGoal_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======\n"
"\n"
"Header header\n"
"actionlib_msgs/GoalID goal_id\n"
"SGRCtrlGoal goal\n"
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
"\n"
"================================================================================\n"
"MSG: actionlib_msgs/GoalID\n"
"# The stamp should store the time at which this goal was requested.\n"
"# It is used by an action server when it tries to preempt all\n"
"# goals that were requested before a certain time\n"
"time stamp\n"
"\n"
"# The id provides a way to associate feedback and\n"
"# result message with specific goal requests. The id\n"
"# specified must be unique.\n"
"string id\n"
"\n"
"\n"
"================================================================================\n"
"MSG: sagittarius_object_color_detector/SGRCtrlGoal\n"
"# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======\n"
"# Define the goal\n"
"\n"
"# grasp_type 参数的定义项\n"
"# 设置当前夹爪状态，在动作执行之前设置\n"
"uint8 GRASP_NONE = 0 # 自定义动作下使用，夹爪不做处理\n"
"uint8 GRASP_OPEN = 1 # 打开夹爪, 放下动作\n"
"uint8 GRASP_CLOSE = 2 # 闭合夹爪, 抓取动作\n"
"\n"
"# action_type 参数的定义项\n"
"# 需要执行动作的类型，可以指定末端姿态或者自动计算\n"
"# 自定义姿态：是让机械臂到某个目标点\n"
"# 预设动作：是执行某个预设的一系列动作\n"
"uint8 ACTION_TYPE_XYZ = 0 # 自定义姿态：末端姿态使用动态计算\n"
"uint8 ACTION_TYPE_XYZ_RPY = 1 # 自定义姿态：末端姿态使用给定姿态\n"
"uint8 ACTION_TYPE_DEFINE_STAY = 2 # 预设动作：待机状态\n"
"uint8 ACTION_TYPE_DEFINE_SAVE = 3 # 预设动作：安全位置状态\n"
"uint8 ACTION_TYPE_PICK_XYZ = 4 # 预设动作：XYZ拾取动作\n"
"uint8 ACTION_TYPE_PICK_XYZ_RPY = 5 # 预设动作：XYZ+RPY拾取动作\n"
"uint8 ACTION_TYPE_PUT_XYZ = 6 # 预设动作：XYZ放下动作\n"
"uint8 ACTION_TYPE_PUT_XYZ_RPY = 7 # 预设动作：XYZ+RPY放下动作\n"
"\n"
"uint8 grasp_type  # 末端初始化状态\n"
"uint8 action_type  # 动作类型\n"
"\n"
"# 目标点位置\n"
"float64 pos_x\n"
"float64 pos_y\n"
"float64 pos_z\n"
"float64 pos_roll\n"
"float64 pos_pitch\n"
"float64 pos_yaw\n"
"\n"
;
  }

  static const char* value(const ::sagittarius_object_color_detector::SGRCtrlActionGoal_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::sagittarius_object_color_detector::SGRCtrlActionGoal_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.goal_id);
      stream.next(m.goal);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct SGRCtrlActionGoal_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::sagittarius_object_color_detector::SGRCtrlActionGoal_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::sagittarius_object_color_detector::SGRCtrlActionGoal_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "goal_id: ";
    s << std::endl;
    Printer< ::actionlib_msgs::GoalID_<ContainerAllocator> >::stream(s, indent + "  ", v.goal_id);
    s << indent << "goal: ";
    s << std::endl;
    Printer< ::sagittarius_object_color_detector::SGRCtrlGoal_<ContainerAllocator> >::stream(s, indent + "  ", v.goal);
  }
};

} // namespace message_operations
} // namespace ros

#endif // SAGITTARIUS_OBJECT_COLOR_DETECTOR_MESSAGE_SGRCTRLACTIONGOAL_H
