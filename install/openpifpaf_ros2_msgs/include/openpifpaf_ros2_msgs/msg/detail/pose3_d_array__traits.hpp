// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from openpifpaf_ros2_msgs:msg/Pose3DArray.idl
// generated code does not contain a copyright notice

#ifndef OPENPIFPAF_ROS2_MSGS__MSG__DETAIL__POSE3_D_ARRAY__TRAITS_HPP_
#define OPENPIFPAF_ROS2_MSGS__MSG__DETAIL__POSE3_D_ARRAY__TRAITS_HPP_

#include "openpifpaf_ros2_msgs/msg/detail/pose3_d_array__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

// Include directives for member types
// Member 'poses3d'
#include "openpifpaf_ros2_msgs/msg/detail/pose3_d__traits.hpp"

namespace rosidl_generator_traits
{

inline void to_yaml(
  const openpifpaf_ros2_msgs::msg::Pose3DArray & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: poses3d
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.poses3d.size() == 0) {
      out << "poses3d: []\n";
    } else {
      out << "poses3d:\n";
      for (auto item : msg.poses3d) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const openpifpaf_ros2_msgs::msg::Pose3DArray & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<openpifpaf_ros2_msgs::msg::Pose3DArray>()
{
  return "openpifpaf_ros2_msgs::msg::Pose3DArray";
}

template<>
inline const char * name<openpifpaf_ros2_msgs::msg::Pose3DArray>()
{
  return "openpifpaf_ros2_msgs/msg/Pose3DArray";
}

template<>
struct has_fixed_size<openpifpaf_ros2_msgs::msg::Pose3DArray>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<openpifpaf_ros2_msgs::msg::Pose3DArray>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<openpifpaf_ros2_msgs::msg::Pose3DArray>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // OPENPIFPAF_ROS2_MSGS__MSG__DETAIL__POSE3_D_ARRAY__TRAITS_HPP_
