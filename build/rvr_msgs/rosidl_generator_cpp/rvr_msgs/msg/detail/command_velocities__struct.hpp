// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from rvr_msgs:msg/CommandVelocities.idl
// generated code does not contain a copyright notice

#ifndef RVR_MSGS__MSG__DETAIL__COMMAND_VELOCITIES__STRUCT_HPP_
#define RVR_MSGS__MSG__DETAIL__COMMAND_VELOCITIES__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__rvr_msgs__msg__CommandVelocities __attribute__((deprecated))
#else
# define DEPRECATED__rvr_msgs__msg__CommandVelocities __declspec(deprecated)
#endif

namespace rvr_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct CommandVelocities_
{
  using Type = CommandVelocities_<ContainerAllocator>;

  explicit CommandVelocities_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->v1 = 0.0f;
      this->v2 = 0.0f;
      this->v3 = 0.0f;
      this->v4 = 0.0f;
    }
  }

  explicit CommandVelocities_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->v1 = 0.0f;
      this->v2 = 0.0f;
      this->v3 = 0.0f;
      this->v4 = 0.0f;
    }
  }

  // field types and members
  using _v1_type =
    float;
  _v1_type v1;
  using _v2_type =
    float;
  _v2_type v2;
  using _v3_type =
    float;
  _v3_type v3;
  using _v4_type =
    float;
  _v4_type v4;

  // setters for named parameter idiom
  Type & set__v1(
    const float & _arg)
  {
    this->v1 = _arg;
    return *this;
  }
  Type & set__v2(
    const float & _arg)
  {
    this->v2 = _arg;
    return *this;
  }
  Type & set__v3(
    const float & _arg)
  {
    this->v3 = _arg;
    return *this;
  }
  Type & set__v4(
    const float & _arg)
  {
    this->v4 = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    rvr_msgs::msg::CommandVelocities_<ContainerAllocator> *;
  using ConstRawPtr =
    const rvr_msgs::msg::CommandVelocities_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<rvr_msgs::msg::CommandVelocities_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<rvr_msgs::msg::CommandVelocities_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      rvr_msgs::msg::CommandVelocities_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<rvr_msgs::msg::CommandVelocities_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      rvr_msgs::msg::CommandVelocities_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<rvr_msgs::msg::CommandVelocities_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<rvr_msgs::msg::CommandVelocities_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<rvr_msgs::msg::CommandVelocities_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__rvr_msgs__msg__CommandVelocities
    std::shared_ptr<rvr_msgs::msg::CommandVelocities_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__rvr_msgs__msg__CommandVelocities
    std::shared_ptr<rvr_msgs::msg::CommandVelocities_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const CommandVelocities_ & other) const
  {
    if (this->v1 != other.v1) {
      return false;
    }
    if (this->v2 != other.v2) {
      return false;
    }
    if (this->v3 != other.v3) {
      return false;
    }
    if (this->v4 != other.v4) {
      return false;
    }
    return true;
  }
  bool operator!=(const CommandVelocities_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct CommandVelocities_

// alias to use template instance with default allocator
using CommandVelocities =
  rvr_msgs::msg::CommandVelocities_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace rvr_msgs

#endif  // RVR_MSGS__MSG__DETAIL__COMMAND_VELOCITIES__STRUCT_HPP_
