// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from openpifpaf_ros2_msgs:msg/Poses.idl
// generated code does not contain a copyright notice

#ifndef OPENPIFPAF_ROS2_MSGS__MSG__DETAIL__POSES__TRAITS_HPP_
#define OPENPIFPAF_ROS2_MSGS__MSG__DETAIL__POSES__TRAITS_HPP_

#include "openpifpaf_ros2_msgs/msg/detail/poses__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"
// Member 'poses'
#include "openpifpaf_ros2_msgs/msg/detail/pose__traits.hpp"

namespace rosidl_generator_traits
{

inline void to_yaml(
  const openpifpaf_ros2_msgs::msg::Poses & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: header
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "header:\n";
    to_yaml(msg.header, out, indentation + 2);
  }

  // member: poses
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.poses.size() == 0) {
      out << "poses: []\n";
    } else {
      out << "poses:\n";
      for (auto item : msg.poses) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const openpifpaf_ros2_msgs::msg::Poses & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

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
