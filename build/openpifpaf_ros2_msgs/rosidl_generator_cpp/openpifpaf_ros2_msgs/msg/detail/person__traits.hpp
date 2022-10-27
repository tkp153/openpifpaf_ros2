// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from openpifpaf_ros2_msgs:msg/Person.idl
// generated code does not contain a copyright notice

#ifndef OPENPIFPAF_ROS2_MSGS__MSG__DETAIL__PERSON__TRAITS_HPP_
#define OPENPIFPAF_ROS2_MSGS__MSG__DETAIL__PERSON__TRAITS_HPP_

#include "openpifpaf_ros2_msgs/msg/detail/person__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

// Include directives for member types
// Member 'markers'
#include "visualization_msgs/msg/detail/marker_array__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<openpifpaf_ros2_msgs::msg::Person>()
{
  return "openpifpaf_ros2_msgs::msg::Person";
}

template<>
inline const char * name<openpifpaf_ros2_msgs::msg::Person>()
{
  return "openpifpaf_ros2_msgs/msg/Person";
}

template<>
struct has_fixed_size<openpifpaf_ros2_msgs::msg::Person>
  : std::integral_constant<bool, has_fixed_size<visualization_msgs::msg::MarkerArray>::value> {};

template<>
struct has_bounded_size<openpifpaf_ros2_msgs::msg::Person>
  : std::integral_constant<bool, has_bounded_size<visualization_msgs::msg::MarkerArray>::value> {};

template<>
struct is_message<openpifpaf_ros2_msgs::msg::Person>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // OPENPIFPAF_ROS2_MSGS__MSG__DETAIL__PERSON__TRAITS_HPP_
