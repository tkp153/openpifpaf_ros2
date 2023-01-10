// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from openpifpaf_ros2_msgs:msg/Pose.idl
// generated code does not contain a copyright notice

#ifndef OPENPIFPAF_ROS2_MSGS__MSG__DETAIL__POSE__STRUCT_H_
#define OPENPIFPAF_ROS2_MSGS__MSG__DETAIL__POSE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'keypoints'
#include "rosidl_runtime_c/primitives_sequence.h"

// Struct defined in msg/Pose in the package openpifpaf_ros2_msgs.
typedef struct openpifpaf_ros2_msgs__msg__Pose
{
  rosidl_runtime_c__float__Sequence keypoints;
} openpifpaf_ros2_msgs__msg__Pose;

// Struct for a sequence of openpifpaf_ros2_msgs__msg__Pose.
typedef struct openpifpaf_ros2_msgs__msg__Pose__Sequence
{
  openpifpaf_ros2_msgs__msg__Pose * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} openpifpaf_ros2_msgs__msg__Pose__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // OPENPIFPAF_ROS2_MSGS__MSG__DETAIL__POSE__STRUCT_H_
