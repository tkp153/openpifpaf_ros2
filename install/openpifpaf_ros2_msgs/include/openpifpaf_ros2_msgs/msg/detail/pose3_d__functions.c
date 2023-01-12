// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from openpifpaf_ros2_msgs:msg/Pose3D.idl
// generated code does not contain a copyright notice
#include "openpifpaf_ros2_msgs/msg/detail/pose3_d__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


bool
openpifpaf_ros2_msgs__msg__Pose3D__init(openpifpaf_ros2_msgs__msg__Pose3D * msg)
{
  if (!msg) {
    return false;
  }
  // pos_x
  // pos_y
  // pos_z
  // theta
  // dir_x
  // dir_y
  // dir_z
  return true;
}

void
openpifpaf_ros2_msgs__msg__Pose3D__fini(openpifpaf_ros2_msgs__msg__Pose3D * msg)
{
  if (!msg) {
    return;
  }
  // pos_x
  // pos_y
  // pos_z
  // theta
  // dir_x
  // dir_y
  // dir_z
}

bool
openpifpaf_ros2_msgs__msg__Pose3D__are_equal(const openpifpaf_ros2_msgs__msg__Pose3D * lhs, const openpifpaf_ros2_msgs__msg__Pose3D * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // pos_x
  if (lhs->pos_x != rhs->pos_x) {
    return false;
  }
  // pos_y
  if (lhs->pos_y != rhs->pos_y) {
    return false;
  }
  // pos_z
  if (lhs->pos_z != rhs->pos_z) {
    return false;
  }
  // theta
  if (lhs->theta != rhs->theta) {
    return false;
  }
  // dir_x
  if (lhs->dir_x != rhs->dir_x) {
    return false;
  }
  // dir_y
  if (lhs->dir_y != rhs->dir_y) {
    return false;
  }
  // dir_z
  if (lhs->dir_z != rhs->dir_z) {
    return false;
  }
  return true;
}

bool
openpifpaf_ros2_msgs__msg__Pose3D__copy(
  const openpifpaf_ros2_msgs__msg__Pose3D * input,
  openpifpaf_ros2_msgs__msg__Pose3D * output)
{
  if (!input || !output) {
    return false;
  }
  // pos_x
  output->pos_x = input->pos_x;
  // pos_y
  output->pos_y = input->pos_y;
  // pos_z
  output->pos_z = input->pos_z;
  // theta
  output->theta = input->theta;
  // dir_x
  output->dir_x = input->dir_x;
  // dir_y
  output->dir_y = input->dir_y;
  // dir_z
  output->dir_z = input->dir_z;
  return true;
}

openpifpaf_ros2_msgs__msg__Pose3D *
openpifpaf_ros2_msgs__msg__Pose3D__create()
{
  openpifpaf_ros2_msgs__msg__Pose3D * msg = (openpifpaf_ros2_msgs__msg__Pose3D *)malloc(sizeof(openpifpaf_ros2_msgs__msg__Pose3D));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(openpifpaf_ros2_msgs__msg__Pose3D));
  bool success = openpifpaf_ros2_msgs__msg__Pose3D__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
openpifpaf_ros2_msgs__msg__Pose3D__destroy(openpifpaf_ros2_msgs__msg__Pose3D * msg)
{
  if (msg) {
    openpifpaf_ros2_msgs__msg__Pose3D__fini(msg);
  }
  free(msg);
}


bool
openpifpaf_ros2_msgs__msg__Pose3D__Sequence__init(openpifpaf_ros2_msgs__msg__Pose3D__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  openpifpaf_ros2_msgs__msg__Pose3D * data = NULL;
  if (size) {
    data = (openpifpaf_ros2_msgs__msg__Pose3D *)calloc(size, sizeof(openpifpaf_ros2_msgs__msg__Pose3D));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = openpifpaf_ros2_msgs__msg__Pose3D__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        openpifpaf_ros2_msgs__msg__Pose3D__fini(&data[i - 1]);
      }
      free(data);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
openpifpaf_ros2_msgs__msg__Pose3D__Sequence__fini(openpifpaf_ros2_msgs__msg__Pose3D__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      openpifpaf_ros2_msgs__msg__Pose3D__fini(&array->data[i]);
    }
    free(array->data);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

openpifpaf_ros2_msgs__msg__Pose3D__Sequence *
openpifpaf_ros2_msgs__msg__Pose3D__Sequence__create(size_t size)
{
  openpifpaf_ros2_msgs__msg__Pose3D__Sequence * array = (openpifpaf_ros2_msgs__msg__Pose3D__Sequence *)malloc(sizeof(openpifpaf_ros2_msgs__msg__Pose3D__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = openpifpaf_ros2_msgs__msg__Pose3D__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
openpifpaf_ros2_msgs__msg__Pose3D__Sequence__destroy(openpifpaf_ros2_msgs__msg__Pose3D__Sequence * array)
{
  if (array) {
    openpifpaf_ros2_msgs__msg__Pose3D__Sequence__fini(array);
  }
  free(array);
}

bool
openpifpaf_ros2_msgs__msg__Pose3D__Sequence__are_equal(const openpifpaf_ros2_msgs__msg__Pose3D__Sequence * lhs, const openpifpaf_ros2_msgs__msg__Pose3D__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!openpifpaf_ros2_msgs__msg__Pose3D__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
openpifpaf_ros2_msgs__msg__Pose3D__Sequence__copy(
  const openpifpaf_ros2_msgs__msg__Pose3D__Sequence * input,
  openpifpaf_ros2_msgs__msg__Pose3D__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(openpifpaf_ros2_msgs__msg__Pose3D);
    openpifpaf_ros2_msgs__msg__Pose3D * data =
      (openpifpaf_ros2_msgs__msg__Pose3D *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!openpifpaf_ros2_msgs__msg__Pose3D__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          openpifpaf_ros2_msgs__msg__Pose3D__fini(&data[i]);
        }
        free(data);
        return false;
      }
    }
    output->data = data;
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!openpifpaf_ros2_msgs__msg__Pose3D__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
