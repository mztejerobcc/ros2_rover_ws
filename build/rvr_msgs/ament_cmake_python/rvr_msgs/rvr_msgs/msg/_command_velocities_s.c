// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from rvr_msgs:msg/CommandVelocities.idl
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
#include "rvr_msgs/msg/detail/command_velocities__struct.h"
#include "rvr_msgs/msg/detail/command_velocities__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool rvr_msgs__msg__command_velocities__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[51];
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
    assert(strncmp("rvr_msgs.msg._command_velocities.CommandVelocities", full_classname_dest, 50) == 0);
  }
  rvr_msgs__msg__CommandVelocities * ros_message = _ros_message;
  {  // v1
    PyObject * field = PyObject_GetAttrString(_pymsg, "v1");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->v1 = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // v2
    PyObject * field = PyObject_GetAttrString(_pymsg, "v2");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->v2 = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // v3
    PyObject * field = PyObject_GetAttrString(_pymsg, "v3");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->v3 = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // v4
    PyObject * field = PyObject_GetAttrString(_pymsg, "v4");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->v4 = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * rvr_msgs__msg__command_velocities__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of CommandVelocities */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("rvr_msgs.msg._command_velocities");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "CommandVelocities");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  rvr_msgs__msg__CommandVelocities * ros_message = (rvr_msgs__msg__CommandVelocities *)raw_ros_message;
  {  // v1
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->v1);
    {
      int rc = PyObject_SetAttrString(_pymessage, "v1", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // v2
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->v2);
    {
      int rc = PyObject_SetAttrString(_pymessage, "v2", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // v3
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->v3);
    {
      int rc = PyObject_SetAttrString(_pymessage, "v3", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // v4
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->v4);
    {
      int rc = PyObject_SetAttrString(_pymessage, "v4", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
