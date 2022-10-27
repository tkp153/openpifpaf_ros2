// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from openpifpaf_ros2_msgs:msg/Pose3DArray.idl
// generated code does not contain a copyright notice

#ifndef OPENPIFPAF_ROS2_MSGS__MSG__DETAIL__POSE3_D_ARRAY__BUILDER_HPP_
#define OPENPIFPAF_ROS2_MSGS__MSG__DETAIL__POSE3_D_ARRAY__BUILDER_HPP_

#include "openpifpaf_ros2_msgs/msg/detail/pose3_d_array__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace openpifpaf_ros2_msgs
{

namespace msg
{

namespace builder
{

class Init_Pose3DArray_poses3d
{
public:
  Init_Pose3DArray_poses3d()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::openpifpaf_ros2_msgs::msg::Pose3DArray poses3d(::openpifpaf_ros2_msgs::msg::Pose3DArray::_poses3d_type arg)
  {
    msg_.poses3d = std::move(arg);
    return std::move(msg_);
  }

private:
  ::openpifpaf_ros2_msgs::msg::Pose3DArray msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::openpifpaf_ros2_msgs::msg::Pose3DArray>()
{
  return openpifpaf_ros2_msgs::msg::builder::Init_Pose3DArray_poses3d();
}

}  // namespace openpifpaf_ros2_msgs

#endif  // OPENPIFPAF_ROS2_MSGS__MSG__DETAIL__POSE3_D_ARRAY__BUILDER_HPP_
