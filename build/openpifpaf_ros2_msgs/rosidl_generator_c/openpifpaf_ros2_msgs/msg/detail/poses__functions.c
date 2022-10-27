// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from openpifpaf_ros2_msgs:msg/Poses.idl
// generated code does not contain a copyright notice
#include "openpifpaf_ros2_msgs/msg/detail/poses__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `poses`
#include "openpifpaf_ros2_msgs/msg/detail/pose__functions.h"

bool
openpifpaf_ros2_msgs__msg__Poses__init(openpifpaf_ros2_msgs__msg__Poses * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    openpifpaf_ros2_msgs__msg__Poses__fini(msg);
    return false;
  }
  // poses
  if (!openpifpaf_ros2_msgs__msg__Pose__Sequence__init(&msg->poses, 0)) {
    openpifpaf_ros2_msgs__msg__Poses__fini(msg);
    return false;
  }
  return true;
}

void
openpifpaf_ros2_msgs__msg__Poses__fini(openpifpaf_ros2_msgs__msg__Poses * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // poses
  openpifpaf_ros2_msgs__msg__Pose__Sequence__fini(&msg->poses);
}

bool
openpifpaf_ros2_msgs__msg__Poses__are_equal(const openpifpaf_ros2_msgs__msg__Poses * lhs, const openpifpaf_ros2_msgs__msg__Poses * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__are_equal(
      &(lhs->header), &(rhs->header)))
  {
    return false;
  }
  // poses
  if (!openpifpaf_ros2_msgs__msg__Pose__Sequence__are_equal(
      &(lhs->poses), &(rhs->poses)))
  {
    return false;
  }
  return true;
}

bool
openpifpaf_ros2_msgs__msg__Poses__copy(
  const openpifpaf_ros2_msgs__msg__Poses * input,
  openpifpaf_ros2_msgs__msg__Poses * output)
{
  if (!input || !output) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__copy(
      &(input->header), &(output->header)))
  {
    return false;
  }
  // poses
  if (!openpifpaf_ros2_msgs__msg__Pose__Sequence__copy(
      &(input->poses), &(output->poses)))
  {
    return false;
  }
  return true;
}

openpifpaf_ros2_msgs__msg__Poses *
openpifpaf_ros2_msgs__msg__Poses__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  openpifpaf_ros2_msgs__msg__Poses * msg = (openpifpaf_ros2_msgs__msg__Poses *)allocator.allocate(sizeof(openpifpaf_ros2_msgs__msg__Poses), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(openpifpaf_ros2_msgs__msg__Poses));
  bool success = openpifpaf_ros2_msgs__msg__Poses__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
openpifpaf_ros2_msgs__msg__Poses__destroy(openpifpaf_ros2_msgs__msg__Poses * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    openpifpaf_ros2_msgs__msg__Poses__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
openpifpaf_ros2_msgs__msg__Poses__Sequence__init(openpifpaf_ros2_msgs__msg__Poses__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  openpifpaf_ros2_msgs__msg__Poses * data = NULL;

  if (size) {
    data = (openpifpaf_ros2_msgs__msg__Poses *)allocator.zero_allocate(size, sizeof(openpifpaf_ros2_msgs__msg__Poses), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = openpifpaf_ros2_msgs__msg__Poses__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        openpifpaf_ros2_msgs__msg__Poses__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
openpifpaf_ros2_msgs__msg__Poses__Sequence__fini(openpifpaf_ros2_msgs__msg__Poses__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      openpifpaf_ros2_msgs__msg__Poses__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

openpifpaf_ros2_msgs__msg__Poses__Sequence *
openpifpaf_ros2_msgs__msg__Poses__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  openpifpaf_ros2_msgs__msg__Poses__Sequence * array = (openpifpaf_ros2_msgs__msg__Poses__Sequence *)allocator.allocate(sizeof(openpifpaf_ros2_msgs__msg__Poses__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = openpifpaf_ros2_msgs__msg__Poses__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
openpifpaf_ros2_msgs__msg__Poses__Sequence__destroy(openpifpaf_ros2_msgs__msg__Poses__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    openpifpaf_ros2_msgs__msg__Poses__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
openpifpaf_ros2_msgs__msg__Poses__Sequence__are_equal(const openpifpaf_ros2_msgs__msg__Poses__Sequence * lhs, const openpifpaf_ros2_msgs__msg__Poses__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!openpifpaf_ros2_msgs__msg__Poses__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
openpifpaf_ros2_msgs__msg__Poses__Sequence__copy(
  const openpifpaf_ros2_msgs__msg__Poses__Sequence * input,
  openpifpaf_ros2_msgs__msg__Poses__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(openpifpaf_ros2_msgs__msg__Poses);
    openpifpaf_ros2_msgs__msg__Poses * data =
      (openpifpaf_ros2_msgs__msg__Poses *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!openpifpaf_ros2_msgs__msg__Poses__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          openpifpaf_ros2_msgs__msg__Poses__fini(&data[i]);
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
    if (!openpifpaf_ros2_msgs__msg__Poses__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
