// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from openpifpaf_ros2_msgs:msg/Poses.idl
// generated code does not contain a copyright notice

#ifndef OPENPIFPAF_ROS2_MSGS__MSG__DETAIL__POSES__TRAITS_HPP_
#define OPENPIFPAF_ROS2_MSGS__MSG__DETAIL__POSES__TRAITS_HPP_

#include "openpifpaf_ros2_msgs/msg/detail/poses__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<openpifpaf_ros2_msgs::msg::Poses>()
{
  return "openpifpaf_ros2_msgs::msg::Poses";
}

template<>
inline const char * name<openpifpaf_ros2_msgs::msg::Poses>()
{
  return "openpifpaf_ros2_msgs/msg/Poses";
}

template<>
struct has_fixed_size<openpifpaf_ros2_msgs::msg::Poses>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<openpifpaf_ros2_msgs::msg::Poses>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<openpifpaf_ros2_msgs::msg::Poses>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // OPENPIFPAF_ROS2_MSGS__MSG__DETAIL__POSES__TRAITS_HPP_
