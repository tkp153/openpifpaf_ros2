// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from openpifpaf_ros2_msgs:msg/Pose3DArray.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "openpifpaf_ros2_msgs/msg/detail/pose3_d_array__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace openpifpaf_ros2_msgs
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void Pose3DArray_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) openpifpaf_ros2_msgs::msg::Pose3DArray(_init);
}

void Pose3DArray_fini_function(void * message_memory)
{
  auto typed_message = static_cast<openpifpaf_ros2_msgs::msg::Pose3DArray *>(message_memory);
  typed_message->~Pose3DArray();
}

size_t size_function__Pose3DArray__poses3d(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<openpifpaf_ros2_msgs::msg::Pose3D> *>(untyped_member);
  return member->size();
}

const void * get_const_function__Pose3DArray__poses3d(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<openpifpaf_ros2_msgs::msg::Pose3D> *>(untyped_member);
  return &member[index];
}

void * get_function__Pose3DArray__poses3d(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<openpifpaf_ros2_msgs::msg::Pose3D> *>(untyped_member);
  return &member[index];
}

void resize_function__Pose3DArray__poses3d(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<openpifpaf_ros2_msgs::msg::Pose3D> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember Pose3DArray_message_member_array[1] = {
  {
    "poses3d",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<openpifpaf_ros2_msgs::msg::Pose3D>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(openpifpaf_ros2_msgs::msg::Pose3DArray, poses3d),  // bytes offset in struct
    nullptr,  // default value
    size_function__Pose3DArray__poses3d,  // size() function pointer
    get_const_function__Pose3DArray__poses3d,  // get_const(index) function pointer
    get_function__Pose3DArray__poses3d,  // get(index) function pointer
    resize_function__Pose3DArray__poses3d  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers Pose3DArray_message_members = {
  "openpifpaf_ros2_msgs::msg",  // message namespace
  "Pose3DArray",  // message name
  1,  // number of fields
  sizeof(openpifpaf_ros2_msgs::msg::Pose3DArray),
  Pose3DArray_message_member_array,  // message members
  Pose3DArray_init_function,  // function to initialize message memory (memory has to be allocated)
  Pose3DArray_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t Pose3DArray_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &Pose3DArray_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace openpifpaf_ros2_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<openpifpaf_ros2_msgs::msg::Pose3DArray>()
{
  return &::openpifpaf_ros2_msgs::msg::rosidl_typesupport_introspection_cpp::Pose3DArray_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, openpifpaf_ros2_msgs, msg, Pose3DArray)() {
  return &::openpifpaf_ros2_msgs::msg::rosidl_typesupport_introspection_cpp::Pose3DArray_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
