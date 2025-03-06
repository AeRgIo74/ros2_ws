// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from mma_interfaces:action/FightSimulation.idl
// generated code does not contain a copyright notice

#ifndef MMA_INTERFACES__ACTION__DETAIL__FIGHT_SIMULATION__BUILDER_HPP_
#define MMA_INTERFACES__ACTION__DETAIL__FIGHT_SIMULATION__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "mma_interfaces/action/detail/fight_simulation__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace mma_interfaces
{

namespace action
{

namespace builder
{

class Init_FightSimulation_Goal_fighter2
{
public:
  explicit Init_FightSimulation_Goal_fighter2(::mma_interfaces::action::FightSimulation_Goal & msg)
  : msg_(msg)
  {}
  ::mma_interfaces::action::FightSimulation_Goal fighter2(::mma_interfaces::action::FightSimulation_Goal::_fighter2_type arg)
  {
    msg_.fighter2 = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mma_interfaces::action::FightSimulation_Goal msg_;
};

class Init_FightSimulation_Goal_fighter1
{
public:
  Init_FightSimulation_Goal_fighter1()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_FightSimulation_Goal_fighter2 fighter1(::mma_interfaces::action::FightSimulation_Goal::_fighter1_type arg)
  {
    msg_.fighter1 = std::move(arg);
    return Init_FightSimulation_Goal_fighter2(msg_);
  }

private:
  ::mma_interfaces::action::FightSimulation_Goal msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::mma_interfaces::action::FightSimulation_Goal>()
{
  return mma_interfaces::action::builder::Init_FightSimulation_Goal_fighter1();
}

}  // namespace mma_interfaces


namespace mma_interfaces
{

namespace action
{

namespace builder
{

class Init_FightSimulation_Result_winner
{
public:
  Init_FightSimulation_Result_winner()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::mma_interfaces::action::FightSimulation_Result winner(::mma_interfaces::action::FightSimulation_Result::_winner_type arg)
  {
    msg_.winner = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mma_interfaces::action::FightSimulation_Result msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::mma_interfaces::action::FightSimulation_Result>()
{
  return mma_interfaces::action::builder::Init_FightSimulation_Result_winner();
}

}  // namespace mma_interfaces


namespace mma_interfaces
{

namespace action
{

namespace builder
{

class Init_FightSimulation_Feedback_current_status
{
public:
  Init_FightSimulation_Feedback_current_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::mma_interfaces::action::FightSimulation_Feedback current_status(::mma_interfaces::action::FightSimulation_Feedback::_current_status_type arg)
  {
    msg_.current_status = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mma_interfaces::action::FightSimulation_Feedback msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::mma_interfaces::action::FightSimulation_Feedback>()
{
  return mma_interfaces::action::builder::Init_FightSimulation_Feedback_current_status();
}

}  // namespace mma_interfaces


namespace mma_interfaces
{

namespace action
{

namespace builder
{

class Init_FightSimulation_SendGoal_Request_goal
{
public:
  explicit Init_FightSimulation_SendGoal_Request_goal(::mma_interfaces::action::FightSimulation_SendGoal_Request & msg)
  : msg_(msg)
  {}
  ::mma_interfaces::action::FightSimulation_SendGoal_Request goal(::mma_interfaces::action::FightSimulation_SendGoal_Request::_goal_type arg)
  {
    msg_.goal = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mma_interfaces::action::FightSimulation_SendGoal_Request msg_;
};

class Init_FightSimulation_SendGoal_Request_goal_id
{
public:
  Init_FightSimulation_SendGoal_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_FightSimulation_SendGoal_Request_goal goal_id(::mma_interfaces::action::FightSimulation_SendGoal_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_FightSimulation_SendGoal_Request_goal(msg_);
  }

private:
  ::mma_interfaces::action::FightSimulation_SendGoal_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::mma_interfaces::action::FightSimulation_SendGoal_Request>()
{
  return mma_interfaces::action::builder::Init_FightSimulation_SendGoal_Request_goal_id();
}

}  // namespace mma_interfaces


namespace mma_interfaces
{

namespace action
{

namespace builder
{

class Init_FightSimulation_SendGoal_Response_stamp
{
public:
  explicit Init_FightSimulation_SendGoal_Response_stamp(::mma_interfaces::action::FightSimulation_SendGoal_Response & msg)
  : msg_(msg)
  {}
  ::mma_interfaces::action::FightSimulation_SendGoal_Response stamp(::mma_interfaces::action::FightSimulation_SendGoal_Response::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mma_interfaces::action::FightSimulation_SendGoal_Response msg_;
};

class Init_FightSimulation_SendGoal_Response_accepted
{
public:
  Init_FightSimulation_SendGoal_Response_accepted()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_FightSimulation_SendGoal_Response_stamp accepted(::mma_interfaces::action::FightSimulation_SendGoal_Response::_accepted_type arg)
  {
    msg_.accepted = std::move(arg);
    return Init_FightSimulation_SendGoal_Response_stamp(msg_);
  }

private:
  ::mma_interfaces::action::FightSimulation_SendGoal_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::mma_interfaces::action::FightSimulation_SendGoal_Response>()
{
  return mma_interfaces::action::builder::Init_FightSimulation_SendGoal_Response_accepted();
}

}  // namespace mma_interfaces


namespace mma_interfaces
{

namespace action
{

namespace builder
{

class Init_FightSimulation_GetResult_Request_goal_id
{
public:
  Init_FightSimulation_GetResult_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::mma_interfaces::action::FightSimulation_GetResult_Request goal_id(::mma_interfaces::action::FightSimulation_GetResult_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mma_interfaces::action::FightSimulation_GetResult_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::mma_interfaces::action::FightSimulation_GetResult_Request>()
{
  return mma_interfaces::action::builder::Init_FightSimulation_GetResult_Request_goal_id();
}

}  // namespace mma_interfaces


namespace mma_interfaces
{

namespace action
{

namespace builder
{

class Init_FightSimulation_GetResult_Response_result
{
public:
  explicit Init_FightSimulation_GetResult_Response_result(::mma_interfaces::action::FightSimulation_GetResult_Response & msg)
  : msg_(msg)
  {}
  ::mma_interfaces::action::FightSimulation_GetResult_Response result(::mma_interfaces::action::FightSimulation_GetResult_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mma_interfaces::action::FightSimulation_GetResult_Response msg_;
};

class Init_FightSimulation_GetResult_Response_status
{
public:
  Init_FightSimulation_GetResult_Response_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_FightSimulation_GetResult_Response_result status(::mma_interfaces::action::FightSimulation_GetResult_Response::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_FightSimulation_GetResult_Response_result(msg_);
  }

private:
  ::mma_interfaces::action::FightSimulation_GetResult_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::mma_interfaces::action::FightSimulation_GetResult_Response>()
{
  return mma_interfaces::action::builder::Init_FightSimulation_GetResult_Response_status();
}

}  // namespace mma_interfaces


namespace mma_interfaces
{

namespace action
{

namespace builder
{

class Init_FightSimulation_FeedbackMessage_feedback
{
public:
  explicit Init_FightSimulation_FeedbackMessage_feedback(::mma_interfaces::action::FightSimulation_FeedbackMessage & msg)
  : msg_(msg)
  {}
  ::mma_interfaces::action::FightSimulation_FeedbackMessage feedback(::mma_interfaces::action::FightSimulation_FeedbackMessage::_feedback_type arg)
  {
    msg_.feedback = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mma_interfaces::action::FightSimulation_FeedbackMessage msg_;
};

class Init_FightSimulation_FeedbackMessage_goal_id
{
public:
  Init_FightSimulation_FeedbackMessage_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_FightSimulation_FeedbackMessage_feedback goal_id(::mma_interfaces::action::FightSimulation_FeedbackMessage::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_FightSimulation_FeedbackMessage_feedback(msg_);
  }

private:
  ::mma_interfaces::action::FightSimulation_FeedbackMessage msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::mma_interfaces::action::FightSimulation_FeedbackMessage>()
{
  return mma_interfaces::action::builder::Init_FightSimulation_FeedbackMessage_goal_id();
}

}  // namespace mma_interfaces

#endif  // MMA_INTERFACES__ACTION__DETAIL__FIGHT_SIMULATION__BUILDER_HPP_
