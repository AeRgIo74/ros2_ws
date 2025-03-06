// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from mma_interfaces:srv/FightRequest.idl
// generated code does not contain a copyright notice

#ifndef MMA_INTERFACES__SRV__DETAIL__FIGHT_REQUEST__TRAITS_HPP_
#define MMA_INTERFACES__SRV__DETAIL__FIGHT_REQUEST__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "mma_interfaces/srv/detail/fight_request__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace mma_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const FightRequest_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: fighter1
  {
    out << "fighter1: ";
    rosidl_generator_traits::value_to_yaml(msg.fighter1, out);
    out << ", ";
  }

  // member: fighter2
  {
    out << "fighter2: ";
    rosidl_generator_traits::value_to_yaml(msg.fighter2, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const FightRequest_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: fighter1
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "fighter1: ";
    rosidl_generator_traits::value_to_yaml(msg.fighter1, out);
    out << "\n";
  }

  // member: fighter2
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "fighter2: ";
    rosidl_generator_traits::value_to_yaml(msg.fighter2, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const FightRequest_Request & msg, bool use_flow_style = false)
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

}  // namespace mma_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use mma_interfaces::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const mma_interfaces::srv::FightRequest_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  mma_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use mma_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const mma_interfaces::srv::FightRequest_Request & msg)
{
  return mma_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<mma_interfaces::srv::FightRequest_Request>()
{
  return "mma_interfaces::srv::FightRequest_Request";
}

template<>
inline const char * name<mma_interfaces::srv::FightRequest_Request>()
{
  return "mma_interfaces/srv/FightRequest_Request";
}

template<>
struct has_fixed_size<mma_interfaces::srv::FightRequest_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<mma_interfaces::srv::FightRequest_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<mma_interfaces::srv::FightRequest_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace mma_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const FightRequest_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: result
  {
    out << "result: ";
    rosidl_generator_traits::value_to_yaml(msg.result, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const FightRequest_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: result
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "result: ";
    rosidl_generator_traits::value_to_yaml(msg.result, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const FightRequest_Response & msg, bool use_flow_style = false)
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

}  // namespace mma_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use mma_interfaces::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const mma_interfaces::srv::FightRequest_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  mma_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use mma_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const mma_interfaces::srv::FightRequest_Response & msg)
{
  return mma_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<mma_interfaces::srv::FightRequest_Response>()
{
  return "mma_interfaces::srv::FightRequest_Response";
}

template<>
inline const char * name<mma_interfaces::srv::FightRequest_Response>()
{
  return "mma_interfaces/srv/FightRequest_Response";
}

template<>
struct has_fixed_size<mma_interfaces::srv::FightRequest_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<mma_interfaces::srv::FightRequest_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<mma_interfaces::srv::FightRequest_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<mma_interfaces::srv::FightRequest>()
{
  return "mma_interfaces::srv::FightRequest";
}

template<>
inline const char * name<mma_interfaces::srv::FightRequest>()
{
  return "mma_interfaces/srv/FightRequest";
}

template<>
struct has_fixed_size<mma_interfaces::srv::FightRequest>
  : std::integral_constant<
    bool,
    has_fixed_size<mma_interfaces::srv::FightRequest_Request>::value &&
    has_fixed_size<mma_interfaces::srv::FightRequest_Response>::value
  >
{
};

template<>
struct has_bounded_size<mma_interfaces::srv::FightRequest>
  : std::integral_constant<
    bool,
    has_bounded_size<mma_interfaces::srv::FightRequest_Request>::value &&
    has_bounded_size<mma_interfaces::srv::FightRequest_Response>::value
  >
{
};

template<>
struct is_service<mma_interfaces::srv::FightRequest>
  : std::true_type
{
};

template<>
struct is_service_request<mma_interfaces::srv::FightRequest_Request>
  : std::true_type
{
};

template<>
struct is_service_response<mma_interfaces::srv::FightRequest_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // MMA_INTERFACES__SRV__DETAIL__FIGHT_REQUEST__TRAITS_HPP_
