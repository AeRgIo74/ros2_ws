# generated from rosidl_generator_py/resource/_idl.py.em
# with input from mma_interfaces:srv/FightRequest.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_FightRequest_Request(type):
    """Metaclass of message 'FightRequest_Request'."""

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
            module = import_type_support('mma_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'mma_interfaces.srv.FightRequest_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__fight_request__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__fight_request__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__fight_request__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__fight_request__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__fight_request__request

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class FightRequest_Request(metaclass=Metaclass_FightRequest_Request):
    """Message class 'FightRequest_Request'."""

    __slots__ = [
        '_fighter1',
        '_fighter2',
    ]

    _fields_and_field_types = {
        'fighter1': 'string',
        'fighter2': 'string',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.fighter1 = kwargs.get('fighter1', str())
        self.fighter2 = kwargs.get('fighter2', str())

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
        if self.fighter1 != other.fighter1:
            return False
        if self.fighter2 != other.fighter2:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def fighter1(self):
        """Message field 'fighter1'."""
        return self._fighter1

    @fighter1.setter
    def fighter1(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'fighter1' field must be of type 'str'"
        self._fighter1 = value

    @builtins.property
    def fighter2(self):
        """Message field 'fighter2'."""
        return self._fighter2

    @fighter2.setter
    def fighter2(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'fighter2' field must be of type 'str'"
        self._fighter2 = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_FightRequest_Response(type):
    """Metaclass of message 'FightRequest_Response'."""

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
            module = import_type_support('mma_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'mma_interfaces.srv.FightRequest_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__fight_request__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__fight_request__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__fight_request__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__fight_request__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__fight_request__response

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class FightRequest_Response(metaclass=Metaclass_FightRequest_Response):
    """Message class 'FightRequest_Response'."""

    __slots__ = [
        '_result',
    ]

    _fields_and_field_types = {
        'result': 'string',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.result = kwargs.get('result', str())

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
        if self.result != other.result:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def result(self):
        """Message field 'result'."""
        return self._result

    @result.setter
    def result(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'result' field must be of type 'str'"
        self._result = value


class Metaclass_FightRequest(type):
    """Metaclass of service 'FightRequest'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('mma_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'mma_interfaces.srv.FightRequest')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__fight_request

            from mma_interfaces.srv import _fight_request
            if _fight_request.Metaclass_FightRequest_Request._TYPE_SUPPORT is None:
                _fight_request.Metaclass_FightRequest_Request.__import_type_support__()
            if _fight_request.Metaclass_FightRequest_Response._TYPE_SUPPORT is None:
                _fight_request.Metaclass_FightRequest_Response.__import_type_support__()


class FightRequest(metaclass=Metaclass_FightRequest):
    from mma_interfaces.srv._fight_request import FightRequest_Request as Request
    from mma_interfaces.srv._fight_request import FightRequest_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
