# generated from rosidl_generator_py/resource/_idl.py.em
# with input from sensor_type_interface:msg/MobileSensorArray.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

# Member 'accelerometer_sensor_data'
# Member 'magnetic_field_sensor_data'
# Member 'gyroscope_sensor_data'
# Member 'light_sensor_data'
# Member 'pressure_sensor_data'
# Member 'proximity_sensor_data'
# Member 'gravity_sensor_data'
# Member 'relative_humidity_sensor_data'
# Member 'temperature_sensor_data'
# Member 'heart_beat_sensor_data'
# Member 'orientation_sensor_data'
# Member 'line_sensor_sensor_data'
# Member 'position_sensor_data'
# Member 'parameter_sensor_data'
import numpy  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_MobileSensorArray(type):
    """Metaclass of message 'MobileSensorArray'."""

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
            module = import_type_support('sensor_type_interface')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'sensor_type_interface.msg.MobileSensorArray')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__mobile_sensor_array
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__mobile_sensor_array
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__mobile_sensor_array
            cls._TYPE_SUPPORT = module.type_support_msg__msg__mobile_sensor_array
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__mobile_sensor_array

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class MobileSensorArray(metaclass=Metaclass_MobileSensorArray):
    """Message class 'MobileSensorArray'."""

    __slots__ = [
        '_accelerometer_sensor_data',
        '_magnetic_field_sensor_data',
        '_gyroscope_sensor_data',
        '_light_sensor_data',
        '_pressure_sensor_data',
        '_proximity_sensor_data',
        '_gravity_sensor_data',
        '_relative_humidity_sensor_data',
        '_temperature_sensor_data',
        '_heart_beat_sensor_data',
        '_orientation_sensor_data',
        '_line_sensor_sensor_data',
        '_position_sensor_data',
        '_parameter_sensor_data',
    ]

    _fields_and_field_types = {
        'accelerometer_sensor_data': 'float[5]',
        'magnetic_field_sensor_data': 'float[5]',
        'gyroscope_sensor_data': 'float[5]',
        'light_sensor_data': 'float[5]',
        'pressure_sensor_data': 'float[5]',
        'proximity_sensor_data': 'float[5]',
        'gravity_sensor_data': 'float[5]',
        'relative_humidity_sensor_data': 'float[5]',
        'temperature_sensor_data': 'float[5]',
        'heart_beat_sensor_data': 'float[5]',
        'orientation_sensor_data': 'float[5]',
        'line_sensor_sensor_data': 'float[5]',
        'position_sensor_data': 'float[5]',
        'parameter_sensor_data': 'float[5]',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('float'), 5),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('float'), 5),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('float'), 5),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('float'), 5),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('float'), 5),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('float'), 5),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('float'), 5),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('float'), 5),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('float'), 5),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('float'), 5),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('float'), 5),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('float'), 5),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('float'), 5),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('float'), 5),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        if 'accelerometer_sensor_data' not in kwargs:
            self.accelerometer_sensor_data = numpy.zeros(5, dtype=numpy.float32)
        else:
            self.accelerometer_sensor_data = numpy.array(kwargs.get('accelerometer_sensor_data'), dtype=numpy.float32)
            assert self.accelerometer_sensor_data.shape == (5, )
        if 'magnetic_field_sensor_data' not in kwargs:
            self.magnetic_field_sensor_data = numpy.zeros(5, dtype=numpy.float32)
        else:
            self.magnetic_field_sensor_data = numpy.array(kwargs.get('magnetic_field_sensor_data'), dtype=numpy.float32)
            assert self.magnetic_field_sensor_data.shape == (5, )
        if 'gyroscope_sensor_data' not in kwargs:
            self.gyroscope_sensor_data = numpy.zeros(5, dtype=numpy.float32)
        else:
            self.gyroscope_sensor_data = numpy.array(kwargs.get('gyroscope_sensor_data'), dtype=numpy.float32)
            assert self.gyroscope_sensor_data.shape == (5, )
        if 'light_sensor_data' not in kwargs:
            self.light_sensor_data = numpy.zeros(5, dtype=numpy.float32)
        else:
            self.light_sensor_data = numpy.array(kwargs.get('light_sensor_data'), dtype=numpy.float32)
            assert self.light_sensor_data.shape == (5, )
        if 'pressure_sensor_data' not in kwargs:
            self.pressure_sensor_data = numpy.zeros(5, dtype=numpy.float32)
        else:
            self.pressure_sensor_data = numpy.array(kwargs.get('pressure_sensor_data'), dtype=numpy.float32)
            assert self.pressure_sensor_data.shape == (5, )
        if 'proximity_sensor_data' not in kwargs:
            self.proximity_sensor_data = numpy.zeros(5, dtype=numpy.float32)
        else:
            self.proximity_sensor_data = numpy.array(kwargs.get('proximity_sensor_data'), dtype=numpy.float32)
            assert self.proximity_sensor_data.shape == (5, )
        if 'gravity_sensor_data' not in kwargs:
            self.gravity_sensor_data = numpy.zeros(5, dtype=numpy.float32)
        else:
            self.gravity_sensor_data = numpy.array(kwargs.get('gravity_sensor_data'), dtype=numpy.float32)
            assert self.gravity_sensor_data.shape == (5, )
        if 'relative_humidity_sensor_data' not in kwargs:
            self.relative_humidity_sensor_data = numpy.zeros(5, dtype=numpy.float32)
        else:
            self.relative_humidity_sensor_data = numpy.array(kwargs.get('relative_humidity_sensor_data'), dtype=numpy.float32)
            assert self.relative_humidity_sensor_data.shape == (5, )
        if 'temperature_sensor_data' not in kwargs:
            self.temperature_sensor_data = numpy.zeros(5, dtype=numpy.float32)
        else:
            self.temperature_sensor_data = numpy.array(kwargs.get('temperature_sensor_data'), dtype=numpy.float32)
            assert self.temperature_sensor_data.shape == (5, )
        if 'heart_beat_sensor_data' not in kwargs:
            self.heart_beat_sensor_data = numpy.zeros(5, dtype=numpy.float32)
        else:
            self.heart_beat_sensor_data = numpy.array(kwargs.get('heart_beat_sensor_data'), dtype=numpy.float32)
            assert self.heart_beat_sensor_data.shape == (5, )
        if 'orientation_sensor_data' not in kwargs:
            self.orientation_sensor_data = numpy.zeros(5, dtype=numpy.float32)
        else:
            self.orientation_sensor_data = numpy.array(kwargs.get('orientation_sensor_data'), dtype=numpy.float32)
            assert self.orientation_sensor_data.shape == (5, )
        if 'line_sensor_sensor_data' not in kwargs:
            self.line_sensor_sensor_data = numpy.zeros(5, dtype=numpy.float32)
        else:
            self.line_sensor_sensor_data = numpy.array(kwargs.get('line_sensor_sensor_data'), dtype=numpy.float32)
            assert self.line_sensor_sensor_data.shape == (5, )
        if 'position_sensor_data' not in kwargs:
            self.position_sensor_data = numpy.zeros(5, dtype=numpy.float32)
        else:
            self.position_sensor_data = numpy.array(kwargs.get('position_sensor_data'), dtype=numpy.float32)
            assert self.position_sensor_data.shape == (5, )
        if 'parameter_sensor_data' not in kwargs:
            self.parameter_sensor_data = numpy.zeros(5, dtype=numpy.float32)
        else:
            self.parameter_sensor_data = numpy.array(kwargs.get('parameter_sensor_data'), dtype=numpy.float32)
            assert self.parameter_sensor_data.shape == (5, )

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
        if all(self.accelerometer_sensor_data != other.accelerometer_sensor_data):
            return False
        if all(self.magnetic_field_sensor_data != other.magnetic_field_sensor_data):
            return False
        if all(self.gyroscope_sensor_data != other.gyroscope_sensor_data):
            return False
        if all(self.light_sensor_data != other.light_sensor_data):
            return False
        if all(self.pressure_sensor_data != other.pressure_sensor_data):
            return False
        if all(self.proximity_sensor_data != other.proximity_sensor_data):
            return False
        if all(self.gravity_sensor_data != other.gravity_sensor_data):
            return False
        if all(self.relative_humidity_sensor_data != other.relative_humidity_sensor_data):
            return False
        if all(self.temperature_sensor_data != other.temperature_sensor_data):
            return False
        if all(self.heart_beat_sensor_data != other.heart_beat_sensor_data):
            return False
        if all(self.orientation_sensor_data != other.orientation_sensor_data):
            return False
        if all(self.line_sensor_sensor_data != other.line_sensor_sensor_data):
            return False
        if all(self.position_sensor_data != other.position_sensor_data):
            return False
        if all(self.parameter_sensor_data != other.parameter_sensor_data):
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def accelerometer_sensor_data(self):
        """Message field 'accelerometer_sensor_data'."""
        return self._accelerometer_sensor_data

    @accelerometer_sensor_data.setter
    def accelerometer_sensor_data(self, value):
        if isinstance(value, numpy.ndarray):
            assert value.dtype == numpy.float32, \
                "The 'accelerometer_sensor_data' numpy.ndarray() must have the dtype of 'numpy.float32'"
            assert value.size == 5, \
                "The 'accelerometer_sensor_data' numpy.ndarray() must have a size of 5"
            self._accelerometer_sensor_data = value
            return
        if __debug__:
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 len(value) == 5 and
                 all(isinstance(v, float) for v in value) and
                 all(not (val < -3.402823466e+38 or val > 3.402823466e+38) or math.isinf(val) for val in value)), \
                "The 'accelerometer_sensor_data' field must be a set or sequence with length 5 and each value of type 'float' and each float in [-340282346600000016151267322115014000640.000000, 340282346600000016151267322115014000640.000000]"
        self._accelerometer_sensor_data = numpy.array(value, dtype=numpy.float32)

    @builtins.property
    def magnetic_field_sensor_data(self):
        """Message field 'magnetic_field_sensor_data'."""
        return self._magnetic_field_sensor_data

    @magnetic_field_sensor_data.setter
    def magnetic_field_sensor_data(self, value):
        if isinstance(value, numpy.ndarray):
            assert value.dtype == numpy.float32, \
                "The 'magnetic_field_sensor_data' numpy.ndarray() must have the dtype of 'numpy.float32'"
            assert value.size == 5, \
                "The 'magnetic_field_sensor_data' numpy.ndarray() must have a size of 5"
            self._magnetic_field_sensor_data = value
            return
        if __debug__:
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 len(value) == 5 and
                 all(isinstance(v, float) for v in value) and
                 all(not (val < -3.402823466e+38 or val > 3.402823466e+38) or math.isinf(val) for val in value)), \
                "The 'magnetic_field_sensor_data' field must be a set or sequence with length 5 and each value of type 'float' and each float in [-340282346600000016151267322115014000640.000000, 340282346600000016151267322115014000640.000000]"
        self._magnetic_field_sensor_data = numpy.array(value, dtype=numpy.float32)

    @builtins.property
    def gyroscope_sensor_data(self):
        """Message field 'gyroscope_sensor_data'."""
        return self._gyroscope_sensor_data

    @gyroscope_sensor_data.setter
    def gyroscope_sensor_data(self, value):
        if isinstance(value, numpy.ndarray):
            assert value.dtype == numpy.float32, \
                "The 'gyroscope_sensor_data' numpy.ndarray() must have the dtype of 'numpy.float32'"
            assert value.size == 5, \
                "The 'gyroscope_sensor_data' numpy.ndarray() must have a size of 5"
            self._gyroscope_sensor_data = value
            return
        if __debug__:
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 len(value) == 5 and
                 all(isinstance(v, float) for v in value) and
                 all(not (val < -3.402823466e+38 or val > 3.402823466e+38) or math.isinf(val) for val in value)), \
                "The 'gyroscope_sensor_data' field must be a set or sequence with length 5 and each value of type 'float' and each float in [-340282346600000016151267322115014000640.000000, 340282346600000016151267322115014000640.000000]"
        self._gyroscope_sensor_data = numpy.array(value, dtype=numpy.float32)

    @builtins.property
    def light_sensor_data(self):
        """Message field 'light_sensor_data'."""
        return self._light_sensor_data

    @light_sensor_data.setter
    def light_sensor_data(self, value):
        if isinstance(value, numpy.ndarray):
            assert value.dtype == numpy.float32, \
                "The 'light_sensor_data' numpy.ndarray() must have the dtype of 'numpy.float32'"
            assert value.size == 5, \
                "The 'light_sensor_data' numpy.ndarray() must have a size of 5"
            self._light_sensor_data = value
            return
        if __debug__:
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 len(value) == 5 and
                 all(isinstance(v, float) for v in value) and
                 all(not (val < -3.402823466e+38 or val > 3.402823466e+38) or math.isinf(val) for val in value)), \
                "The 'light_sensor_data' field must be a set or sequence with length 5 and each value of type 'float' and each float in [-340282346600000016151267322115014000640.000000, 340282346600000016151267322115014000640.000000]"
        self._light_sensor_data = numpy.array(value, dtype=numpy.float32)

    @builtins.property
    def pressure_sensor_data(self):
        """Message field 'pressure_sensor_data'."""
        return self._pressure_sensor_data

    @pressure_sensor_data.setter
    def pressure_sensor_data(self, value):
        if isinstance(value, numpy.ndarray):
            assert value.dtype == numpy.float32, \
                "The 'pressure_sensor_data' numpy.ndarray() must have the dtype of 'numpy.float32'"
            assert value.size == 5, \
                "The 'pressure_sensor_data' numpy.ndarray() must have a size of 5"
            self._pressure_sensor_data = value
            return
        if __debug__:
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 len(value) == 5 and
                 all(isinstance(v, float) for v in value) and
                 all(not (val < -3.402823466e+38 or val > 3.402823466e+38) or math.isinf(val) for val in value)), \
                "The 'pressure_sensor_data' field must be a set or sequence with length 5 and each value of type 'float' and each float in [-340282346600000016151267322115014000640.000000, 340282346600000016151267322115014000640.000000]"
        self._pressure_sensor_data = numpy.array(value, dtype=numpy.float32)

    @builtins.property
    def proximity_sensor_data(self):
        """Message field 'proximity_sensor_data'."""
        return self._proximity_sensor_data

    @proximity_sensor_data.setter
    def proximity_sensor_data(self, value):
        if isinstance(value, numpy.ndarray):
            assert value.dtype == numpy.float32, \
                "The 'proximity_sensor_data' numpy.ndarray() must have the dtype of 'numpy.float32'"
            assert value.size == 5, \
                "The 'proximity_sensor_data' numpy.ndarray() must have a size of 5"
            self._proximity_sensor_data = value
            return
        if __debug__:
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 len(value) == 5 and
                 all(isinstance(v, float) for v in value) and
                 all(not (val < -3.402823466e+38 or val > 3.402823466e+38) or math.isinf(val) for val in value)), \
                "The 'proximity_sensor_data' field must be a set or sequence with length 5 and each value of type 'float' and each float in [-340282346600000016151267322115014000640.000000, 340282346600000016151267322115014000640.000000]"
        self._proximity_sensor_data = numpy.array(value, dtype=numpy.float32)

    @builtins.property
    def gravity_sensor_data(self):
        """Message field 'gravity_sensor_data'."""
        return self._gravity_sensor_data

    @gravity_sensor_data.setter
    def gravity_sensor_data(self, value):
        if isinstance(value, numpy.ndarray):
            assert value.dtype == numpy.float32, \
                "The 'gravity_sensor_data' numpy.ndarray() must have the dtype of 'numpy.float32'"
            assert value.size == 5, \
                "The 'gravity_sensor_data' numpy.ndarray() must have a size of 5"
            self._gravity_sensor_data = value
            return
        if __debug__:
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 len(value) == 5 and
                 all(isinstance(v, float) for v in value) and
                 all(not (val < -3.402823466e+38 or val > 3.402823466e+38) or math.isinf(val) for val in value)), \
                "The 'gravity_sensor_data' field must be a set or sequence with length 5 and each value of type 'float' and each float in [-340282346600000016151267322115014000640.000000, 340282346600000016151267322115014000640.000000]"
        self._gravity_sensor_data = numpy.array(value, dtype=numpy.float32)

    @builtins.property
    def relative_humidity_sensor_data(self):
        """Message field 'relative_humidity_sensor_data'."""
        return self._relative_humidity_sensor_data

    @relative_humidity_sensor_data.setter
    def relative_humidity_sensor_data(self, value):
        if isinstance(value, numpy.ndarray):
            assert value.dtype == numpy.float32, \
                "The 'relative_humidity_sensor_data' numpy.ndarray() must have the dtype of 'numpy.float32'"
            assert value.size == 5, \
                "The 'relative_humidity_sensor_data' numpy.ndarray() must have a size of 5"
            self._relative_humidity_sensor_data = value
            return
        if __debug__:
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 len(value) == 5 and
                 all(isinstance(v, float) for v in value) and
                 all(not (val < -3.402823466e+38 or val > 3.402823466e+38) or math.isinf(val) for val in value)), \
                "The 'relative_humidity_sensor_data' field must be a set or sequence with length 5 and each value of type 'float' and each float in [-340282346600000016151267322115014000640.000000, 340282346600000016151267322115014000640.000000]"
        self._relative_humidity_sensor_data = numpy.array(value, dtype=numpy.float32)

    @builtins.property
    def temperature_sensor_data(self):
        """Message field 'temperature_sensor_data'."""
        return self._temperature_sensor_data

    @temperature_sensor_data.setter
    def temperature_sensor_data(self, value):
        if isinstance(value, numpy.ndarray):
            assert value.dtype == numpy.float32, \
                "The 'temperature_sensor_data' numpy.ndarray() must have the dtype of 'numpy.float32'"
            assert value.size == 5, \
                "The 'temperature_sensor_data' numpy.ndarray() must have a size of 5"
            self._temperature_sensor_data = value
            return
        if __debug__:
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 len(value) == 5 and
                 all(isinstance(v, float) for v in value) and
                 all(not (val < -3.402823466e+38 or val > 3.402823466e+38) or math.isinf(val) for val in value)), \
                "The 'temperature_sensor_data' field must be a set or sequence with length 5 and each value of type 'float' and each float in [-340282346600000016151267322115014000640.000000, 340282346600000016151267322115014000640.000000]"
        self._temperature_sensor_data = numpy.array(value, dtype=numpy.float32)

    @builtins.property
    def heart_beat_sensor_data(self):
        """Message field 'heart_beat_sensor_data'."""
        return self._heart_beat_sensor_data

    @heart_beat_sensor_data.setter
    def heart_beat_sensor_data(self, value):
        if isinstance(value, numpy.ndarray):
            assert value.dtype == numpy.float32, \
                "The 'heart_beat_sensor_data' numpy.ndarray() must have the dtype of 'numpy.float32'"
            assert value.size == 5, \
                "The 'heart_beat_sensor_data' numpy.ndarray() must have a size of 5"
            self._heart_beat_sensor_data = value
            return
        if __debug__:
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 len(value) == 5 and
                 all(isinstance(v, float) for v in value) and
                 all(not (val < -3.402823466e+38 or val > 3.402823466e+38) or math.isinf(val) for val in value)), \
                "The 'heart_beat_sensor_data' field must be a set or sequence with length 5 and each value of type 'float' and each float in [-340282346600000016151267322115014000640.000000, 340282346600000016151267322115014000640.000000]"
        self._heart_beat_sensor_data = numpy.array(value, dtype=numpy.float32)

    @builtins.property
    def orientation_sensor_data(self):
        """Message field 'orientation_sensor_data'."""
        return self._orientation_sensor_data

    @orientation_sensor_data.setter
    def orientation_sensor_data(self, value):
        if isinstance(value, numpy.ndarray):
            assert value.dtype == numpy.float32, \
                "The 'orientation_sensor_data' numpy.ndarray() must have the dtype of 'numpy.float32'"
            assert value.size == 5, \
                "The 'orientation_sensor_data' numpy.ndarray() must have a size of 5"
            self._orientation_sensor_data = value
            return
        if __debug__:
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 len(value) == 5 and
                 all(isinstance(v, float) for v in value) and
                 all(not (val < -3.402823466e+38 or val > 3.402823466e+38) or math.isinf(val) for val in value)), \
                "The 'orientation_sensor_data' field must be a set or sequence with length 5 and each value of type 'float' and each float in [-340282346600000016151267322115014000640.000000, 340282346600000016151267322115014000640.000000]"
        self._orientation_sensor_data = numpy.array(value, dtype=numpy.float32)

    @builtins.property
    def line_sensor_sensor_data(self):
        """Message field 'line_sensor_sensor_data'."""
        return self._line_sensor_sensor_data

    @line_sensor_sensor_data.setter
    def line_sensor_sensor_data(self, value):
        if isinstance(value, numpy.ndarray):
            assert value.dtype == numpy.float32, \
                "The 'line_sensor_sensor_data' numpy.ndarray() must have the dtype of 'numpy.float32'"
            assert value.size == 5, \
                "The 'line_sensor_sensor_data' numpy.ndarray() must have a size of 5"
            self._line_sensor_sensor_data = value
            return
        if __debug__:
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 len(value) == 5 and
                 all(isinstance(v, float) for v in value) and
                 all(not (val < -3.402823466e+38 or val > 3.402823466e+38) or math.isinf(val) for val in value)), \
                "The 'line_sensor_sensor_data' field must be a set or sequence with length 5 and each value of type 'float' and each float in [-340282346600000016151267322115014000640.000000, 340282346600000016151267322115014000640.000000]"
        self._line_sensor_sensor_data = numpy.array(value, dtype=numpy.float32)

    @builtins.property
    def position_sensor_data(self):
        """Message field 'position_sensor_data'."""
        return self._position_sensor_data

    @position_sensor_data.setter
    def position_sensor_data(self, value):
        if isinstance(value, numpy.ndarray):
            assert value.dtype == numpy.float32, \
                "The 'position_sensor_data' numpy.ndarray() must have the dtype of 'numpy.float32'"
            assert value.size == 5, \
                "The 'position_sensor_data' numpy.ndarray() must have a size of 5"
            self._position_sensor_data = value
            return
        if __debug__:
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 len(value) == 5 and
                 all(isinstance(v, float) for v in value) and
                 all(not (val < -3.402823466e+38 or val > 3.402823466e+38) or math.isinf(val) for val in value)), \
                "The 'position_sensor_data' field must be a set or sequence with length 5 and each value of type 'float' and each float in [-340282346600000016151267322115014000640.000000, 340282346600000016151267322115014000640.000000]"
        self._position_sensor_data = numpy.array(value, dtype=numpy.float32)

    @builtins.property
    def parameter_sensor_data(self):
        """Message field 'parameter_sensor_data'."""
        return self._parameter_sensor_data

    @parameter_sensor_data.setter
    def parameter_sensor_data(self, value):
        if isinstance(value, numpy.ndarray):
            assert value.dtype == numpy.float32, \
                "The 'parameter_sensor_data' numpy.ndarray() must have the dtype of 'numpy.float32'"
            assert value.size == 5, \
                "The 'parameter_sensor_data' numpy.ndarray() must have a size of 5"
            self._parameter_sensor_data = value
            return
        if __debug__:
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 len(value) == 5 and
                 all(isinstance(v, float) for v in value) and
                 all(not (val < -3.402823466e+38 or val > 3.402823466e+38) or math.isinf(val) for val in value)), \
                "The 'parameter_sensor_data' field must be a set or sequence with length 5 and each value of type 'float' and each float in [-340282346600000016151267322115014000640.000000, 340282346600000016151267322115014000640.000000]"
        self._parameter_sensor_data = numpy.array(value, dtype=numpy.float32)
