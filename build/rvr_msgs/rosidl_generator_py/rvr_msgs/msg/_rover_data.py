# generated from rosidl_generator_py/resource/_idl.py.em
# with input from rvr_msgs:msg/RoverData.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_RoverData(type):
    """Metaclass of message 'RoverData'."""

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
                'rvr_msgs.msg.RoverData')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__rover_data
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__rover_data
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__rover_data
            cls._TYPE_SUPPORT = module.type_support_msg__msg__rover_data
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__rover_data

            from rvr_msgs.msg import Vector3
            if Vector3.__class__._TYPE_SUPPORT is None:
                Vector3.__class__.__import_type_support__()

            from rvr_msgs.msg import Wheel4
            if Wheel4.__class__._TYPE_SUPPORT is None:
                Wheel4.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class RoverData(metaclass=Metaclass_RoverData):
    """Message class 'RoverData'."""

    __slots__ = [
        '_d_wheel',
        '_v_wheel',
        '_a_imu',
        '_w_imu',
    ]

    _fields_and_field_types = {
        'd_wheel': 'rvr_msgs/Wheel4',
        'v_wheel': 'rvr_msgs/Wheel4',
        'a_imu': 'rvr_msgs/Vector3',
        'w_imu': 'rvr_msgs/Vector3',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['rvr_msgs', 'msg'], 'Wheel4'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['rvr_msgs', 'msg'], 'Wheel4'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['rvr_msgs', 'msg'], 'Vector3'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['rvr_msgs', 'msg'], 'Vector3'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from rvr_msgs.msg import Wheel4
        self.d_wheel = kwargs.get('d_wheel', Wheel4())
        from rvr_msgs.msg import Wheel4
        self.v_wheel = kwargs.get('v_wheel', Wheel4())
        from rvr_msgs.msg import Vector3
        self.a_imu = kwargs.get('a_imu', Vector3())
        from rvr_msgs.msg import Vector3
        self.w_imu = kwargs.get('w_imu', Vector3())

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
        if self.d_wheel != other.d_wheel:
            return False
        if self.v_wheel != other.v_wheel:
            return False
        if self.a_imu != other.a_imu:
            return False
        if self.w_imu != other.w_imu:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def d_wheel(self):
        """Message field 'd_wheel'."""
        return self._d_wheel

    @d_wheel.setter
    def d_wheel(self, value):
        if __debug__:
            from rvr_msgs.msg import Wheel4
            assert \
                isinstance(value, Wheel4), \
                "The 'd_wheel' field must be a sub message of type 'Wheel4'"
        self._d_wheel = value

    @builtins.property
    def v_wheel(self):
        """Message field 'v_wheel'."""
        return self._v_wheel

    @v_wheel.setter
    def v_wheel(self, value):
        if __debug__:
            from rvr_msgs.msg import Wheel4
            assert \
                isinstance(value, Wheel4), \
                "The 'v_wheel' field must be a sub message of type 'Wheel4'"
        self._v_wheel = value

    @builtins.property
    def a_imu(self):
        """Message field 'a_imu'."""
        return self._a_imu

    @a_imu.setter
    def a_imu(self, value):
        if __debug__:
            from rvr_msgs.msg import Vector3
            assert \
                isinstance(value, Vector3), \
                "The 'a_imu' field must be a sub message of type 'Vector3'"
        self._a_imu = value

    @builtins.property
    def w_imu(self):
        """Message field 'w_imu'."""
        return self._w_imu

    @w_imu.setter
    def w_imu(self, value):
        if __debug__:
            from rvr_msgs.msg import Vector3
            assert \
                isinstance(value, Vector3), \
                "The 'w_imu' field must be a sub message of type 'Vector3'"
        self._w_imu = value
