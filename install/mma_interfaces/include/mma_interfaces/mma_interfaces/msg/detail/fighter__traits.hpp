// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from mma_interfaces:msg/Fighter.idl
// generated code does not contain a copyright notice

#ifndef MMA_INTERFACES__MSG__DETAIL__FIGHTER__TRAITS_HPP_
#define MMA_INTERFACES__MSG__DETAIL__FIGHTER__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "mma_interfaces/msg/detail/fighter__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace mma_interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const Fighter & msg,
  std::ostream & out)
{
  out << "{";
  // member: name
  {
    out << "name: ";
    rosidl_generator_traits::value_to_yaml(msg.name, out);
    out << ", ";
  }

  // member: weight
  {
    out << "weight: ";
    rosidl_generator_traits::value_to_yaml(msg.weight, out);
    out << ", ";
  }

  // member: style
  {
    out << "style: ";
    rosidl_generator_traits::value_to_yaml(msg.style, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Fighter & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: name
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "name: ";
    rosidl_generator_traits::value_to_yaml(msg.name, out);
    out << "\n";
  }

  // member: weight
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "weight: ";
    rosidl_generator_traits::value_to_yaml(msg.weight, out);
    out << "\n";
  }

  // member: style
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "style: ";
    rosidl_generator_traits::value_to_yaml(msg.style, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Fighter & msg, bool use_flow_style = false)
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

}  // namespace mma_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use mma_interfaces::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const mma_interfaces::msg::Fighter & msg,
  std::ostream & out, size_t indentation = 0)
{
  mma_interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use mma_interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const mma_interfaces::msg::Fighter & msg)
{
  return mma_interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<mma_interfaces::msg::Fighter>()
{
  return "mma_interfaces::msg::Fighter";
}

template<>
inline const char * name<mma_interfaces::msg::Fighter>()
{
  return "mma_interfaces/msg/Fighter";
}

template<>
struct has_fixed_size<mma_interfaces::msg::Fighter>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<mma_interfaces::msg::Fighter>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<mma_interfaces::msg::Fighter>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // MMA_INTERFACES__MSG__DETAIL__FIGHTER__TRAITS_HPP_
