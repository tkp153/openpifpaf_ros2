// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from openpifpaf_ros2_msgs:msg/Pose3DArray.idl
// generated code does not contain a copyright notice
#include "openpifpaf_ros2_msgs/msg/detail/pose3_d_array__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `poses3d`
#include "openpifpaf_ros2_msgs/msg/detail/pose3_d__functions.h"

bool
openpifpaf_ros2_msgs__msg__Pose3DArray__init(openpifpaf_ros2_msgs__msg__Pose3DArray * msg)
{
  if (!msg) {
    return false;
  }
  // poses3d
  if (!openpifpaf_ros2_msgs__msg__Pose3D__Sequence__init(&msg->poses3d, 0)) {
    openpifpaf_ros2_msgs__msg__Pose3DArray__fini(msg);
    return false;
  }
  return true;
}

void
openpifpaf_ros2_msgs__msg__Pose3DArray__fini(openpifpaf_ros2_msgs__msg__Pose3DArray * msg)
{
  if (!msg) {
    return;
  }
  // poses3d
  openpifpaf_ros2_msgs__msg__Pose3D__Sequence__fini(&msg->poses3d);
}

bool
openpifpaf_ros2_msgs__msg__Pose3DArray__are_equal(const openpifpaf_ros2_msgs__msg__Pose3DArray * lhs, const openpifpaf_ros2_msgs__msg__Pose3DArray * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // poses3d
  if (!openpifpaf_ros2_msgs__msg__Pose3D__Sequence__are_equal(
      &(lhs->poses3d), &(rhs->poses3d)))
  {
    return false;
  }
  return true;
}

bool
openpifpaf_ros2_msgs__msg__Pose3DArray__copy(
  const openpifpaf_ros2_msgs__msg__Pose3DArray * input,
  openpifpaf_ros2_msgs__msg__Pose3DArray * output)
{
  if (!input || !output) {
    return false;
  }
  // poses3d
  if (!openpifpaf_ros2_msgs__msg__Pose3D__Sequence__copy(
      &(input->poses3d), &(output->poses3d)))
  {
    return false;
  }
  return true;
}

openpifpaf_ros2_msgs__msg__Pose3DArray *
openpifpaf_ros2_msgs__msg__Pose3DArray__create()
{
  openpifpaf_ros2_msgs__msg__Pose3DArray * msg = (openpifpaf_ros2_msgs__msg__Pose3DArray *)malloc(sizeof(openpifpaf_ros2_msgs__msg__Pose3DArray));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(openpifpaf_ros2_msgs__msg__Pose3DArray));
  bool success = openpifpaf_ros2_msgs__msg__Pose3DArray__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
openpifpaf_ros2_msgs__msg__Pose3DArray__destroy(openpifpaf_ros2_msgs__msg__Pose3DArray * msg)
{
  if (msg) {
    openpifpaf_ros2_msgs__msg__Pose3DArray__fini(msg);
  }
  free(msg);
}


bool
openpifpaf_ros2_msgs__msg__Pose3DArray__Sequence__init(openpifpaf_ros2_msgs__msg__Pose3DArray__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  openpifpaf_ros2_msgs__msg__Pose3DArray * data = NULL;
  if (size) {
    data = (openpifpaf_ros2_msgs__msg__Pose3DArray *)calloc(size, sizeof(openpifpaf_ros2_msgs__msg__Pose3DArray));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = openpifpaf_ros2_msgs__msg__Pose3DArray__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        openpifpaf_ros2_msgs__msg__Pose3DArray__fini(&data[i - 1]);
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
openpifpaf_ros2_msgs__msg__Pose3DArray__Sequence__fini(openpifpaf_ros2_msgs__msg__Pose3DArray__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      openpifpaf_ros2_msgs__msg__Pose3DArray__fini(&array->data[i]);
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

openpifpaf_ros2_msgs__msg__Pose3DArray__Sequence *
openpifpaf_ros2_msgs__msg__Pose3DArray__Sequence__create(size_t size)
{
  openpifpaf_ros2_msgs__msg__Pose3DArray__Sequence * array = (openpifpaf_ros2_msgs__msg__Pose3DArray__Sequence *)malloc(sizeof(openpifpaf_ros2_msgs__msg__Pose3DArray__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = openpifpaf_ros2_msgs__msg__Pose3DArray__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
openpifpaf_ros2_msgs__msg__Pose3DArray__Sequence__destroy(openpifpaf_ros2_msgs__msg__Pose3DArray__Sequence * array)
{
  if (array) {
    openpifpaf_ros2_msgs__msg__Pose3DArray__Sequence__fini(array);
  }
  free(array);
}

bool
openpifpaf_ros2_msgs__msg__Pose3DArray__Sequence__are_equal(const openpifpaf_ros2_msgs__msg__Pose3DArray__Sequence * lhs, const openpifpaf_ros2_msgs__msg__Pose3DArray__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!openpifpaf_ros2_msgs__msg__Pose3DArray__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
openpifpaf_ros2_msgs__msg__Pose3DArray__Sequence__copy(
  const openpifpaf_ros2_msgs__msg__Pose3DArray__Sequence * input,
  openpifpaf_ros2_msgs__msg__Pose3DArray__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(openpifpaf_ros2_msgs__msg__Pose3DArray);
    openpifpaf_ros2_msgs__msg__Pose3DArray * data =
      (openpifpaf_ros2_msgs__msg__Pose3DArray *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!openpifpaf_ros2_msgs__msg__Pose3DArray__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          openpifpaf_ros2_msgs__msg__Pose3DArray__fini(&data[i]);
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
    if (!openpifpaf_ros2_msgs__msg__Pose3DArray__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
