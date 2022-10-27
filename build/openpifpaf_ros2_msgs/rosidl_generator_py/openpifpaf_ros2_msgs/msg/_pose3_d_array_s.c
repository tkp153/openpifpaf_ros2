// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from openpifpaf_ros2_msgs:msg/Pose3DArray.idl
// generated code does not contain a copyright notice
#define NPY_NO_DEPRECATED_API NPY_1_7_API_VERSION
#include <Python.h>
#include <stdbool.h>
#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-function"
#endif
#include "numpy/ndarrayobject.h"
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif
#include "rosidl_runtime_c/visibility_control.h"
#include "openpifpaf_ros2_msgs/msg/detail/pose3_d_array__struct.h"
#include "openpifpaf_ros2_msgs/msg/detail/pose3_d_array__functions.h"

#include "rosidl_runtime_c/primitives_sequence.h"
#include "rosidl_runtime_c/primitives_sequence_functions.h"

// Nested array functions includes
#include "openpifpaf_ros2_msgs/msg/detail/pose3_d__functions.h"
// end nested array functions include
bool openpifpaf_ros2_msgs__msg__pose3_d__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * openpifpaf_ros2_msgs__msg__pose3_d__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool openpifpaf_ros2_msgs__msg__pose3_d_array__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[52];
    {
      char * class_name = NULL;
      char * module_name = NULL;
      {
        PyObject * class_attr = PyObject_GetAttrString(_pymsg, "__class__");
        if (class_attr) {
          PyObject * name_attr = PyObject_GetAttrString(class_attr, "__name__");
          if (name_attr) {
            class_name = (char *)PyUnicode_1BYTE_DATA(name_attr);
            Py_DECREF(name_attr);
          }
          PyObject * module_attr = PyObject_GetAttrString(class_attr, "__module__");
          if (module_attr) {
            module_name = (char *)PyUnicode_1BYTE_DATA(module_attr);
            Py_DECREF(module_attr);
          }
          Py_DECREF(class_attr);
        }
      }
      if (!class_name || !module_name) {
        return false;
      }
      snprintf(full_classname_dest, sizeof(full_classname_dest), "%s.%s", module_name, class_name);
    }
    assert(strncmp("openpifpaf_ros2_msgs.msg._pose3_d_array.Pose3DArray", full_classname_dest, 51) == 0);
  }
  openpifpaf_ros2_msgs__msg__Pose3DArray * ros_message = _ros_message;
  {  // poses3d
    PyObject * field = PyObject_GetAttrString(_pymsg, "poses3d");
    if (!field) {
      return false;
    }
    PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'poses3d'");
    if (!seq_field) {
      Py_DECREF(field);
      return false;
    }
    Py_ssize_t size = PySequence_Size(field);
    if (-1 == size) {
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    if (!openpifpaf_ros2_msgs__msg__Pose3D__Sequence__init(&(ros_message->poses3d), size)) {
      PyErr_SetString(PyExc_RuntimeError, "unable to create openpifpaf_ros2_msgs__msg__Pose3D__Sequence ros_message");
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    openpifpaf_ros2_msgs__msg__Pose3D * dest = ros_message->poses3d.data;
    for (Py_ssize_t i = 0; i < size; ++i) {
      if (!openpifpaf_ros2_msgs__msg__pose3_d__convert_from_py(PySequence_Fast_GET_ITEM(seq_field, i), &dest[i])) {
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
    }
    Py_DECREF(seq_field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * openpifpaf_ros2_msgs__msg__pose3_d_array__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of Pose3DArray */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("openpifpaf_ros2_msgs.msg._pose3_d_array");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "Pose3DArray");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  openpifpaf_ros2_msgs__msg__Pose3DArray * ros_message = (openpifpaf_ros2_msgs__msg__Pose3DArray *)raw_ros_message;
  {  // poses3d
    PyObject * field = NULL;
    size_t size = ros_message->poses3d.size;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    openpifpaf_ros2_msgs__msg__Pose3D * item;
    for (size_t i = 0; i < size; ++i) {
      item = &(ros_message->poses3d.data[i]);
      PyObject * pyitem = openpifpaf_ros2_msgs__msg__pose3_d__convert_to_py(item);
      if (!pyitem) {
        Py_DECREF(field);
        return NULL;
      }
      int rc = PyList_SetItem(field, i, pyitem);
      (void)rc;
      assert(rc == 0);
    }
    assert(PySequence_Check(field));
    {
      int rc = PyObject_SetAttrString(_pymessage, "poses3d", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
