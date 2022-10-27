// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from openpifpaf_ros2_msgs:msg/Pose3D.idl
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
#include "openpifpaf_ros2_msgs/msg/detail/pose3_d__struct.h"
#include "openpifpaf_ros2_msgs/msg/detail/pose3_d__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool openpifpaf_ros2_msgs__msg__pose3_d__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[41];
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
    assert(strncmp("openpifpaf_ros2_msgs.msg._pose3_d.Pose3D", full_classname_dest, 40) == 0);
  }
  openpifpaf_ros2_msgs__msg__Pose3D * ros_message = _ros_message;
  {  // pos_x
    PyObject * field = PyObject_GetAttrString(_pymsg, "pos_x");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->pos_x = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // pos_y
    PyObject * field = PyObject_GetAttrString(_pymsg, "pos_y");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->pos_y = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // pos_z
    PyObject * field = PyObject_GetAttrString(_pymsg, "pos_z");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->pos_z = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // theta
    PyObject * field = PyObject_GetAttrString(_pymsg, "theta");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->theta = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // dir_x
    PyObject * field = PyObject_GetAttrString(_pymsg, "dir_x");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->dir_x = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // dir_y
    PyObject * field = PyObject_GetAttrString(_pymsg, "dir_y");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->dir_y = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // dir_z
    PyObject * field = PyObject_GetAttrString(_pymsg, "dir_z");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->dir_z = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * openpifpaf_ros2_msgs__msg__pose3_d__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of Pose3D */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("openpifpaf_ros2_msgs.msg._pose3_d");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "Pose3D");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  openpifpaf_ros2_msgs__msg__Pose3D * ros_message = (openpifpaf_ros2_msgs__msg__Pose3D *)raw_ros_message;
  {  // pos_x
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->pos_x);
    {
      int rc = PyObject_SetAttrString(_pymessage, "pos_x", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // pos_y
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->pos_y);
    {
      int rc = PyObject_SetAttrString(_pymessage, "pos_y", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // pos_z
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->pos_z);
    {
      int rc = PyObject_SetAttrString(_pymessage, "pos_z", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // theta
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->theta);
    {
      int rc = PyObject_SetAttrString(_pymessage, "theta", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // dir_x
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->dir_x);
    {
      int rc = PyObject_SetAttrString(_pymessage, "dir_x", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // dir_y
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->dir_y);
    {
      int rc = PyObject_SetAttrString(_pymessage, "dir_y", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // dir_z
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->dir_z);
    {
      int rc = PyObject_SetAttrString(_pymessage, "dir_z", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
