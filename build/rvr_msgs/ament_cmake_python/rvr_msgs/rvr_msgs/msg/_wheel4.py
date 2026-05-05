# generated from rosidl_generator_py/resource/_idl.py.em
# with input from rvr_msgs:msg/Wheel4.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_Wheel4(type):
    """Metaclass of message 'Wheel4'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('rvr_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'rvr_msgs.msg.Wheel4')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__wheel4
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__wheel4
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__wheel4
            cls._TYPE_SUPPORT = module.type_support_msg__msg__wheel4
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__wheel4

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class Wheel4(metaclass=Metaclass_Wheel4):
    """Message class 'Wheel4'."""

    __slots__ = [
        '_wheel1',
        '_wheel2',
        '_wheel3',
        '_wheel4',
    ]

    _fields_and_field_types = {
        'wheel1': 'float',
        'wheel2': 'float',
        'wheel3': 'float',
        'wheel4': 'float',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.wheel1 = kwargs.get('wheel1', float())
        self.wheel2 = kwargs.get('wheel2', float())
        self.wheel3 = kwargs.get('wheel3', float())
        self.wheel4 = kwargs.get('wheel4', float())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.__slots__, self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s[1:] + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.wheel1 != other.wheel1:
            return False
        if self.wheel2 != other.wheel2:
            return False
        if self.wheel3 != other.wheel3:
            return False
        if self.wheel4 != other.wheel4:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def wheel1(self):
        """Message field 'wheel1'."""
        return self._wheel1

    @wheel1.setter
    def wheel1(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'wheel1' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'wheel1' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._wheel1 = value

    @builtins.property
    def wheel2(self):
        """Message field 'wheel2'."""
        return self._wheel2

    @wheel2.setter
    def wheel2(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'wheel2' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'wheel2' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._wheel2 = value

    @builtins.property
    def wheel3(self):
        """Message field 'wheel3'."""
        return self._wheel3

    @wheel3.setter
    def wheel3(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'wheel3' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'wheel3' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._wheel3 = value

    @builtins.property
    def wheel4(self):
        """Message field 'wheel4'."""
        return self._wheel4

    @wheel4.setter
    def wheel4(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'wheel4' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'wheel4' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._wheel4 = value
