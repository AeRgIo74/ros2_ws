// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from p1_ej2_interface:msg/FilteredSensor.idl
// generated code does not contain a copyright notice

#ifndef P1_EJ2_INTERFACE__MSG__DETAIL__FILTERED_SENSOR__TRAITS_HPP_
#define P1_EJ2_INTERFACE__MSG__DETAIL__FILTERED_SENSOR__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "p1_ej2_interface/msg/detail/filtered_sensor__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace p1_ej2_interface
{

namespace msg
{

inline void to_flow_style_yaml(
  const FilteredSensor & msg,
  std::ostream & out)
{
  out << "{";
  // member: average_value
  {
    out << "average_value: ";
    rosidl_generator_traits::value_to_yaml(msg.average_value, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const FilteredSensor & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: average_value
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "average_value: ";
    rosidl_generator_traits::value_to_yaml(msg.average_value, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const FilteredSensor & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace p1_ej2_interface

namespace rosidl_generator_traits
{

[[deprecated("use p1_ej2_interface::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const p1_ej2_interface::msg::FilteredSensor & msg,
  std::ostream & out, size_t indentation = 0)
{
  p1_ej2_interface::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use p1_ej2_interface::msg::to_yaml() instead")]]
inline std::string to_yaml(const p1_ej2_interface::msg::FilteredSensor & msg)
{
  return p1_ej2_interface::msg::to_yaml(msg);
}

template<>
inline const char * data_type<p1_ej2_interface::msg::FilteredSensor>()
{
  return "p1_ej2_interface::msg::FilteredSensor";
}

template<>
inline const char * name<p1_ej2_interface::msg::FilteredSensor>()
{
  return "p1_ej2_interface/msg/FilteredSensor";
}

template<>
struct has_fixed_size<p1_ej2_interface::msg::FilteredSensor>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<p1_ej2_interface::msg::FilteredSensor>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<p1_ej2_interface::msg::FilteredSensor>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // P1_EJ2_INTERFACE__MSG__DETAIL__FILTERED_SENSOR__TRAITS_HPP_
