// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from openpifpaf_ros2_msgs:msg/Pose3D.idl
// generated code does not contain a copyright notice

#ifndef OPENPIFPAF_ROS2_MSGS__MSG__DETAIL__POSE3_D__BUILDER_HPP_
#define OPENPIFPAF_ROS2_MSGS__MSG__DETAIL__POSE3_D__BUILDER_HPP_

#include "openpifpaf_ros2_msgs/msg/detail/pose3_d__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace openpifpaf_ros2_msgs
{

namespace msg
{

namespace builder
{

class Init_Pose3D_dir_z
{
public:
  explicit Init_Pose3D_dir_z(::openpifpaf_ros2_msgs::msg::Pose3D & msg)
  : msg_(msg)
  {}
  ::openpifpaf_ros2_msgs::msg::Pose3D dir_z(::openpifpaf_ros2_msgs::msg::Pose3D::_dir_z_type arg)
  {
    msg_.dir_z = std::move(arg);
    return std::move(msg_);
  }

private:
  ::openpifpaf_ros2_msgs::msg::Pose3D msg_;
};

class Init_Pose3D_dir_y
{
public:
  explicit Init_Pose3D_dir_y(::openpifpaf_ros2_msgs::msg::Pose3D & msg)
  : msg_(msg)
  {}
  Init_Pose3D_dir_z dir_y(::openpifpaf_ros2_msgs::msg::Pose3D::_dir_y_type arg)
  {
    msg_.dir_y = std::move(arg);
    return Init_Pose3D_dir_z(msg_);
  }

private:
  ::openpifpaf_ros2_msgs::msg::Pose3D msg_;
};

class Init_Pose3D_dir_x
{
public:
  explicit Init_Pose3D_dir_x(::openpifpaf_ros2_msgs::msg::Pose3D & msg)
  : msg_(msg)
  {}
  Init_Pose3D_dir_y dir_x(::openpifpaf_ros2_msgs::msg::Pose3D::_dir_x_type arg)
  {
    msg_.dir_x = std::move(arg);
    return Init_Pose3D_dir_y(msg_);
  }

private:
  ::openpifpaf_ros2_msgs::msg::Pose3D msg_;
};

class Init_Pose3D_theta
{
public:
  explicit Init_Pose3D_theta(::openpifpaf_ros2_msgs::msg::Pose3D & msg)
  : msg_(msg)
  {}
  Init_Pose3D_dir_x theta(::openpifpaf_ros2_msgs::msg::Pose3D::_theta_type arg)
  {
    msg_.theta = std::move(arg);
    return Init_Pose3D_dir_x(msg_);
  }

private:
  ::openpifpaf_ros2_msgs::msg::Pose3D msg_;
};

class Init_Pose3D_pos_z
{
public:
  explicit Init_Pose3D_pos_z(::openpifpaf_ros2_msgs::msg::Pose3D & msg)
  : msg_(msg)
  {}
  Init_Pose3D_theta pos_z(::openpifpaf_ros2_msgs::msg::Pose3D::_pos_z_type arg)
  {
    msg_.pos_z = std::move(arg);
    return Init_Pose3D_theta(msg_);
  }

private:
  ::openpifpaf_ros2_msgs::msg::Pose3D msg_;
};

class Init_Pose3D_pos_y
{
public:
  explicit Init_Pose3D_pos_y(::openpifpaf_ros2_msgs::msg::Pose3D & msg)
  : msg_(msg)
  {}
  Init_Pose3D_pos_z pos_y(::openpifpaf_ros2_msgs::msg::Pose3D::_pos_y_type arg)
  {
    msg_.pos_y = std::move(arg);
    return Init_Pose3D_pos_z(msg_);
  }

private:
  ::openpifpaf_ros2_msgs::msg::Pose3D msg_;
};

class Init_Pose3D_pos_x
{
public:
  Init_Pose3D_pos_x()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Pose3D_pos_y pos_x(::openpifpaf_ros2_msgs::msg::Pose3D::_pos_x_type arg)
  {
    msg_.pos_x = std::move(arg);
    return Init_Pose3D_pos_y(msg_);
  }

private:
  ::openpifpaf_ros2_msgs::msg::Pose3D msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::openpifpaf_ros2_msgs::msg::Pose3D>()
{
  return openpifpaf_ros2_msgs::msg::builder::Init_Pose3D_pos_x();
}

}  // namespace openpifpaf_ros2_msgs

#endif  // OPENPIFPAF_ROS2_MSGS__MSG__DETAIL__POSE3_D__BUILDER_HPP_
