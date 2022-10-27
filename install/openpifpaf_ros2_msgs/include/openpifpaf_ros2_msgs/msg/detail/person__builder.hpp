// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from openpifpaf_ros2_msgs:msg/Person.idl
// generated code does not contain a copyright notice

#ifndef OPENPIFPAF_ROS2_MSGS__MSG__DETAIL__PERSON__BUILDER_HPP_
#define OPENPIFPAF_ROS2_MSGS__MSG__DETAIL__PERSON__BUILDER_HPP_

#include "openpifpaf_ros2_msgs/msg/detail/person__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace openpifpaf_ros2_msgs
{

namespace msg
{

namespace builder
{

class Init_Person_human_person_num
{
public:
  explicit Init_Person_human_person_num(::openpifpaf_ros2_msgs::msg::Person & msg)
  : msg_(msg)
  {}
  ::openpifpaf_ros2_msgs::msg::Person human_person_num(::openpifpaf_ros2_msgs::msg::Person::_human_person_num_type arg)
  {
    msg_.human_person_num = std::move(arg);
    return std::move(msg_);
  }

private:
  ::openpifpaf_ros2_msgs::msg::Person msg_;
};

class Init_Person_person_id
{
public:
  explicit Init_Person_person_id(::openpifpaf_ros2_msgs::msg::Person & msg)
  : msg_(msg)
  {}
  Init_Person_human_person_num person_id(::openpifpaf_ros2_msgs::msg::Person::_person_id_type arg)
  {
    msg_.person_id = std::move(arg);
    return Init_Person_human_person_num(msg_);
  }

private:
  ::openpifpaf_ros2_msgs::msg::Person msg_;
};

class Init_Person_markers
{
public:
  Init_Person_markers()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Person_person_id markers(::openpifpaf_ros2_msgs::msg::Person::_markers_type arg)
  {
    msg_.markers = std::move(arg);
    return Init_Person_person_id(msg_);
  }

private:
  ::openpifpaf_ros2_msgs::msg::Person msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::openpifpaf_ros2_msgs::msg::Person>()
{
  return openpifpaf_ros2_msgs::msg::builder::Init_Person_markers();
}

}  // namespace openpifpaf_ros2_msgs

#endif  // OPENPIFPAF_ROS2_MSGS__MSG__DETAIL__PERSON__BUILDER_HPP_
