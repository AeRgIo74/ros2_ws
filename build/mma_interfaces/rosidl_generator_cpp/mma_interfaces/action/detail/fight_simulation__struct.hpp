// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from mma_interfaces:action/FightSimulation.idl
// generated code does not contain a copyright notice

#ifndef MMA_INTERFACES__ACTION__DETAIL__FIGHT_SIMULATION__STRUCT_HPP_
#define MMA_INTERFACES__ACTION__DETAIL__FIGHT_SIMULATION__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__mma_interfaces__action__FightSimulation_Goal __attribute__((deprecated))
#else
# define DEPRECATED__mma_interfaces__action__FightSimulation_Goal __declspec(deprecated)
#endif

namespace mma_interfaces
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct FightSimulation_Goal_
{
  using Type = FightSimulation_Goal_<ContainerAllocator>;

  explicit FightSimulation_Goal_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->fighter1 = "";
      this->fighter2 = "";
    }
  }

  explicit FightSimulation_Goal_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : fighter1(_alloc),
    fighter2(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->fighter1 = "";
      this->fighter2 = "";
    }
  }

  // field types and members
  using _fighter1_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _fighter1_type fighter1;
  using _fighter2_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _fighter2_type fighter2;

  // setters for named parameter idiom
  Type & set__fighter1(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->fighter1 = _arg;
    return *this;
  }
  Type & set__fighter2(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->fighter2 = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    mma_interfaces::action::FightSimulation_Goal_<ContainerAllocator> *;
  using ConstRawPtr =
    const mma_interfaces::action::FightSimulation_Goal_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<mma_interfaces::action::FightSimulation_Goal_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<mma_interfaces::action::FightSimulation_Goal_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      mma_interfaces::action::FightSimulation_Goal_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<mma_interfaces::action::FightSimulation_Goal_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      mma_interfaces::action::FightSimulation_Goal_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<mma_interfaces::action::FightSimulation_Goal_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<mma_interfaces::action::FightSimulation_Goal_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<mma_interfaces::action::FightSimulation_Goal_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__mma_interfaces__action__FightSimulation_Goal
    std::shared_ptr<mma_interfaces::action::FightSimulation_Goal_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__mma_interfaces__action__FightSimulation_Goal
    std::shared_ptr<mma_interfaces::action::FightSimulation_Goal_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const FightSimulation_Goal_ & other) const
  {
    if (this->fighter1 != other.fighter1) {
      return false;
    }
    if (this->fighter2 != other.fighter2) {
      return false;
    }
    return true;
  }
  bool operator!=(const FightSimulation_Goal_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct FightSimulation_Goal_

// alias to use template instance with default allocator
using FightSimulation_Goal =
  mma_interfaces::action::FightSimulation_Goal_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace mma_interfaces


#ifndef _WIN32
# define DEPRECATED__mma_interfaces__action__FightSimulation_Result __attribute__((deprecated))
#else
# define DEPRECATED__mma_interfaces__action__FightSimulation_Result __declspec(deprecated)
#endif

namespace mma_interfaces
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct FightSimulation_Result_
{
  using Type = FightSimulation_Result_<ContainerAllocator>;

  explicit FightSimulation_Result_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->winner = "";
    }
  }

  explicit FightSimulation_Result_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : winner(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->winner = "";
    }
  }

  // field types and members
  using _winner_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _winner_type winner;

  // setters for named parameter idiom
  Type & set__winner(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->winner = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    mma_interfaces::action::FightSimulation_Result_<ContainerAllocator> *;
  using ConstRawPtr =
    const mma_interfaces::action::FightSimulation_Result_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<mma_interfaces::action::FightSimulation_Result_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<mma_interfaces::action::FightSimulation_Result_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      mma_interfaces::action::FightSimulation_Result_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<mma_interfaces::action::FightSimulation_Result_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      mma_interfaces::action::FightSimulation_Result_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<mma_interfaces::action::FightSimulation_Result_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<mma_interfaces::action::FightSimulation_Result_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<mma_interfaces::action::FightSimulation_Result_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__mma_interfaces__action__FightSimulation_Result
    std::shared_ptr<mma_interfaces::action::FightSimulation_Result_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__mma_interfaces__action__FightSimulation_Result
    std::shared_ptr<mma_interfaces::action::FightSimulation_Result_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const FightSimulation_Result_ & other) const
  {
    if (this->winner != other.winner) {
      return false;
    }
    return true;
  }
  bool operator!=(const FightSimulation_Result_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct FightSimulation_Result_

// alias to use template instance with default allocator
using FightSimulation_Result =
  mma_interfaces::action::FightSimulation_Result_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace mma_interfaces


#ifndef _WIN32
# define DEPRECATED__mma_interfaces__action__FightSimulation_Feedback __attribute__((deprecated))
#else
# define DEPRECATED__mma_interfaces__action__FightSimulation_Feedback __declspec(deprecated)
#endif

namespace mma_interfaces
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct FightSimulation_Feedback_
{
  using Type = FightSimulation_Feedback_<ContainerAllocator>;

  explicit FightSimulation_Feedback_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->current_status = "";
    }
  }

  explicit FightSimulation_Feedback_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : current_status(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->current_status = "";
    }
  }

  // field types and members
  using _current_status_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _current_status_type current_status;

  // setters for named parameter idiom
  Type & set__current_status(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->current_status = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    mma_interfaces::action::FightSimulation_Feedback_<ContainerAllocator> *;
  using ConstRawPtr =
    const mma_interfaces::action::FightSimulation_Feedback_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<mma_interfaces::action::FightSimulation_Feedback_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<mma_interfaces::action::FightSimulation_Feedback_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      mma_interfaces::action::FightSimulation_Feedback_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<mma_interfaces::action::FightSimulation_Feedback_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      mma_interfaces::action::FightSimulation_Feedback_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<mma_interfaces::action::FightSimulation_Feedback_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<mma_interfaces::action::FightSimulation_Feedback_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<mma_interfaces::action::FightSimulation_Feedback_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__mma_interfaces__action__FightSimulation_Feedback
    std::shared_ptr<mma_interfaces::action::FightSimulation_Feedback_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__mma_interfaces__action__FightSimulation_Feedback
    std::shared_ptr<mma_interfaces::action::FightSimulation_Feedback_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const FightSimulation_Feedback_ & other) const
  {
    if (this->current_status != other.current_status) {
      return false;
    }
    return true;
  }
  bool operator!=(const FightSimulation_Feedback_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct FightSimulation_Feedback_

// alias to use template instance with default allocator
using FightSimulation_Feedback =
  mma_interfaces::action::FightSimulation_Feedback_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace mma_interfaces


// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.hpp"
// Member 'goal'
#include "mma_interfaces/action/detail/fight_simulation__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__mma_interfaces__action__FightSimulation_SendGoal_Request __attribute__((deprecated))
#else
# define DEPRECATED__mma_interfaces__action__FightSimulation_SendGoal_Request __declspec(deprecated)
#endif

namespace mma_interfaces
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct FightSimulation_SendGoal_Request_
{
  using Type = FightSimulation_SendGoal_Request_<ContainerAllocator>;

  explicit FightSimulation_SendGoal_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_init),
    goal(_init)
  {
    (void)_init;
  }

  explicit FightSimulation_SendGoal_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_alloc, _init),
    goal(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _goal_id_type =
    unique_identifier_msgs::msg::UUID_<ContainerAllocator>;
  _goal_id_type goal_id;
  using _goal_type =
    mma_interfaces::action::FightSimulation_Goal_<ContainerAllocator>;
  _goal_type goal;

  // setters for named parameter idiom
  Type & set__goal_id(
    const unique_identifier_msgs::msg::UUID_<ContainerAllocator> & _arg)
  {
    this->goal_id = _arg;
    return *this;
  }
  Type & set__goal(
    const mma_interfaces::action::FightSimulation_Goal_<ContainerAllocator> & _arg)
  {
    this->goal = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    mma_interfaces::action::FightSimulation_SendGoal_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const mma_interfaces::action::FightSimulation_SendGoal_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<mma_interfaces::action::FightSimulation_SendGoal_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<mma_interfaces::action::FightSimulation_SendGoal_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      mma_interfaces::action::FightSimulation_SendGoal_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<mma_interfaces::action::FightSimulation_SendGoal_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      mma_interfaces::action::FightSimulation_SendGoal_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<mma_interfaces::action::FightSimulation_SendGoal_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<mma_interfaces::action::FightSimulation_SendGoal_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<mma_interfaces::action::FightSimulation_SendGoal_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__mma_interfaces__action__FightSimulation_SendGoal_Request
    std::shared_ptr<mma_interfaces::action::FightSimulation_SendGoal_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__mma_interfaces__action__FightSimulation_SendGoal_Request
    std::shared_ptr<mma_interfaces::action::FightSimulation_SendGoal_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const FightSimulation_SendGoal_Request_ & other) const
  {
    if (this->goal_id != other.goal_id) {
      return false;
    }
    if (this->goal != other.goal) {
      return false;
    }
    return true;
  }
  bool operator!=(const FightSimulation_SendGoal_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct FightSimulation_SendGoal_Request_

// alias to use template instance with default allocator
using FightSimulation_SendGoal_Request =
  mma_interfaces::action::FightSimulation_SendGoal_Request_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace mma_interfaces


// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__mma_interfaces__action__FightSimulation_SendGoal_Response __attribute__((deprecated))
#else
# define DEPRECATED__mma_interfaces__action__FightSimulation_SendGoal_Response __declspec(deprecated)
#endif

namespace mma_interfaces
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct FightSimulation_SendGoal_Response_
{
  using Type = FightSimulation_SendGoal_Response_<ContainerAllocator>;

  explicit FightSimulation_SendGoal_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : stamp(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->accepted = false;
    }
  }

  explicit FightSimulation_SendGoal_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : stamp(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->accepted = false;
    }
  }

  // field types and members
  using _accepted_type =
    bool;
  _accepted_type accepted;
  using _stamp_type =
    builtin_interfaces::msg::Time_<ContainerAllocator>;
  _stamp_type stamp;

  // setters for named parameter idiom
  Type & set__accepted(
    const bool & _arg)
  {
    this->accepted = _arg;
    return *this;
  }
  Type & set__stamp(
    const builtin_interfaces::msg::Time_<ContainerAllocator> & _arg)
  {
    this->stamp = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    mma_interfaces::action::FightSimulation_SendGoal_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const mma_interfaces::action::FightSimulation_SendGoal_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<mma_interfaces::action::FightSimulation_SendGoal_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<mma_interfaces::action::FightSimulation_SendGoal_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      mma_interfaces::action::FightSimulation_SendGoal_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<mma_interfaces::action::FightSimulation_SendGoal_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      mma_interfaces::action::FightSimulation_SendGoal_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<mma_interfaces::action::FightSimulation_SendGoal_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<mma_interfaces::action::FightSimulation_SendGoal_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<mma_interfaces::action::FightSimulation_SendGoal_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__mma_interfaces__action__FightSimulation_SendGoal_Response
    std::shared_ptr<mma_interfaces::action::FightSimulation_SendGoal_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__mma_interfaces__action__FightSimulation_SendGoal_Response
    std::shared_ptr<mma_interfaces::action::FightSimulation_SendGoal_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const FightSimulation_SendGoal_Response_ & other) const
  {
    if (this->accepted != other.accepted) {
      return false;
    }
    if (this->stamp != other.stamp) {
      return false;
    }
    return true;
  }
  bool operator!=(const FightSimulation_SendGoal_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct FightSimulation_SendGoal_Response_

// alias to use template instance with default allocator
using FightSimulation_SendGoal_Response =
  mma_interfaces::action::FightSimulation_SendGoal_Response_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace mma_interfaces

namespace mma_interfaces
{

namespace action
{

struct FightSimulation_SendGoal
{
  using Request = mma_interfaces::action::FightSimulation_SendGoal_Request;
  using Response = mma_interfaces::action::FightSimulation_SendGoal_Response;
};

}  // namespace action

}  // namespace mma_interfaces


// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__mma_interfaces__action__FightSimulation_GetResult_Request __attribute__((deprecated))
#else
# define DEPRECATED__mma_interfaces__action__FightSimulation_GetResult_Request __declspec(deprecated)
#endif

namespace mma_interfaces
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct FightSimulation_GetResult_Request_
{
  using Type = FightSimulation_GetResult_Request_<ContainerAllocator>;

  explicit FightSimulation_GetResult_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_init)
  {
    (void)_init;
  }

  explicit FightSimulation_GetResult_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _goal_id_type =
    unique_identifier_msgs::msg::UUID_<ContainerAllocator>;
  _goal_id_type goal_id;

  // setters for named parameter idiom
  Type & set__goal_id(
    const unique_identifier_msgs::msg::UUID_<ContainerAllocator> & _arg)
  {
    this->goal_id = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    mma_interfaces::action::FightSimulation_GetResult_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const mma_interfaces::action::FightSimulation_GetResult_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<mma_interfaces::action::FightSimulation_GetResult_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<mma_interfaces::action::FightSimulation_GetResult_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      mma_interfaces::action::FightSimulation_GetResult_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<mma_interfaces::action::FightSimulation_GetResult_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      mma_interfaces::action::FightSimulation_GetResult_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<mma_interfaces::action::FightSimulation_GetResult_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<mma_interfaces::action::FightSimulation_GetResult_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<mma_interfaces::action::FightSimulation_GetResult_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__mma_interfaces__action__FightSimulation_GetResult_Request
    std::shared_ptr<mma_interfaces::action::FightSimulation_GetResult_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__mma_interfaces__action__FightSimulation_GetResult_Request
    std::shared_ptr<mma_interfaces::action::FightSimulation_GetResult_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const FightSimulation_GetResult_Request_ & other) const
  {
    if (this->goal_id != other.goal_id) {
      return false;
    }
    return true;
  }
  bool operator!=(const FightSimulation_GetResult_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct FightSimulation_GetResult_Request_

// alias to use template instance with default allocator
using FightSimulation_GetResult_Request =
  mma_interfaces::action::FightSimulation_GetResult_Request_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace mma_interfaces


// Include directives for member types
// Member 'result'
// already included above
// #include "mma_interfaces/action/detail/fight_simulation__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__mma_interfaces__action__FightSimulation_GetResult_Response __attribute__((deprecated))
#else
# define DEPRECATED__mma_interfaces__action__FightSimulation_GetResult_Response __declspec(deprecated)
#endif

namespace mma_interfaces
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct FightSimulation_GetResult_Response_
{
  using Type = FightSimulation_GetResult_Response_<ContainerAllocator>;

  explicit FightSimulation_GetResult_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : result(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->status = 0;
    }
  }

  explicit FightSimulation_GetResult_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : result(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->status = 0;
    }
  }

  // field types and members
  using _status_type =
    int8_t;
  _status_type status;
  using _result_type =
    mma_interfaces::action::FightSimulation_Result_<ContainerAllocator>;
  _result_type result;

  // setters for named parameter idiom
  Type & set__status(
    const int8_t & _arg)
  {
    this->status = _arg;
    return *this;
  }
  Type & set__result(
    const mma_interfaces::action::FightSimulation_Result_<ContainerAllocator> & _arg)
  {
    this->result = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    mma_interfaces::action::FightSimulation_GetResult_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const mma_interfaces::action::FightSimulation_GetResult_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<mma_interfaces::action::FightSimulation_GetResult_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<mma_interfaces::action::FightSimulation_GetResult_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      mma_interfaces::action::FightSimulation_GetResult_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<mma_interfaces::action::FightSimulation_GetResult_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      mma_interfaces::action::FightSimulation_GetResult_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<mma_interfaces::action::FightSimulation_GetResult_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<mma_interfaces::action::FightSimulation_GetResult_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<mma_interfaces::action::FightSimulation_GetResult_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__mma_interfaces__action__FightSimulation_GetResult_Response
    std::shared_ptr<mma_interfaces::action::FightSimulation_GetResult_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__mma_interfaces__action__FightSimulation_GetResult_Response
    std::shared_ptr<mma_interfaces::action::FightSimulation_GetResult_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const FightSimulation_GetResult_Response_ & other) const
  {
    if (this->status != other.status) {
      return false;
    }
    if (this->result != other.result) {
      return false;
    }
    return true;
  }
  bool operator!=(const FightSimulation_GetResult_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct FightSimulation_GetResult_Response_

// alias to use template instance with default allocator
using FightSimulation_GetResult_Response =
  mma_interfaces::action::FightSimulation_GetResult_Response_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace mma_interfaces

namespace mma_interfaces
{

namespace action
{

struct FightSimulation_GetResult
{
  using Request = mma_interfaces::action::FightSimulation_GetResult_Request;
  using Response = mma_interfaces::action::FightSimulation_GetResult_Response;
};

}  // namespace action

}  // namespace mma_interfaces


// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.hpp"
// Member 'feedback'
// already included above
// #include "mma_interfaces/action/detail/fight_simulation__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__mma_interfaces__action__FightSimulation_FeedbackMessage __attribute__((deprecated))
#else
# define DEPRECATED__mma_interfaces__action__FightSimulation_FeedbackMessage __declspec(deprecated)
#endif

namespace mma_interfaces
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct FightSimulation_FeedbackMessage_
{
  using Type = FightSimulation_FeedbackMessage_<ContainerAllocator>;

  explicit FightSimulation_FeedbackMessage_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_init),
    feedback(_init)
  {
    (void)_init;
  }

  explicit FightSimulation_FeedbackMessage_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_alloc, _init),
    feedback(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _goal_id_type =
    unique_identifier_msgs::msg::UUID_<ContainerAllocator>;
  _goal_id_type goal_id;
  using _feedback_type =
    mma_interfaces::action::FightSimulation_Feedback_<ContainerAllocator>;
  _feedback_type feedback;

  // setters for named parameter idiom
  Type & set__goal_id(
    const unique_identifier_msgs::msg::UUID_<ContainerAllocator> & _arg)
  {
    this->goal_id = _arg;
    return *this;
  }
  Type & set__feedback(
    const mma_interfaces::action::FightSimulation_Feedback_<ContainerAllocator> & _arg)
  {
    this->feedback = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    mma_interfaces::action::FightSimulation_FeedbackMessage_<ContainerAllocator> *;
  using ConstRawPtr =
    const mma_interfaces::action::FightSimulation_FeedbackMessage_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<mma_interfaces::action::FightSimulation_FeedbackMessage_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<mma_interfaces::action::FightSimulation_FeedbackMessage_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      mma_interfaces::action::FightSimulation_FeedbackMessage_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<mma_interfaces::action::FightSimulation_FeedbackMessage_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      mma_interfaces::action::FightSimulation_FeedbackMessage_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<mma_interfaces::action::FightSimulation_FeedbackMessage_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<mma_interfaces::action::FightSimulation_FeedbackMessage_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<mma_interfaces::action::FightSimulation_FeedbackMessage_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__mma_interfaces__action__FightSimulation_FeedbackMessage
    std::shared_ptr<mma_interfaces::action::FightSimulation_FeedbackMessage_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__mma_interfaces__action__FightSimulation_FeedbackMessage
    std::shared_ptr<mma_interfaces::action::FightSimulation_FeedbackMessage_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const FightSimulation_FeedbackMessage_ & other) const
  {
    if (this->goal_id != other.goal_id) {
      return false;
    }
    if (this->feedback != other.feedback) {
      return false;
    }
    return true;
  }
  bool operator!=(const FightSimulation_FeedbackMessage_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct FightSimulation_FeedbackMessage_

// alias to use template instance with default allocator
using FightSimulation_FeedbackMessage =
  mma_interfaces::action::FightSimulation_FeedbackMessage_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace mma_interfaces

#include "action_msgs/srv/cancel_goal.hpp"
#include "action_msgs/msg/goal_info.hpp"
#include "action_msgs/msg/goal_status_array.hpp"

namespace mma_interfaces
{

namespace action
{

struct FightSimulation
{
  /// The goal message defined in the action definition.
  using Goal = mma_interfaces::action::FightSimulation_Goal;
  /// The result message defined in the action definition.
  using Result = mma_interfaces::action::FightSimulation_Result;
  /// The feedback message defined in the action definition.
  using Feedback = mma_interfaces::action::FightSimulation_Feedback;

  struct Impl
  {
    /// The send_goal service using a wrapped version of the goal message as a request.
    using SendGoalService = mma_interfaces::action::FightSimulation_SendGoal;
    /// The get_result service using a wrapped version of the result message as a response.
    using GetResultService = mma_interfaces::action::FightSimulation_GetResult;
    /// The feedback message with generic fields which wraps the feedback message.
    using FeedbackMessage = mma_interfaces::action::FightSimulation_FeedbackMessage;

    /// The generic service to cancel a goal.
    using CancelGoalService = action_msgs::srv::CancelGoal;
    /// The generic message for the status of a goal.
    using GoalStatusMessage = action_msgs::msg::GoalStatusArray;
  };
};

typedef struct FightSimulation FightSimulation;

}  // namespace action

}  // namespace mma_interfaces

#endif  // MMA_INTERFACES__ACTION__DETAIL__FIGHT_SIMULATION__STRUCT_HPP_
