// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from p1_ej2_interface:msg/FilteredSensor.idl
// generated code does not contain a copyright notice
#include "p1_ej2_interface/msg/detail/filtered_sensor__rosidl_typesupport_fastrtps_cpp.hpp"
#include "p1_ej2_interface/msg/detail/filtered_sensor__struct.hpp"

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

namespace p1_ej2_interface
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_p1_ej2_interface
cdr_serialize(
  const p1_ej2_interface::msg::FilteredSensor & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: average_value
  cdr << ros_message.average_value;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_p1_ej2_interface
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  p1_ej2_interface::msg::FilteredSensor & ros_message)
{
  // Member: average_value
  cdr >> ros_message.average_value;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_p1_ej2_interface
get_serialized_size(
  const p1_ej2_interface::msg::FilteredSensor & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: average_value
  {
    size_t item_size = sizeof(ros_message.average_value);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_p1_ej2_interface
max_serialized_size_FilteredSensor(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;


  // Member: average_value
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = p1_ej2_interface::msg::FilteredSensor;
    is_plain =
      (
      offsetof(DataType, average_value) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static bool _FilteredSensor__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const p1_ej2_interface::msg::FilteredSensor *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _FilteredSensor__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<p1_ej2_interface::msg::FilteredSensor *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _FilteredSensor__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const p1_ej2_interface::msg::FilteredSensor *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _FilteredSensor__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_FilteredSensor(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _FilteredSensor__callbacks = {
  "p1_ej2_interface::msg",
  "FilteredSensor",
  _FilteredSensor__cdr_serialize,
  _FilteredSensor__cdr_deserialize,
  _FilteredSensor__get_serialized_size,
  _FilteredSensor__max_serialized_size
};

static rosidl_message_type_support_t _FilteredSensor__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_FilteredSensor__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace p1_ej2_interface

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_p1_ej2_interface
const rosidl_message_type_support_t *
get_message_type_support_handle<p1_ej2_interface::msg::FilteredSensor>()
{
  return &p1_ej2_interface::msg::typesupport_fastrtps_cpp::_FilteredSensor__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, p1_ej2_interface, msg, FilteredSensor)() {
  return &p1_ej2_interface::msg::typesupport_fastrtps_cpp::_FilteredSensor__handle;
}

#ifdef __cplusplus
}
#endif
