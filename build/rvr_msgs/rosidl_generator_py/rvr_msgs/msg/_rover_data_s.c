// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from rvr_msgs:msg/RoverData.idl
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
#include "rvr_msgs/msg/detail/rover_data__struct.h"
#include "rvr_msgs/msg/detail/rover_data__functions.h"

bool rvr_msgs__msg__wheel4__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * rvr_msgs__msg__wheel4__convert_to_py(void * raw_ros_message);
bool rvr_msgs__msg__wheel4__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * rvr_msgs__msg__wheel4__convert_to_py(void * raw_ros_message);
bool rvr_msgs__msg__vector3__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * rvr_msgs__msg__vector3__convert_to_py(void * raw_ros_message);
bool rvr_msgs__msg__vector3__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * rvr_msgs__msg__vector3__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool rvr_msgs__msg__rover_data__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[35];
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
    assert(strncmp("rvr_msgs.msg._rover_data.RoverData", full_classname_dest, 34) == 0);
  }
  rvr_msgs__msg__RoverData * ros_message = _ros_message;
  {  // d_wheel
    PyObject * field = PyObject_GetAttrString(_pymsg, "d_wheel");
    if (!field) {
      return false;
    }
    if (!rvr_msgs__msg__wheel4__convert_from_py(field, &ros_message->d_wheel)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // v_wheel
    PyObject * field = PyObject_GetAttrString(_pymsg, "v_wheel");
    if (!field) {
      return false;
    }
    if (!rvr_msgs__msg__wheel4__convert_from_py(field, &ros_message->v_wheel)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // a_imu
    PyObject * field = PyObject_GetAttrString(_pymsg, "a_imu");
    if (!field) {
      return false;
    }
    if (!rvr_msgs__msg__vector3__convert_from_py(field, &ros_message->a_imu)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // w_imu
    PyObject * field = PyObject_GetAttrString(_pymsg, "w_imu");
    if (!field) {
      return false;
    }
    if (!rvr_msgs__msg__vector3__convert_from_py(field, &ros_message->w_imu)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * rvr_msgs__msg__rover_data__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of RoverData */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("rvr_msgs.msg._rover_data");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "RoverData");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  rvr_msgs__msg__RoverData * ros_message = (rvr_msgs__msg__RoverData *)raw_ros_message;
  {  // d_wheel
    PyObject * field = NULL;
    field = rvr_msgs__msg__wheel4__convert_to_py(&ros_message->d_wheel);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "d_wheel", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // v_wheel
    PyObject * field = NULL;
    field = rvr_msgs__msg__wheel4__convert_to_py(&ros_message->v_wheel);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "v_wheel", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // a_imu
    PyObject * field = NULL;
    field = rvr_msgs__msg__vector3__convert_to_py(&ros_message->a_imu);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "a_imu", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // w_imu
    PyObject * field = NULL;
    field = rvr_msgs__msg__vector3__convert_to_py(&ros_message->w_imu);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "w_imu", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
