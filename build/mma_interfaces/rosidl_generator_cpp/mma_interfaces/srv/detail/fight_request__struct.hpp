// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from mma_interfaces:srv/FightRequest.idl
// generated code does not contain a copyright notice

#ifndef MMA_INTERFACES__SRV__DETAIL__FIGHT_REQUEST__STRUCT_HPP_
#define MMA_INTERFACES__SRV__DETAIL__FIGHT_REQUEST__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__mma_interfaces__srv__FightRequest_Request __attribute__((deprecated))
#else
# define DEPRECATED__mma_interfaces__srv__FightRequest_Request __declspec(deprecated)
#endif

namespace mma_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct FightRequest_Request_
{
  using Type = FightRequest_Request_<ContainerAllocator>;

  explicit FightRequest_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->fighter1 = "";
      this->fighter2 = "";
    }
  }

  explicit FightRequest_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
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
    mma_interfaces::srv::FightRequest_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const mma_interfaces::srv::FightRequest_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<mma_interfaces::srv::FightRequest_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<mma_interfaces::srv::FightRequest_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      mma_interfaces::srv::FightRequest_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<mma_interfaces::srv::FightRequest_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      mma_interfaces::srv::FightRequest_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<mma_interfaces::srv::FightRequest_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<mma_interfaces::srv::FightRequest_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<mma_interfaces::srv::FightRequest_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__mma_interfaces__srv__FightRequest_Request
    std::shared_ptr<mma_interfaces::srv::FightRequest_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__mma_interfaces__srv__FightRequest_Request
    std::shared_ptr<mma_interfaces::srv::FightRequest_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const FightRequest_Request_ & other) const
  {
    if (this->fighter1 != other.fighter1) {
      return false;
    }
    if (this->fighter2 != other.fighter2) {
      return false;
    }
    return true;
  }
  bool operator!=(const FightRequest_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct FightRequest_Request_

// alias to use template instance with default allocator
using FightRequest_Request =
  mma_interfaces::srv::FightRequest_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace mma_interfaces


#ifndef _WIN32
# define DEPRECATED__mma_interfaces__srv__FightRequest_Response __attribute__((deprecated))
#else
# define DEPRECATED__mma_interfaces__srv__FightRequest_Response __declspec(deprecated)
#endif

namespace mma_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct FightRequest_Response_
{
  using Type = FightRequest_Response_<ContainerAllocator>;

  explicit FightRequest_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->result = "";
    }
  }

  explicit FightRequest_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : result(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->result = "";
    }
  }

  // field types and members
  using _result_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _result_type result;

  // setters for named parameter idiom
  Type & set__result(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->result = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    mma_interfaces::srv::FightRequest_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const mma_interfaces::srv::FightRequest_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<mma_interfaces::srv::FightRequest_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<mma_interfaces::srv::FightRequest_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      mma_interfaces::srv::FightRequest_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<mma_interfaces::srv::FightRequest_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      mma_interfaces::srv::FightRequest_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<mma_interfaces::srv::FightRequest_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<mma_interfaces::srv::FightRequest_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<mma_interfaces::srv::FightRequest_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__mma_interfaces__srv__FightRequest_Response
    std::shared_ptr<mma_interfaces::srv::FightRequest_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__mma_interfaces__srv__FightRequest_Response
    std::shared_ptr<mma_interfaces::srv::FightRequest_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const FightRequest_Response_ & other) const
  {
    if (this->result != other.result) {
      return false;
    }
    return true;
  }
  bool operator!=(const FightRequest_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct FightRequest_Response_

// alias to use template instance with default allocator
using FightRequest_Response =
  mma_interfaces::srv::FightRequest_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace mma_interfaces

namespace mma_interfaces
{

namespace srv
{

struct FightRequest
{
  using Request = mma_interfaces::srv::FightRequest_Request;
  using Response = mma_interfaces::srv::FightRequest_Response;
};

}  // namespace srv

}  // namespace mma_interfaces

#endif  // MMA_INTERFACES__SRV__DETAIL__FIGHT_REQUEST__STRUCT_HPP_
