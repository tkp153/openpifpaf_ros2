// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from openpifpaf_ros2_msgs:msg/Person.idl
// generated code does not contain a copyright notice
#include "openpifpaf_ros2_msgs/msg/detail/person__rosidl_typesupport_fastrtps_cpp.hpp"
#include "openpifpaf_ros2_msgs/msg/detail/person__struct.hpp"

#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions
namespace visualization_msgs
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const visualization_msgs::msg::MarkerArray &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  visualization_msgs::msg::MarkerArray &);
size_t get_serialized_size(
  const visualization_msgs::msg::MarkerArray &,
  size_t current_alignment);
size_t
max_serialized_size_MarkerArray(
  bool & full_bounded,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace visualization_msgs


namespace openpifpaf_ros2_msgs
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_openpifpaf_ros2_msgs
cdr_serialize(
  const openpifpaf_ros2_msgs::msg::Person & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: markers
  visualization_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.markers,
    cdr);
  // Member: person_id
  cdr << ros_message.person_id;
  // Member: human_person_num
  cdr << ros_message.human_person_num;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_openpifpaf_ros2_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  openpifpaf_ros2_msgs::msg::Person & ros_message)
{
  // Member: markers
  visualization_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.markers);

  // Member: person_id
  cdr >> ros_message.person_id;

  // Member: human_person_num
  cdr >> ros_message.human_person_num;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_openpifpaf_ros2_msgs
get_serialized_size(
  const openpifpaf_ros2_msgs::msg::Person & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: markers

  current_alignment +=
    visualization_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.markers, current_alignment);
  // Member: person_id
  {
    size_t item_size = sizeof(ros_message.person_id);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: human_person_num
  {
    size_t item_size = sizeof(ros_message.human_person_num);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_openpifpaf_ros2_msgs
max_serialized_size_Person(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: markers
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        visualization_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_MarkerArray(
        full_bounded, current_alignment);
    }
  }

  // Member: person_id
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: human_person_num
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  return current_alignment - initial_alignment;
}

static bool _Person__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const openpifpaf_ros2_msgs::msg::Person *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _Person__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<openpifpaf_ros2_msgs::msg::Person *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _Person__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const openpifpaf_ros2_msgs::msg::Person *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _Person__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_Person(full_bounded, 0);
}

static message_type_support_callbacks_t _Person__callbacks = {
  "openpifpaf_ros2_msgs::msg",
  "Person",
  _Person__cdr_serialize,
  _Person__cdr_deserialize,
  _Person__get_serialized_size,
  _Person__max_serialized_size
};

static rosidl_message_type_support_t _Person__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_Person__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace openpifpaf_ros2_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_openpifpaf_ros2_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<openpifpaf_ros2_msgs::msg::Person>()
{
  return &openpifpaf_ros2_msgs::msg::typesupport_fastrtps_cpp::_Person__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, openpifpaf_ros2_msgs, msg, Person)() {
  return &openpifpaf_ros2_msgs::msg::typesupport_fastrtps_cpp::_Person__handle;
}

#ifdef __cplusplus
}
#endif
