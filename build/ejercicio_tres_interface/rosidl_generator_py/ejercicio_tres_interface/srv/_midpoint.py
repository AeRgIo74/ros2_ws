# generated from rosidl_generator_py/resource/_idl.py.em
# with input from ejercicio_tres_interface:srv/Midpoint.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_Midpoint_Request(type):
    """Metaclass of message 'Midpoint_Request'."""

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
            module = import_type_support('ejercicio_tres_interface')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'ejercicio_tres_interface.srv.Midpoint_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__midpoint__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__midpoint__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__midpoint__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__midpoint__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__midpoint__request

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class Midpoint_Request(metaclass=Metaclass_Midpoint_Request):
    """Message class 'Midpoint_Request'."""

    __slots__ = [
        '_x1',
        '_y1',
        '_x2',
        '_y2',
    ]

    _fields_and_field_types = {
        'x1': 'double',
        'y1': 'double',
        'x2': 'double',
        'y2': 'double',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.x1 = kwargs.get('x1', float())
        self.y1 = kwargs.get('y1', float())
        self.x2 = kwargs.get('x2', float())
        self.y2 = kwargs.get('y2', float())

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
        if self.x1 != other.x1:
            return False
        if self.y1 != other.y1:
            return False
        if self.x2 != other.x2:
            return False
        if self.y2 != other.y2:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def x1(self):
        """Message field 'x1'."""
        return self._x1

    @x1.setter
    def x1(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'x1' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'x1' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._x1 = value

    @builtins.property
    def y1(self):
        """Message field 'y1'."""
        return self._y1

    @y1.setter
    def y1(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'y1' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'y1' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._y1 = value

    @builtins.property
    def x2(self):
        """Message field 'x2'."""
        return self._x2

    @x2.setter
    def x2(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'x2' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'x2' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._x2 = value

    @builtins.property
    def y2(self):
        """Message field 'y2'."""
        return self._y2

    @y2.setter
    def y2(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'y2' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'y2' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._y2 = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import math

# already imported above
# import rosidl_parser.definition


class Metaclass_Midpoint_Response(type):
    """Metaclass of message 'Midpoint_Response'."""

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
            module = import_type_support('ejercicio_tres_interface')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'ejercicio_tres_interface.srv.Midpoint_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__midpoint__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__midpoint__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__midpoint__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__midpoint__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__midpoint__response

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class Midpoint_Response(metaclass=Metaclass_Midpoint_Response):
    """Message class 'Midpoint_Response'."""

    __slots__ = [
        '_xm',
        '_ym',
    ]

    _fields_and_field_types = {
        'xm': 'double',
        'ym': 'double',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.xm = kwargs.get('xm', float())
        self.ym = kwargs.get('ym', float())

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
        if self.xm != other.xm:
            return False
        if self.ym != other.ym:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def xm(self):
        """Message field 'xm'."""
        return self._xm

    @xm.setter
    def xm(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'xm' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'xm' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._xm = value

    @builtins.property
    def ym(self):
        """Message field 'ym'."""
        return self._ym

    @ym.setter
    def ym(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'ym' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'ym' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._ym = value


class Metaclass_Midpoint(type):
    """Metaclass of service 'Midpoint'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('ejercicio_tres_interface')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'ejercicio_tres_interface.srv.Midpoint')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__midpoint

            from ejercicio_tres_interface.srv import _midpoint
            if _midpoint.Metaclass_Midpoint_Request._TYPE_SUPPORT is None:
                _midpoint.Metaclass_Midpoint_Request.__import_type_support__()
            if _midpoint.Metaclass_Midpoint_Response._TYPE_SUPPORT is None:
                _midpoint.Metaclass_Midpoint_Response.__import_type_support__()


class Midpoint(metaclass=Metaclass_Midpoint):
    from ejercicio_tres_interface.srv._midpoint import Midpoint_Request as Request
    from ejercicio_tres_interface.srv._midpoint import Midpoint_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
