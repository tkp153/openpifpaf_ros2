// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from openpifpaf_ros2_msgs:msg/Pose3D.idl
// generated code does not contain a copyright notice
#include "openpifpaf_ros2_msgs/msg/detail/pose3_d__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "openpifpaf_ros2_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "openpifpaf_ros2_msgs/msg/detail/pose3_d__struct.h"
#include "openpifpaf_ros2_msgs/msg/detail/pose3_d__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif


// forward declare type support functions


using _Pose3D__ros_msg_type = openpifpaf_ros2_msgs__msg__Pose3D;

static bool _Pose3D__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _Pose3D__ros_msg_type * ros_message = static_cast<const _Pose3D__ros_msg_type *>(untyped_ros_message);
  // Field name: pos_x
  {
    cdr << ros_message->pos_x;
  }

  // Field name: pos_y
  {
    cdr << ros_message->pos_y;
  }

  // Field name: pos_z
  {
    cdr << ros_message->pos_z;
  }

  // Field name: theta
  {
    cdr << ros_message->theta;
  }

  // Field name: dir_x
  {
    cdr << ros_message->dir_x;
  }

  // Field name: dir_y
  {
    cdr << ros_message->dir_y;
  }

  // Field name: dir_z
  {
    cdr << ros_message->dir_z;
  }

  return true;
}

static bool _Pose3D__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _Pose3D__ros_msg_type * ros_message = static_cast<_Pose3D__ros_msg_type *>(untyped_ros_message);
  // Field name: pos_x
  {
    cdr >> ros_message->pos_x;
  }

  // Field name: pos_y
  {
    cdr >> ros_message->pos_y;
  }

  // Field name: pos_z
  {
    cdr >> ros_message->pos_z;
  }

  // Field name: theta
  {
    cdr >> ros_message->theta;
  }

  // Field name: dir_x
  {
    cdr >> ros_message->dir_x;
  }

  // Field name: dir_y
  {
    cdr >> ros_message->dir_y;
  }

  // Field name: dir_z
  {
    cdr >> ros_message->dir_z;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_openpifpaf_ros2_msgs
size_t get_serialized_size_openpifpaf_ros2_msgs__msg__Pose3D(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _Pose3D__ros_msg_type * ros_message = static_cast<const _Pose3D__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name pos_x
  {
    size_t item_size = sizeof(ros_message->pos_x);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name pos_y
  {
    size_t item_size = sizeof(ros_message->pos_y);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name pos_z
  {
    size_t item_size = sizeof(ros_message->pos_z);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name theta
  {
    size_t item_size = sizeof(ros_message->theta);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name dir_x
  {
    size_t item_size = sizeof(ros_message->dir_x);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name dir_y
  {
    size_t item_size = sizeof(ros_message->dir_y);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name dir_z
  {
    size_t item_size = sizeof(ros_message->dir_z);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _Pose3D__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_openpifpaf_ros2_msgs__msg__Pose3D(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_openpifpaf_ros2_msgs
size_t max_serialized_size_openpifpaf_ros2_msgs__msg__Pose3D(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: pos_x
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: pos_y
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: pos_z
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: theta
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: dir_x
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: dir_y
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: dir_z
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  return current_alignment - initial_alignment;
}

static size_t _Pose3D__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_openpifpaf_ros2_msgs__msg__Pose3D(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_Pose3D = {
  "openpifpaf_ros2_msgs::msg",
  "Pose3D",
  _Pose3D__cdr_serialize,
  _Pose3D__cdr_deserialize,
  _Pose3D__get_serialized_size,
  _Pose3D__max_serialized_size
};

static rosidl_message_type_support_t _Pose3D__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_Pose3D,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, openpifpaf_ros2_msgs, msg, Pose3D)() {
  return &_Pose3D__type_support;
}

#if defined(__cplusplus)
}
#endif
