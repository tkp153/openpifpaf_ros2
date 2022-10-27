// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from openpifpaf_ros2_msgs:msg/Pose3DArray.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "openpifpaf_ros2_msgs/msg/detail/pose3_d_array__rosidl_typesupport_introspection_c.h"
#include "openpifpaf_ros2_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "openpifpaf_ros2_msgs/msg/detail/pose3_d_array__functions.h"
#include "openpifpaf_ros2_msgs/msg/detail/pose3_d_array__struct.h"


// Include directives for member types
// Member `poses3d`
#include "openpifpaf_ros2_msgs/msg/pose3_d.h"
// Member `poses3d`
#include "openpifpaf_ros2_msgs/msg/detail/pose3_d__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void Pose3DArray__rosidl_typesupport_introspection_c__Pose3DArray_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  openpifpaf_ros2_msgs__msg__Pose3DArray__init(message_memory);
}

void Pose3DArray__rosidl_typesupport_introspection_c__Pose3DArray_fini_function(void * message_memory)
{
  openpifpaf_ros2_msgs__msg__Pose3DArray__fini(message_memory);
}

size_t Pose3DArray__rosidl_typesupport_introspection_c__size_function__Pose3D__poses3d(
  const void * untyped_member)
{
  const openpifpaf_ros2_msgs__msg__Pose3D__Sequence * member =
    (const openpifpaf_ros2_msgs__msg__Pose3D__Sequence *)(untyped_member);
  return member->size;
}

const void * Pose3DArray__rosidl_typesupport_introspection_c__get_const_function__Pose3D__poses3d(
  const void * untyped_member, size_t index)
{
  const openpifpaf_ros2_msgs__msg__Pose3D__Sequence * member =
    (const openpifpaf_ros2_msgs__msg__Pose3D__Sequence *)(untyped_member);
  return &member->data[index];
}

void * Pose3DArray__rosidl_typesupport_introspection_c__get_function__Pose3D__poses3d(
  void * untyped_member, size_t index)
{
  openpifpaf_ros2_msgs__msg__Pose3D__Sequence * member =
    (openpifpaf_ros2_msgs__msg__Pose3D__Sequence *)(untyped_member);
  return &member->data[index];
}

bool Pose3DArray__rosidl_typesupport_introspection_c__resize_function__Pose3D__poses3d(
  void * untyped_member, size_t size)
{
  openpifpaf_ros2_msgs__msg__Pose3D__Sequence * member =
    (openpifpaf_ros2_msgs__msg__Pose3D__Sequence *)(untyped_member);
  openpifpaf_ros2_msgs__msg__Pose3D__Sequence__fini(member);
  return openpifpaf_ros2_msgs__msg__Pose3D__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember Pose3DArray__rosidl_typesupport_introspection_c__Pose3DArray_message_member_array[1] = {
  {
    "poses3d",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(openpifpaf_ros2_msgs__msg__Pose3DArray, poses3d),  // bytes offset in struct
    NULL,  // default value
    Pose3DArray__rosidl_typesupport_introspection_c__size_function__Pose3D__poses3d,  // size() function pointer
    Pose3DArray__rosidl_typesupport_introspection_c__get_const_function__Pose3D__poses3d,  // get_const(index) function pointer
    Pose3DArray__rosidl_typesupport_introspection_c__get_function__Pose3D__poses3d,  // get(index) function pointer
    Pose3DArray__rosidl_typesupport_introspection_c__resize_function__Pose3D__poses3d  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers Pose3DArray__rosidl_typesupport_introspection_c__Pose3DArray_message_members = {
  "openpifpaf_ros2_msgs__msg",  // message namespace
  "Pose3DArray",  // message name
  1,  // number of fields
  sizeof(openpifpaf_ros2_msgs__msg__Pose3DArray),
  Pose3DArray__rosidl_typesupport_introspection_c__Pose3DArray_message_member_array,  // message members
  Pose3DArray__rosidl_typesupport_introspection_c__Pose3DArray_init_function,  // function to initialize message memory (memory has to be allocated)
  Pose3DArray__rosidl_typesupport_introspection_c__Pose3DArray_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t Pose3DArray__rosidl_typesupport_introspection_c__Pose3DArray_message_type_support_handle = {
  0,
  &Pose3DArray__rosidl_typesupport_introspection_c__Pose3DArray_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_openpifpaf_ros2_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, openpifpaf_ros2_msgs, msg, Pose3DArray)() {
  Pose3DArray__rosidl_typesupport_introspection_c__Pose3DArray_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, openpifpaf_ros2_msgs, msg, Pose3D)();
  if (!Pose3DArray__rosidl_typesupport_introspection_c__Pose3DArray_message_type_support_handle.typesupport_identifier) {
    Pose3DArray__rosidl_typesupport_introspection_c__Pose3DArray_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &Pose3DArray__rosidl_typesupport_introspection_c__Pose3DArray_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
