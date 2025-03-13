// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from p1_ej3_interface:srv/Angulos.idl
// generated code does not contain a copyright notice

#ifndef P1_EJ3_INTERFACE__SRV__DETAIL__ANGULOS__TRAITS_HPP_
#define P1_EJ3_INTERFACE__SRV__DETAIL__ANGULOS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "p1_ej3_interface/srv/detail/angulos__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace p1_ej3_interface
{

namespace srv
{

inline void to_flow_style_yaml(
  const Angulos_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: theta1
  {
    out << "theta1: ";
    rosidl_generator_traits::value_to_yaml(msg.theta1, out);
    out << ", ";
  }

  // member: theta2
  {
    out << "theta2: ";
    rosidl_generator_traits::value_to_yaml(msg.theta2, out);
    out << ", ";
  }

  // member: theta3
  {
    out << "theta3: ";
    rosidl_generator_traits::value_to_yaml(msg.theta3, out);
    out << ", ";
  }

  // member: theta4
  {
    out << "theta4: ";
    rosidl_generator_traits::value_to_yaml(msg.theta4, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Angulos_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: theta1
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "theta1: ";
    rosidl_generator_traits::value_to_yaml(msg.theta1, out);
    out << "\n";
  }

  // member: theta2
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "theta2: ";
    rosidl_generator_traits::value_to_yaml(msg.theta2, out);
    out << "\n";
  }

  // member: theta3
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "theta3: ";
    rosidl_generator_traits::value_to_yaml(msg.theta3, out);
    out << "\n";
  }

  // member: theta4
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "theta4: ";
    rosidl_generator_traits::value_to_yaml(msg.theta4, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Angulos_Request & msg, bool use_flow_style = false)
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

}  // namespace p1_ej3_interface

namespace rosidl_generator_traits
{

[[deprecated("use p1_ej3_interface::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const p1_ej3_interface::srv::Angulos_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  p1_ej3_interface::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use p1_ej3_interface::srv::to_yaml() instead")]]
inline std::string to_yaml(const p1_ej3_interface::srv::Angulos_Request & msg)
{
  return p1_ej3_interface::srv::to_yaml(msg);
}

template<>
inline const char * data_type<p1_ej3_interface::srv::Angulos_Request>()
{
  return "p1_ej3_interface::srv::Angulos_Request";
}

template<>
inline const char * name<p1_ej3_interface::srv::Angulos_Request>()
{
  return "p1_ej3_interface/srv/Angulos_Request";
}

template<>
struct has_fixed_size<p1_ej3_interface::srv::Angulos_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<p1_ej3_interface::srv::Angulos_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<p1_ej3_interface::srv::Angulos_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace p1_ej3_interface
{

namespace srv
{

inline void to_flow_style_yaml(
  const Angulos_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: x
  {
    out << "x: ";
    rosidl_generator_traits::value_to_yaml(msg.x, out);
    out << ", ";
  }

  // member: y
  {
    out << "y: ";
    rosidl_generator_traits::value_to_yaml(msg.y, out);
    out << ", ";
  }

  // member: z
  {
    out << "z: ";
    rosidl_generator_traits::value_to_yaml(msg.z, out);
    out << ", ";
  }

  // member: roll
  {
    out << "roll: ";
    rosidl_generator_traits::value_to_yaml(msg.roll, out);
    out << ", ";
  }

  // member: pitch
  {
    out << "pitch: ";
    rosidl_generator_traits::value_to_yaml(msg.pitch, out);
    out << ", ";
  }

  // member: yaw
  {
    out << "yaw: ";
    rosidl_generator_traits::value_to_yaml(msg.yaw, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Angulos_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: x
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "x: ";
    rosidl_generator_traits::value_to_yaml(msg.x, out);
    out << "\n";
  }

  // member: y
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "y: ";
    rosidl_generator_traits::value_to_yaml(msg.y, out);
    out << "\n";
  }

  // member: z
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "z: ";
    rosidl_generator_traits::value_to_yaml(msg.z, out);
    out << "\n";
  }

  // member: roll
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "roll: ";
    rosidl_generator_traits::value_to_yaml(msg.roll, out);
    out << "\n";
  }

  // member: pitch
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pitch: ";
    rosidl_generator_traits::value_to_yaml(msg.pitch, out);
    out << "\n";
  }

  // member: yaw
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "yaw: ";
    rosidl_generator_traits::value_to_yaml(msg.yaw, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Angulos_Response & msg, bool use_flow_style = false)
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

}  // namespace p1_ej3_interface

namespace rosidl_generator_traits
{

[[deprecated("use p1_ej3_interface::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const p1_ej3_interface::srv::Angulos_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  p1_ej3_interface::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use p1_ej3_interface::srv::to_yaml() instead")]]
inline std::string to_yaml(const p1_ej3_interface::srv::Angulos_Response & msg)
{
  return p1_ej3_interface::srv::to_yaml(msg);
}

template<>
inline const char * data_type<p1_ej3_interface::srv::Angulos_Response>()
{
  return "p1_ej3_interface::srv::Angulos_Response";
}

template<>
inline const char * name<p1_ej3_interface::srv::Angulos_Response>()
{
  return "p1_ej3_interface/srv/Angulos_Response";
}

template<>
struct has_fixed_size<p1_ej3_interface::srv::Angulos_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<p1_ej3_interface::srv::Angulos_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<p1_ej3_interface::srv::Angulos_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<p1_ej3_interface::srv::Angulos>()
{
  return "p1_ej3_interface::srv::Angulos";
}

template<>
inline const char * name<p1_ej3_interface::srv::Angulos>()
{
  return "p1_ej3_interface/srv/Angulos";
}

template<>
struct has_fixed_size<p1_ej3_interface::srv::Angulos>
  : std::integral_constant<
    bool,
    has_fixed_size<p1_ej3_interface::srv::Angulos_Request>::value &&
    has_fixed_size<p1_ej3_interface::srv::Angulos_Response>::value
  >
{
};

template<>
struct has_bounded_size<p1_ej3_interface::srv::Angulos>
  : std::integral_constant<
    bool,
    has_bounded_size<p1_ej3_interface::srv::Angulos_Request>::value &&
    has_bounded_size<p1_ej3_interface::srv::Angulos_Response>::value
  >
{
};

template<>
struct is_service<p1_ej3_interface::srv::Angulos>
  : std::true_type
{
};

template<>
struct is_service_request<p1_ej3_interface::srv::Angulos_Request>
  : std::true_type
{
};

template<>
struct is_service_response<p1_ej3_interface::srv::Angulos_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // P1_EJ3_INTERFACE__SRV__DETAIL__ANGULOS__TRAITS_HPP_
