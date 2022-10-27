// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from openpifpaf_ros2_msgs:msg/Poses.idl
// generated code does not contain a copyright notice

#ifndef OPENPIFPAF_ROS2_MSGS__MSG__DETAIL__POSES__STRUCT_H_
#define OPENPIFPAF_ROS2_MSGS__MSG__DETAIL__POSES__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.h"
// Member 'poses'
#include "openpifpaf_ros2_msgs/msg/detail/pose__struct.h"

// Struct defined in msg/Poses in the package openpifpaf_ros2_msgs.
typedef struct openpifpaf_ros2_msgs__msg__Poses
{
  std_msgs__msg__Header header;
  openpifpaf_ros2_msgs__msg__Pose__Sequence poses;
} openpifpaf_ros2_msgs__msg__Poses;

// Struct for a sequence of openpifpaf_ros2_msgs__msg__Poses.
typedef struct openpifpaf_ros2_msgs__msg__Poses__Sequence
{
  openpifpaf_ros2_msgs__msg__Poses * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} openpifpaf_ros2_msgs__msg__Poses__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // OPENPIFPAF_ROS2_MSGS__MSG__DETAIL__POSES__STRUCT_H_
