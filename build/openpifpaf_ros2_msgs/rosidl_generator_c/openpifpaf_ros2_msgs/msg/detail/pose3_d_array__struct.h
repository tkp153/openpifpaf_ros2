// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from openpifpaf_ros2_msgs:msg/Pose3DArray.idl
// generated code does not contain a copyright notice

#ifndef OPENPIFPAF_ROS2_MSGS__MSG__DETAIL__POSE3_D_ARRAY__STRUCT_H_
#define OPENPIFPAF_ROS2_MSGS__MSG__DETAIL__POSE3_D_ARRAY__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'poses3d'
#include "openpifpaf_ros2_msgs/msg/detail/pose3_d__struct.h"

// Struct defined in msg/Pose3DArray in the package openpifpaf_ros2_msgs.
typedef struct openpifpaf_ros2_msgs__msg__Pose3DArray
{
  openpifpaf_ros2_msgs__msg__Pose3D__Sequence poses3d;
} openpifpaf_ros2_msgs__msg__Pose3DArray;

// Struct for a sequence of openpifpaf_ros2_msgs__msg__Pose3DArray.
typedef struct openpifpaf_ros2_msgs__msg__Pose3DArray__Sequence
{
  openpifpaf_ros2_msgs__msg__Pose3DArray * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} openpifpaf_ros2_msgs__msg__Pose3DArray__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // OPENPIFPAF_ROS2_MSGS__MSG__DETAIL__POSE3_D_ARRAY__STRUCT_H_
