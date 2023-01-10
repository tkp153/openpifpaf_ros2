// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from openpifpaf_ros2_msgs:msg/Pose3D.idl
// generated code does not contain a copyright notice

#ifndef OPENPIFPAF_ROS2_MSGS__MSG__DETAIL__POSE3_D__STRUCT_H_
#define OPENPIFPAF_ROS2_MSGS__MSG__DETAIL__POSE3_D__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Struct defined in msg/Pose3D in the package openpifpaf_ros2_msgs.
typedef struct openpifpaf_ros2_msgs__msg__Pose3D
{
  double pos_x;
  double pos_y;
  double pos_z;
  double theta;
  double dir_x;
  double dir_y;
  double dir_z;
} openpifpaf_ros2_msgs__msg__Pose3D;

// Struct for a sequence of openpifpaf_ros2_msgs__msg__Pose3D.
typedef struct openpifpaf_ros2_msgs__msg__Pose3D__Sequence
{
  openpifpaf_ros2_msgs__msg__Pose3D * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} openpifpaf_ros2_msgs__msg__Pose3D__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // OPENPIFPAF_ROS2_MSGS__MSG__DETAIL__POSE3_D__STRUCT_H_
