// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from openpifpaf_ros2_msgs:msg/Poses.idl
// generated code does not contain a copyright notice

#ifndef OPENPIFPAF_ROS2_MSGS__MSG__DETAIL__POSES__BUILDER_HPP_
#define OPENPIFPAF_ROS2_MSGS__MSG__DETAIL__POSES__BUILDER_HPP_

#include "openpifpaf_ros2_msgs/msg/detail/poses__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace openpifpaf_ros2_msgs
{

namespace msg
{

namespace builder
{

class Init_Poses_poses
{
public:
  explicit Init_Poses_poses(::openpifpaf_ros2_msgs::msg::Poses & msg)
  : msg_(msg)
  {}
  ::openpifpaf_ros2_msgs::msg::Poses poses(::openpifpaf_ros2_msgs::msg::Poses::_poses_type arg)
  {
    msg_.poses = std::move(arg);
    return std::move(msg_);
  }

private:
  ::openpifpaf_ros2_msgs::msg::Poses msg_;
};

class Init_Poses_header
{
public:
  Init_Poses_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Poses_poses header(::openpifpaf_ros2_msgs::msg::Poses::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_Poses_poses(msg_);
  }

private:
  ::openpifpaf_ros2_msgs::msg::Poses msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::openpifpaf_ros2_msgs::msg::Poses>()
{
  return openpifpaf_ros2_msgs::msg::builder::Init_Poses_header();
}

}  // namespace openpifpaf_ros2_msgs

#endif  // OPENPIFPAF_ROS2_MSGS__MSG__DETAIL__POSES__BUILDER_HPP_
