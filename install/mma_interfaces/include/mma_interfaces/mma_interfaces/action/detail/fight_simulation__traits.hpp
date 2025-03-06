// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from mma_interfaces:action/FightSimulation.idl
// generated code does not contain a copyright notice

#ifndef MMA_INTERFACES__ACTION__DETAIL__FIGHT_SIMULATION__TRAITS_HPP_
#define MMA_INTERFACES__ACTION__DETAIL__FIGHT_SIMULATION__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "mma_interfaces/action/detail/fight_simulation__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace mma_interfaces
{

namespace action
{

inline void to_flow_style_yaml(
  const FightSimulation_Goal & msg,
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
  const FightSimulation_Goal & msg,
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

inline std::string to_yaml(const FightSimulation_Goal & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace mma_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use mma_interfaces::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const mma_interfaces::action::FightSimulation_Goal & msg,
  std::ostream & out, size_t indentation = 0)
{
  mma_interfaces::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use mma_interfaces::action::to_yaml() instead")]]
inline std::string to_yaml(const mma_interfaces::action::FightSimulation_Goal & msg)
{
  return mma_interfaces::action::to_yaml(msg);
}

template<>
inline const char * data_type<mma_interfaces::action::FightSimulation_Goal>()
{
  return "mma_interfaces::action::FightSimulation_Goal";
}

template<>
inline const char * name<mma_interfaces::action::FightSimulation_Goal>()
{
  return "mma_interfaces/action/FightSimulation_Goal";
}

template<>
struct has_fixed_size<mma_interfaces::action::FightSimulation_Goal>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<mma_interfaces::action::FightSimulation_Goal>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<mma_interfaces::action::FightSimulation_Goal>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace mma_interfaces
{

namespace action
{

inline void to_flow_style_yaml(
  const FightSimulation_Result & msg,
  std::ostream & out)
{
  out << "{";
  // member: winner
  {
    out << "winner: ";
    rosidl_generator_traits::value_to_yaml(msg.winner, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const FightSimulation_Result & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: winner
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "winner: ";
    rosidl_generator_traits::value_to_yaml(msg.winner, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const FightSimulation_Result & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace mma_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use mma_interfaces::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const mma_interfaces::action::FightSimulation_Result & msg,
  std::ostream & out, size_t indentation = 0)
{
  mma_interfaces::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use mma_interfaces::action::to_yaml() instead")]]
inline std::string to_yaml(const mma_interfaces::action::FightSimulation_Result & msg)
{
  return mma_interfaces::action::to_yaml(msg);
}

template<>
inline const char * data_type<mma_interfaces::action::FightSimulation_Result>()
{
  return "mma_interfaces::action::FightSimulation_Result";
}

template<>
inline const char * name<mma_interfaces::action::FightSimulation_Result>()
{
  return "mma_interfaces/action/FightSimulation_Result";
}

template<>
struct has_fixed_size<mma_interfaces::action::FightSimulation_Result>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<mma_interfaces::action::FightSimulation_Result>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<mma_interfaces::action::FightSimulation_Result>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace mma_interfaces
{

namespace action
{

inline void to_flow_style_yaml(
  const FightSimulation_Feedback & msg,
  std::ostream & out)
{
  out << "{";
  // member: current_status
  {
    out << "current_status: ";
    rosidl_generator_traits::value_to_yaml(msg.current_status, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const FightSimulation_Feedback & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: current_status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "current_status: ";
    rosidl_generator_traits::value_to_yaml(msg.current_status, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const FightSimulation_Feedback & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace mma_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use mma_interfaces::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const mma_interfaces::action::FightSimulation_Feedback & msg,
  std::ostream & out, size_t indentation = 0)
{
  mma_interfaces::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use mma_interfaces::action::to_yaml() instead")]]
inline std::string to_yaml(const mma_interfaces::action::FightSimulation_Feedback & msg)
{
  return mma_interfaces::action::to_yaml(msg);
}

template<>
inline const char * data_type<mma_interfaces::action::FightSimulation_Feedback>()
{
  return "mma_interfaces::action::FightSimulation_Feedback";
}

template<>
inline const char * name<mma_interfaces::action::FightSimulation_Feedback>()
{
  return "mma_interfaces/action/FightSimulation_Feedback";
}

template<>
struct has_fixed_size<mma_interfaces::action::FightSimulation_Feedback>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<mma_interfaces::action::FightSimulation_Feedback>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<mma_interfaces::action::FightSimulation_Feedback>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"
// Member 'goal'
#include "mma_interfaces/action/detail/fight_simulation__traits.hpp"

namespace mma_interfaces
{

namespace action
{

inline void to_flow_style_yaml(
  const FightSimulation_SendGoal_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: goal_id
  {
    out << "goal_id: ";
    to_flow_style_yaml(msg.goal_id, out);
    out << ", ";
  }

  // member: goal
  {
    out << "goal: ";
    to_flow_style_yaml(msg.goal, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const FightSimulation_SendGoal_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: goal_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal_id:\n";
    to_block_style_yaml(msg.goal_id, out, indentation + 2);
  }

  // member: goal
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal:\n";
    to_block_style_yaml(msg.goal, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const FightSimulation_SendGoal_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace mma_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use mma_interfaces::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const mma_interfaces::action::FightSimulation_SendGoal_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  mma_interfaces::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use mma_interfaces::action::to_yaml() instead")]]
inline std::string to_yaml(const mma_interfaces::action::FightSimulation_SendGoal_Request & msg)
{
  return mma_interfaces::action::to_yaml(msg);
}

template<>
inline const char * data_type<mma_interfaces::action::FightSimulation_SendGoal_Request>()
{
  return "mma_interfaces::action::FightSimulation_SendGoal_Request";
}

template<>
inline const char * name<mma_interfaces::action::FightSimulation_SendGoal_Request>()
{
  return "mma_interfaces/action/FightSimulation_SendGoal_Request";
}

template<>
struct has_fixed_size<mma_interfaces::action::FightSimulation_SendGoal_Request>
  : std::integral_constant<bool, has_fixed_size<mma_interfaces::action::FightSimulation_Goal>::value && has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<mma_interfaces::action::FightSimulation_SendGoal_Request>
  : std::integral_constant<bool, has_bounded_size<mma_interfaces::action::FightSimulation_Goal>::value && has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<mma_interfaces::action::FightSimulation_SendGoal_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__traits.hpp"

namespace mma_interfaces
{

namespace action
{

inline void to_flow_style_yaml(
  const FightSimulation_SendGoal_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: accepted
  {
    out << "accepted: ";
    rosidl_generator_traits::value_to_yaml(msg.accepted, out);
    out << ", ";
  }

  // member: stamp
  {
    out << "stamp: ";
    to_flow_style_yaml(msg.stamp, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const FightSimulation_SendGoal_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: accepted
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "accepted: ";
    rosidl_generator_traits::value_to_yaml(msg.accepted, out);
    out << "\n";
  }

  // member: stamp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "stamp:\n";
    to_block_style_yaml(msg.stamp, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const FightSimulation_SendGoal_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace mma_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use mma_interfaces::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const mma_interfaces::action::FightSimulation_SendGoal_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  mma_interfaces::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use mma_interfaces::action::to_yaml() instead")]]
inline std::string to_yaml(const mma_interfaces::action::FightSimulation_SendGoal_Response & msg)
{
  return mma_interfaces::action::to_yaml(msg);
}

template<>
inline const char * data_type<mma_interfaces::action::FightSimulation_SendGoal_Response>()
{
  return "mma_interfaces::action::FightSimulation_SendGoal_Response";
}

template<>
inline const char * name<mma_interfaces::action::FightSimulation_SendGoal_Response>()
{
  return "mma_interfaces/action/FightSimulation_SendGoal_Response";
}

template<>
struct has_fixed_size<mma_interfaces::action::FightSimulation_SendGoal_Response>
  : std::integral_constant<bool, has_fixed_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct has_bounded_size<mma_interfaces::action::FightSimulation_SendGoal_Response>
  : std::integral_constant<bool, has_bounded_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct is_message<mma_interfaces::action::FightSimulation_SendGoal_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<mma_interfaces::action::FightSimulation_SendGoal>()
{
  return "mma_interfaces::action::FightSimulation_SendGoal";
}

template<>
inline const char * name<mma_interfaces::action::FightSimulation_SendGoal>()
{
  return "mma_interfaces/action/FightSimulation_SendGoal";
}

template<>
struct has_fixed_size<mma_interfaces::action::FightSimulation_SendGoal>
  : std::integral_constant<
    bool,
    has_fixed_size<mma_interfaces::action::FightSimulation_SendGoal_Request>::value &&
    has_fixed_size<mma_interfaces::action::FightSimulation_SendGoal_Response>::value
  >
{
};

template<>
struct has_bounded_size<mma_interfaces::action::FightSimulation_SendGoal>
  : std::integral_constant<
    bool,
    has_bounded_size<mma_interfaces::action::FightSimulation_SendGoal_Request>::value &&
    has_bounded_size<mma_interfaces::action::FightSimulation_SendGoal_Response>::value
  >
{
};

template<>
struct is_service<mma_interfaces::action::FightSimulation_SendGoal>
  : std::true_type
{
};

template<>
struct is_service_request<mma_interfaces::action::FightSimulation_SendGoal_Request>
  : std::true_type
{
};

template<>
struct is_service_response<mma_interfaces::action::FightSimulation_SendGoal_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"

namespace mma_interfaces
{

namespace action
{

inline void to_flow_style_yaml(
  const FightSimulation_GetResult_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: goal_id
  {
    out << "goal_id: ";
    to_flow_style_yaml(msg.goal_id, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const FightSimulation_GetResult_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: goal_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal_id:\n";
    to_block_style_yaml(msg.goal_id, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const FightSimulation_GetResult_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace mma_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use mma_interfaces::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const mma_interfaces::action::FightSimulation_GetResult_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  mma_interfaces::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use mma_interfaces::action::to_yaml() instead")]]
inline std::string to_yaml(const mma_interfaces::action::FightSimulation_GetResult_Request & msg)
{
  return mma_interfaces::action::to_yaml(msg);
}

template<>
inline const char * data_type<mma_interfaces::action::FightSimulation_GetResult_Request>()
{
  return "mma_interfaces::action::FightSimulation_GetResult_Request";
}

template<>
inline const char * name<mma_interfaces::action::FightSimulation_GetResult_Request>()
{
  return "mma_interfaces/action/FightSimulation_GetResult_Request";
}

template<>
struct has_fixed_size<mma_interfaces::action::FightSimulation_GetResult_Request>
  : std::integral_constant<bool, has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<mma_interfaces::action::FightSimulation_GetResult_Request>
  : std::integral_constant<bool, has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<mma_interfaces::action::FightSimulation_GetResult_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'result'
// already included above
// #include "mma_interfaces/action/detail/fight_simulation__traits.hpp"

namespace mma_interfaces
{

namespace action
{

inline void to_flow_style_yaml(
  const FightSimulation_GetResult_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: status
  {
    out << "status: ";
    rosidl_generator_traits::value_to_yaml(msg.status, out);
    out << ", ";
  }

  // member: result
  {
    out << "result: ";
    to_flow_style_yaml(msg.result, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const FightSimulation_GetResult_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "status: ";
    rosidl_generator_traits::value_to_yaml(msg.status, out);
    out << "\n";
  }

  // member: result
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "result:\n";
    to_block_style_yaml(msg.result, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const FightSimulation_GetResult_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace mma_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use mma_interfaces::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const mma_interfaces::action::FightSimulation_GetResult_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  mma_interfaces::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use mma_interfaces::action::to_yaml() instead")]]
inline std::string to_yaml(const mma_interfaces::action::FightSimulation_GetResult_Response & msg)
{
  return mma_interfaces::action::to_yaml(msg);
}

template<>
inline const char * data_type<mma_interfaces::action::FightSimulation_GetResult_Response>()
{
  return "mma_interfaces::action::FightSimulation_GetResult_Response";
}

template<>
inline const char * name<mma_interfaces::action::FightSimulation_GetResult_Response>()
{
  return "mma_interfaces/action/FightSimulation_GetResult_Response";
}

template<>
struct has_fixed_size<mma_interfaces::action::FightSimulation_GetResult_Response>
  : std::integral_constant<bool, has_fixed_size<mma_interfaces::action::FightSimulation_Result>::value> {};

template<>
struct has_bounded_size<mma_interfaces::action::FightSimulation_GetResult_Response>
  : std::integral_constant<bool, has_bounded_size<mma_interfaces::action::FightSimulation_Result>::value> {};

template<>
struct is_message<mma_interfaces::action::FightSimulation_GetResult_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<mma_interfaces::action::FightSimulation_GetResult>()
{
  return "mma_interfaces::action::FightSimulation_GetResult";
}

template<>
inline const char * name<mma_interfaces::action::FightSimulation_GetResult>()
{
  return "mma_interfaces/action/FightSimulation_GetResult";
}

template<>
struct has_fixed_size<mma_interfaces::action::FightSimulation_GetResult>
  : std::integral_constant<
    bool,
    has_fixed_size<mma_interfaces::action::FightSimulation_GetResult_Request>::value &&
    has_fixed_size<mma_interfaces::action::FightSimulation_GetResult_Response>::value
  >
{
};

template<>
struct has_bounded_size<mma_interfaces::action::FightSimulation_GetResult>
  : std::integral_constant<
    bool,
    has_bounded_size<mma_interfaces::action::FightSimulation_GetResult_Request>::value &&
    has_bounded_size<mma_interfaces::action::FightSimulation_GetResult_Response>::value
  >
{
};

template<>
struct is_service<mma_interfaces::action::FightSimulation_GetResult>
  : std::true_type
{
};

template<>
struct is_service_request<mma_interfaces::action::FightSimulation_GetResult_Request>
  : std::true_type
{
};

template<>
struct is_service_response<mma_interfaces::action::FightSimulation_GetResult_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"
// Member 'feedback'
// already included above
// #include "mma_interfaces/action/detail/fight_simulation__traits.hpp"

namespace mma_interfaces
{

namespace action
{

inline void to_flow_style_yaml(
  const FightSimulation_FeedbackMessage & msg,
  std::ostream & out)
{
  out << "{";
  // member: goal_id
  {
    out << "goal_id: ";
    to_flow_style_yaml(msg.goal_id, out);
    out << ", ";
  }

  // member: feedback
  {
    out << "feedback: ";
    to_flow_style_yaml(msg.feedback, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const FightSimulation_FeedbackMessage & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: goal_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal_id:\n";
    to_block_style_yaml(msg.goal_id, out, indentation + 2);
  }

  // member: feedback
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "feedback:\n";
    to_block_style_yaml(msg.feedback, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const FightSimulation_FeedbackMessage & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace mma_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use mma_interfaces::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const mma_interfaces::action::FightSimulation_FeedbackMessage & msg,
  std::ostream & out, size_t indentation = 0)
{
  mma_interfaces::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use mma_interfaces::action::to_yaml() instead")]]
inline std::string to_yaml(const mma_interfaces::action::FightSimulation_FeedbackMessage & msg)
{
  return mma_interfaces::action::to_yaml(msg);
}

template<>
inline const char * data_type<mma_interfaces::action::FightSimulation_FeedbackMessage>()
{
  return "mma_interfaces::action::FightSimulation_FeedbackMessage";
}

template<>
inline const char * name<mma_interfaces::action::FightSimulation_FeedbackMessage>()
{
  return "mma_interfaces/action/FightSimulation_FeedbackMessage";
}

template<>
struct has_fixed_size<mma_interfaces::action::FightSimulation_FeedbackMessage>
  : std::integral_constant<bool, has_fixed_size<mma_interfaces::action::FightSimulation_Feedback>::value && has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<mma_interfaces::action::FightSimulation_FeedbackMessage>
  : std::integral_constant<bool, has_bounded_size<mma_interfaces::action::FightSimulation_Feedback>::value && has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<mma_interfaces::action::FightSimulation_FeedbackMessage>
  : std::true_type {};

}  // namespace rosidl_generator_traits


namespace rosidl_generator_traits
{

template<>
struct is_action<mma_interfaces::action::FightSimulation>
  : std::true_type
{
};

template<>
struct is_action_goal<mma_interfaces::action::FightSimulation_Goal>
  : std::true_type
{
};

template<>
struct is_action_result<mma_interfaces::action::FightSimulation_Result>
  : std::true_type
{
};

template<>
struct is_action_feedback<mma_interfaces::action::FightSimulation_Feedback>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits


#endif  // MMA_INTERFACES__ACTION__DETAIL__FIGHT_SIMULATION__TRAITS_HPP_
