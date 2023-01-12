// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from openpifpaf_ros2_msgs:msg/Pose3D.idl
// generated code does not contain a copyright notice

#ifndef OPENPIFPAF_ROS2_MSGS__MSG__DETAIL__POSE3_D__TRAITS_HPP_
#define OPENPIFPAF_ROS2_MSGS__MSG__DETAIL__POSE3_D__TRAITS_HPP_

#include "openpifpaf_ros2_msgs/msg/detail/pose3_d__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

namespace rosidl_generator_traits
{

inline void to_yaml(
  const openpifpaf_ros2_msgs::msg::Pose3D & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: pos_x
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pos_x: ";
    value_to_yaml(msg.pos_x, out);
    out << "\n";
  }

  // member: pos_y
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pos_y: ";
    value_to_yaml(msg.pos_y, out);
    out << "\n";
  }

  // member: pos_z
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pos_z: ";
    value_to_yaml(msg.pos_z, out);
    out << "\n";
  }

  // member: theta
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "theta: ";
    value_to_yaml(msg.theta, out);
    out << "\n";
  }

  // member: dir_x
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "dir_x: ";
    value_to_yaml(msg.dir_x, out);
    out << "\n";
  }

  // member: dir_y
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "dir_y: ";
    value_to_yaml(msg.dir_y, out);
    out << "\n";
  }

  // member: dir_z
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "dir_z: ";
    value_to_yaml(msg.dir_z, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const openpifpaf_ros2_msgs::msg::Pose3D & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<openpifpaf_ros2_msgs::msg::Pose3D>()
{
  return "openpifpaf_ros2_msgs::msg::Pose3D";
}

template<>
inline const char * name<openpifpaf_ros2_msgs::msg::Pose3D>()
{
  return "openpifpaf_ros2_msgs/msg/Pose3D";
}

template<>
struct has_fixed_size<openpifpaf_ros2_msgs::msg::Pose3D>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<openpifpaf_ros2_msgs::msg::Pose3D>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<openpifpaf_ros2_msgs::msg::Pose3D>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // OPENPIFPAF_ROS2_MSGS__MSG__DETAIL__POSE3_D__TRAITS_HPP_
