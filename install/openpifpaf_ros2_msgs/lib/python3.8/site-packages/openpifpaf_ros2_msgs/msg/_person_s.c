// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from openpifpaf_ros2_msgs:msg/Person.idl
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
#include "openpifpaf_ros2_msgs/msg/detail/person__struct.h"
#include "openpifpaf_ros2_msgs/msg/detail/person__functions.h"

ROSIDL_GENERATOR_C_IMPORT
bool visualization_msgs__msg__marker_array__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * visualization_msgs__msg__marker_array__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool openpifpaf_ros2_msgs__msg__person__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[40];
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
    assert(strncmp("openpifpaf_ros2_msgs.msg._person.Person", full_classname_dest, 39) == 0);
  }
  openpifpaf_ros2_msgs__msg__Person * ros_message = _ros_message;
  {  // markers
    PyObject * field = PyObject_GetAttrString(_pymsg, "markers");
    if (!field) {
      return false;
    }
    if (!visualization_msgs__msg__marker_array__convert_from_py(field, &ros_message->markers)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // person_id
    PyObject * field = PyObject_GetAttrString(_pymsg, "person_id");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->person_id = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // human_person_num
    PyObject * field = PyObject_GetAttrString(_pymsg, "human_person_num");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->human_person_num = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * openpifpaf_ros2_msgs__msg__person__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of Person */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("openpifpaf_ros2_msgs.msg._person");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "Person");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  openpifpaf_ros2_msgs__msg__Person * ros_message = (openpifpaf_ros2_msgs__msg__Person *)raw_ros_message;
  {  // markers
    PyObject * field = NULL;
    field = visualization_msgs__msg__marker_array__convert_to_py(&ros_message->markers);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "markers", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // person_id
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->person_id);
    {
      int rc = PyObject_SetAttrString(_pymessage, "person_id", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // human_person_num
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->human_person_num);
    {
      int rc = PyObject_SetAttrString(_pymessage, "human_person_num", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
