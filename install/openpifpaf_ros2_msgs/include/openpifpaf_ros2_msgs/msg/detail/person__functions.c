// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from openpifpaf_ros2_msgs:msg/Person.idl
// generated code does not contain a copyright notice
#include "openpifpaf_ros2_msgs/msg/detail/person__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `markers`
#include "visualization_msgs/msg/detail/marker_array__functions.h"

bool
openpifpaf_ros2_msgs__msg__Person__init(openpifpaf_ros2_msgs__msg__Person * msg)
{
  if (!msg) {
    return false;
  }
  // markers
  if (!visualization_msgs__msg__MarkerArray__init(&msg->markers)) {
    openpifpaf_ros2_msgs__msg__Person__fini(msg);
    return false;
  }
  // person_id
  // human_person_num
  return true;
}

void
openpifpaf_ros2_msgs__msg__Person__fini(openpifpaf_ros2_msgs__msg__Person * msg)
{
  if (!msg) {
    return;
  }
  // markers
  visualization_msgs__msg__MarkerArray__fini(&msg->markers);
  // person_id
  // human_person_num
}

bool
openpifpaf_ros2_msgs__msg__Person__are_equal(const openpifpaf_ros2_msgs__msg__Person * lhs, const openpifpaf_ros2_msgs__msg__Person * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // markers
  if (!visualization_msgs__msg__MarkerArray__are_equal(
      &(lhs->markers), &(rhs->markers)))
  {
    return false;
  }
  // person_id
  if (lhs->person_id != rhs->person_id) {
    return false;
  }
  // human_person_num
  if (lhs->human_person_num != rhs->human_person_num) {
    return false;
  }
  return true;
}

bool
openpifpaf_ros2_msgs__msg__Person__copy(
  const openpifpaf_ros2_msgs__msg__Person * input,
  openpifpaf_ros2_msgs__msg__Person * output)
{
  if (!input || !output) {
    return false;
  }
  // markers
  if (!visualization_msgs__msg__MarkerArray__copy(
      &(input->markers), &(output->markers)))
  {
    return false;
  }
  // person_id
  output->person_id = input->person_id;
  // human_person_num
  output->human_person_num = input->human_person_num;
  return true;
}

openpifpaf_ros2_msgs__msg__Person *
openpifpaf_ros2_msgs__msg__Person__create()
{
  openpifpaf_ros2_msgs__msg__Person * msg = (openpifpaf_ros2_msgs__msg__Person *)malloc(sizeof(openpifpaf_ros2_msgs__msg__Person));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(openpifpaf_ros2_msgs__msg__Person));
  bool success = openpifpaf_ros2_msgs__msg__Person__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
openpifpaf_ros2_msgs__msg__Person__destroy(openpifpaf_ros2_msgs__msg__Person * msg)
{
  if (msg) {
    openpifpaf_ros2_msgs__msg__Person__fini(msg);
  }
  free(msg);
}


bool
openpifpaf_ros2_msgs__msg__Person__Sequence__init(openpifpaf_ros2_msgs__msg__Person__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  openpifpaf_ros2_msgs__msg__Person * data = NULL;
  if (size) {
    data = (openpifpaf_ros2_msgs__msg__Person *)calloc(size, sizeof(openpifpaf_ros2_msgs__msg__Person));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = openpifpaf_ros2_msgs__msg__Person__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        openpifpaf_ros2_msgs__msg__Person__fini(&data[i - 1]);
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
openpifpaf_ros2_msgs__msg__Person__Sequence__fini(openpifpaf_ros2_msgs__msg__Person__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      openpifpaf_ros2_msgs__msg__Person__fini(&array->data[i]);
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

openpifpaf_ros2_msgs__msg__Person__Sequence *
openpifpaf_ros2_msgs__msg__Person__Sequence__create(size_t size)
{
  openpifpaf_ros2_msgs__msg__Person__Sequence * array = (openpifpaf_ros2_msgs__msg__Person__Sequence *)malloc(sizeof(openpifpaf_ros2_msgs__msg__Person__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = openpifpaf_ros2_msgs__msg__Person__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
openpifpaf_ros2_msgs__msg__Person__Sequence__destroy(openpifpaf_ros2_msgs__msg__Person__Sequence * array)
{
  if (array) {
    openpifpaf_ros2_msgs__msg__Person__Sequence__fini(array);
  }
  free(array);
}

bool
openpifpaf_ros2_msgs__msg__Person__Sequence__are_equal(const openpifpaf_ros2_msgs__msg__Person__Sequence * lhs, const openpifpaf_ros2_msgs__msg__Person__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!openpifpaf_ros2_msgs__msg__Person__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
openpifpaf_ros2_msgs__msg__Person__Sequence__copy(
  const openpifpaf_ros2_msgs__msg__Person__Sequence * input,
  openpifpaf_ros2_msgs__msg__Person__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(openpifpaf_ros2_msgs__msg__Person);
    openpifpaf_ros2_msgs__msg__Person * data =
      (openpifpaf_ros2_msgs__msg__Person *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!openpifpaf_ros2_msgs__msg__Person__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          openpifpaf_ros2_msgs__msg__Person__fini(&data[i]);
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
    if (!openpifpaf_ros2_msgs__msg__Person__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
