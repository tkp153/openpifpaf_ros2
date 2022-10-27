// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from openpifpaf_ros2_msgs:msg/Pose.idl
// generated code does not contain a copyright notice

#ifndef OPENPIFPAF_ROS2_MSGS__MSG__DETAIL__POSE__TRAITS_HPP_
#define OPENPIFPAF_ROS2_MSGS__MSG__DETAIL__POSE__TRAITS_HPP_

#include "openpifpaf_ros2_msgs/msg/detail/pose__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<openpifpaf_ros2_msgs::msg::Pose>()
{
  return "openpifpaf_ros2_msgs::msg::Pose";
}

template<>
inline const char * name<openpifpaf_ros2_msgs::msg::Pose>()
{
  return "openpifpaf_ros2_msgs/msg/Pose";
}

template<>
struct has_fixed_size<openpifpaf_ros2_msgs::msg::Pose>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<openpifpaf_ros2_msgs::msg::Pose>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<openpifpaf_ros2_msgs::msg::Pose>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // OPENPIFPAF_ROS2_MSGS__MSG__DETAIL__POSE__TRAITS_HPP_
