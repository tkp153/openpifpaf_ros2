// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from openpifpaf_ros2_msgs:msg/Pose3D.idl
// generated code does not contain a copyright notice
#include "openpifpaf_ros2_msgs/msg/detail/pose3_d__rosidl_typesupport_fastrtps_cpp.hpp"
#include "openpifpaf_ros2_msgs/msg/detail/pose3_d__struct.hpp"

#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions

namespace openpifpaf_ros2_msgs
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_openpifpaf_ros2_msgs
cdr_serialize(
  const openpifpaf_ros2_msgs::msg::Pose3D & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: pos_x
  cdr << ros_message.pos_x;
  // Member: pos_y
  cdr << ros_message.pos_y;
  // Member: pos_z
  cdr << ros_message.pos_z;
  // Member: theta
  cdr << ros_message.theta;
  // Member: dir_x
  cdr << ros_message.dir_x;
  // Member: dir_y
  cdr << ros_message.dir_y;
  // Member: dir_z
  cdr << ros_message.dir_z;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_openpifpaf_ros2_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  openpifpaf_ros2_msgs::msg::Pose3D & ros_message)
{
  // Member: pos_x
  cdr >> ros_message.pos_x;

  // Member: pos_y
  cdr >> ros_message.pos_y;

  // Member: pos_z
  cdr >> ros_message.pos_z;

  // Member: theta
  cdr >> ros_message.theta;

  // Member: dir_x
  cdr >> ros_message.dir_x;

  // Member: dir_y
  cdr >> ros_message.dir_y;

  // Member: dir_z
  cdr >> ros_message.dir_z;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_openpifpaf_ros2_msgs
get_serialized_size(
  const openpifpaf_ros2_msgs::msg::Pose3D & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: pos_x
  {
    size_t item_size = sizeof(ros_message.pos_x);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: pos_y
  {
    size_t item_size = sizeof(ros_message.pos_y);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: pos_z
  {
    size_t item_size = sizeof(ros_message.pos_z);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: theta
  {
    size_t item_size = sizeof(ros_message.theta);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: dir_x
  {
    size_t item_size = sizeof(ros_message.dir_x);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: dir_y
  {
    size_t item_size = sizeof(ros_message.dir_y);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: dir_z
  {
    size_t item_size = sizeof(ros_message.dir_z);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_openpifpaf_ros2_msgs
max_serialized_size_Pose3D(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: pos_x
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: pos_y
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: pos_z
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: theta
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: dir_x
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: dir_y
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: dir_z
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  return current_alignment - initial_alignment;
}

static bool _Pose3D__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const openpifpaf_ros2_msgs::msg::Pose3D *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _Pose3D__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<openpifpaf_ros2_msgs::msg::Pose3D *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _Pose3D__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const openpifpaf_ros2_msgs::msg::Pose3D *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _Pose3D__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_Pose3D(full_bounded, 0);
}

static message_type_support_callbacks_t _Pose3D__callbacks = {
  "openpifpaf_ros2_msgs::msg",
  "Pose3D",
  _Pose3D__cdr_serialize,
  _Pose3D__cdr_deserialize,
  _Pose3D__get_serialized_size,
  _Pose3D__max_serialized_size
};

static rosidl_message_type_support_t _Pose3D__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_Pose3D__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace openpifpaf_ros2_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_openpifpaf_ros2_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<openpifpaf_ros2_msgs::msg::Pose3D>()
{
  return &openpifpaf_ros2_msgs::msg::typesupport_fastrtps_cpp::_Pose3D__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, openpifpaf_ros2_msgs, msg, Pose3D)() {
  return &openpifpaf_ros2_msgs::msg::typesupport_fastrtps_cpp::_Pose3D__handle;
}

#ifdef __cplusplus
}
#endif
