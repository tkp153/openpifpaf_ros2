// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from openpifpaf_ros2_msgs:msg/Person.idl
// generated code does not contain a copyright notice

#ifndef OPENPIFPAF_ROS2_MSGS__MSG__DETAIL__PERSON__TRAITS_HPP_
#define OPENPIFPAF_ROS2_MSGS__MSG__DETAIL__PERSON__TRAITS_HPP_

#include "openpifpaf_ros2_msgs/msg/detail/person__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

// Include directives for member types
// Member 'markers'
#include "visualization_msgs/msg/detail/marker_array__traits.hpp"

namespace rosidl_generator_traits
{

inline void to_yaml(
  const openpifpaf_ros2_msgs::msg::Person & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: markers
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "markers:\n";
    to_yaml(msg.markers, out, indentation + 2);
  }

  // member: person_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "person_id: ";
    value_to_yaml(msg.person_id, out);
    out << "\n";
  }

  // member: human_person_num
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "human_person_num: ";
    value_to_yaml(msg.human_person_num, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const openpifpaf_ros2_msgs::msg::Person & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

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
