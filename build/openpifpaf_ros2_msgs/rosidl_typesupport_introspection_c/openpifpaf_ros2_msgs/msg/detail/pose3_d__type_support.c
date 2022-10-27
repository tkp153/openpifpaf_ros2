// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from openpifpaf_ros2_msgs:msg/Pose3D.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "openpifpaf_ros2_msgs/msg/detail/pose3_d__rosidl_typesupport_introspection_c.h"
#include "openpifpaf_ros2_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "openpifpaf_ros2_msgs/msg/detail/pose3_d__functions.h"
#include "openpifpaf_ros2_msgs/msg/detail/pose3_d__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void Pose3D__rosidl_typesupport_introspection_c__Pose3D_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  openpifpaf_ros2_msgs__msg__Pose3D__init(message_memory);
}

void Pose3D__rosidl_typesupport_introspection_c__Pose3D_fini_function(void * message_memory)
{
  openpifpaf_ros2_msgs__msg__Pose3D__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember Pose3D__rosidl_typesupport_introspection_c__Pose3D_message_member_array[7] = {
  {
    "pos_x",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(openpifpaf_ros2_msgs__msg__Pose3D, pos_x),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "pos_y",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(openpifpaf_ros2_msgs__msg__Pose3D, pos_y),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "pos_z",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(openpifpaf_ros2_msgs__msg__Pose3D, pos_z),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "theta",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(openpifpaf_ros2_msgs__msg__Pose3D, theta),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "dir_x",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(openpifpaf_ros2_msgs__msg__Pose3D, dir_x),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "dir_y",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(openpifpaf_ros2_msgs__msg__Pose3D, dir_y),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "dir_z",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(openpifpaf_ros2_msgs__msg__Pose3D, dir_z),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers Pose3D__rosidl_typesupport_introspection_c__Pose3D_message_members = {
  "openpifpaf_ros2_msgs__msg",  // message namespace
  "Pose3D",  // message name
  7,  // number of fields
  sizeof(openpifpaf_ros2_msgs__msg__Pose3D),
  Pose3D__rosidl_typesupport_introspection_c__Pose3D_message_member_array,  // message members
  Pose3D__rosidl_typesupport_introspection_c__Pose3D_init_function,  // function to initialize message memory (memory has to be allocated)
  Pose3D__rosidl_typesupport_introspection_c__Pose3D_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t Pose3D__rosidl_typesupport_introspection_c__Pose3D_message_type_support_handle = {
  0,
  &Pose3D__rosidl_typesupport_introspection_c__Pose3D_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_openpifpaf_ros2_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, openpifpaf_ros2_msgs, msg, Pose3D)() {
  if (!Pose3D__rosidl_typesupport_introspection_c__Pose3D_message_type_support_handle.typesupport_identifier) {
    Pose3D__rosidl_typesupport_introspection_c__Pose3D_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &Pose3D__rosidl_typesupport_introspection_c__Pose3D_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
