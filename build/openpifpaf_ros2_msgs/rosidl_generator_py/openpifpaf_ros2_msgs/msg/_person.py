# generated from rosidl_generator_py/resource/_idl.py.em
# with input from openpifpaf_ros2_msgs:msg/Person.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_Person(type):
    """Metaclass of message 'Person'."""

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
            module = import_type_support('openpifpaf_ros2_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'openpifpaf_ros2_msgs.msg.Person')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__person
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__person
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__person
            cls._TYPE_SUPPORT = module.type_support_msg__msg__person
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__person

            from visualization_msgs.msg import MarkerArray
            if MarkerArray.__class__._TYPE_SUPPORT is None:
                MarkerArray.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class Person(metaclass=Metaclass_Person):
    """Message class 'Person'."""

    __slots__ = [
        '_markers',
        '_person_id',
        '_human_person_num',
    ]

    _fields_and_field_types = {
        'markers': 'visualization_msgs/MarkerArray',
        'person_id': 'int32',
        'human_person_num': 'int32',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['visualization_msgs', 'msg'], 'MarkerArray'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from visualization_msgs.msg import MarkerArray
        self.markers = kwargs.get('markers', MarkerArray())
        self.person_id = kwargs.get('person_id', int())
        self.human_person_num = kwargs.get('human_person_num', int())

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
        if self.markers != other.markers:
            return False
        if self.person_id != other.person_id:
            return False
        if self.human_person_num != other.human_person_num:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def markers(self):
        """Message field 'markers'."""
        return self._markers

    @markers.setter
    def markers(self, value):
        if __debug__:
            from visualization_msgs.msg import MarkerArray
            assert \
                isinstance(value, MarkerArray), \
                "The 'markers' field must be a sub message of type 'MarkerArray'"
        self._markers = value

    @property
    def person_id(self):
        """Message field 'person_id'."""
        return self._person_id

    @person_id.setter
    def person_id(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'person_id' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'person_id' field must be an integer in [-2147483648, 2147483647]"
        self._person_id = value

    @property
    def human_person_num(self):
        """Message field 'human_person_num'."""
        return self._human_person_num

    @human_person_num.setter
    def human_person_num(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'human_person_num' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'human_person_num' field must be an integer in [-2147483648, 2147483647]"
        self._human_person_num = value
