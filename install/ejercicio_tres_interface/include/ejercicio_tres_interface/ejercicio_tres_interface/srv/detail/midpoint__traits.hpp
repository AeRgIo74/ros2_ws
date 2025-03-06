// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from ejercicio_tres_interface:srv/Midpoint.idl
// generated code does not contain a copyright notice

#ifndef EJERCICIO_TRES_INTERFACE__SRV__DETAIL__MIDPOINT__TRAITS_HPP_
#define EJERCICIO_TRES_INTERFACE__SRV__DETAIL__MIDPOINT__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "ejercicio_tres_interface/srv/detail/midpoint__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace ejercicio_tres_interface
{

namespace srv
{

inline void to_flow_style_yaml(
  const Midpoint_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: x1
  {
    out << "x1: ";
    rosidl_generator_traits::value_to_yaml(msg.x1, out);
    out << ", ";
  }

  // member: y1
  {
    out << "y1: ";
    rosidl_generator_traits::value_to_yaml(msg.y1, out);
    out << ", ";
  }

  // member: x2
  {
    out << "x2: ";
    rosidl_generator_traits::value_to_yaml(msg.x2, out);
    out << ", ";
  }

  // member: y2
  {
    out << "y2: ";
    rosidl_generator_traits::value_to_yaml(msg.y2, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Midpoint_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: x1
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "x1: ";
    rosidl_generator_traits::value_to_yaml(msg.x1, out);
    out << "\n";
  }

  // member: y1
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "y1: ";
    rosidl_generator_traits::value_to_yaml(msg.y1, out);
    out << "\n";
  }

  // member: x2
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "x2: ";
    rosidl_generator_traits::value_to_yaml(msg.x2, out);
    out << "\n";
  }

  // member: y2
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "y2: ";
    rosidl_generator_traits::value_to_yaml(msg.y2, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Midpoint_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace ejercicio_tres_interface

namespace rosidl_generator_traits
{

[[deprecated("use ejercicio_tres_interface::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const ejercicio_tres_interface::srv::Midpoint_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  ejercicio_tres_interface::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use ejercicio_tres_interface::srv::to_yaml() instead")]]
inline std::string to_yaml(const ejercicio_tres_interface::srv::Midpoint_Request & msg)
{
  return ejercicio_tres_interface::srv::to_yaml(msg);
}

template<>
inline const char * data_type<ejercicio_tres_interface::srv::Midpoint_Request>()
{
  return "ejercicio_tres_interface::srv::Midpoint_Request";
}

template<>
inline const char * name<ejercicio_tres_interface::srv::Midpoint_Request>()
{
  return "ejercicio_tres_interface/srv/Midpoint_Request";
}

template<>
struct has_fixed_size<ejercicio_tres_interface::srv::Midpoint_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<ejercicio_tres_interface::srv::Midpoint_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<ejercicio_tres_interface::srv::Midpoint_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace ejercicio_tres_interface
{

namespace srv
{

inline void to_flow_style_yaml(
  const Midpoint_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: xm
  {
    out << "xm: ";
    rosidl_generator_traits::value_to_yaml(msg.xm, out);
    out << ", ";
  }

  // member: ym
  {
    out << "ym: ";
    rosidl_generator_traits::value_to_yaml(msg.ym, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Midpoint_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: xm
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "xm: ";
    rosidl_generator_traits::value_to_yaml(msg.xm, out);
    out << "\n";
  }

  // member: ym
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ym: ";
    rosidl_generator_traits::value_to_yaml(msg.ym, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Midpoint_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace ejercicio_tres_interface

namespace rosidl_generator_traits
{

[[deprecated("use ejercicio_tres_interface::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const ejercicio_tres_interface::srv::Midpoint_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  ejercicio_tres_interface::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use ejercicio_tres_interface::srv::to_yaml() instead")]]
inline std::string to_yaml(const ejercicio_tres_interface::srv::Midpoint_Response & msg)
{
  return ejercicio_tres_interface::srv::to_yaml(msg);
}

template<>
inline const char * data_type<ejercicio_tres_interface::srv::Midpoint_Response>()
{
  return "ejercicio_tres_interface::srv::Midpoint_Response";
}

template<>
inline const char * name<ejercicio_tres_interface::srv::Midpoint_Response>()
{
  return "ejercicio_tres_interface/srv/Midpoint_Response";
}

template<>
struct has_fixed_size<ejercicio_tres_interface::srv::Midpoint_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<ejercicio_tres_interface::srv::Midpoint_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<ejercicio_tres_interface::srv::Midpoint_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<ejercicio_tres_interface::srv::Midpoint>()
{
  return "ejercicio_tres_interface::srv::Midpoint";
}

template<>
inline const char * name<ejercicio_tres_interface::srv::Midpoint>()
{
  return "ejercicio_tres_interface/srv/Midpoint";
}

template<>
struct has_fixed_size<ejercicio_tres_interface::srv::Midpoint>
  : std::integral_constant<
    bool,
    has_fixed_size<ejercicio_tres_interface::srv::Midpoint_Request>::value &&
    has_fixed_size<ejercicio_tres_interface::srv::Midpoint_Response>::value
  >
{
};

template<>
struct has_bounded_size<ejercicio_tres_interface::srv::Midpoint>
  : std::integral_constant<
    bool,
    has_bounded_size<ejercicio_tres_interface::srv::Midpoint_Request>::value &&
    has_bounded_size<ejercicio_tres_interface::srv::Midpoint_Response>::value
  >
{
};

template<>
struct is_service<ejercicio_tres_interface::srv::Midpoint>
  : std::true_type
{
};

template<>
struct is_service_request<ejercicio_tres_interface::srv::Midpoint_Request>
  : std::true_type
{
};

template<>
struct is_service_response<ejercicio_tres_interface::srv::Midpoint_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // EJERCICIO_TRES_INTERFACE__SRV__DETAIL__MIDPOINT__TRAITS_HPP_
