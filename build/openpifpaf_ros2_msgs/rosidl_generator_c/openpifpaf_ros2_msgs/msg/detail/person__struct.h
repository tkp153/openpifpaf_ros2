// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from openpifpaf_ros2_msgs:msg/Person.idl
// generated code does not contain a copyright notice

#ifndef OPENPIFPAF_ROS2_MSGS__MSG__DETAIL__PERSON__STRUCT_H_
#define OPENPIFPAF_ROS2_MSGS__MSG__DETAIL__PERSON__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'markers'
#include "visualization_msgs/msg/detail/marker_array__struct.h"

// Struct defined in msg/Person in the package openpifpaf_ros2_msgs.
typedef struct openpifpaf_ros2_msgs__msg__Person
{
  visualization_msgs__msg__MarkerArray markers;
  int32_t person_id;
  int32_t human_person_num;
} openpifpaf_ros2_msgs__msg__Person;

// Struct for a sequence of openpifpaf_ros2_msgs__msg__Person.
typedef struct openpifpaf_ros2_msgs__msg__Person__Sequence
{
  openpifpaf_ros2_msgs__msg__Person * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} openpifpaf_ros2_msgs__msg__Person__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // OPENPIFPAF_ROS2_MSGS__MSG__DETAIL__PERSON__STRUCT_H_
