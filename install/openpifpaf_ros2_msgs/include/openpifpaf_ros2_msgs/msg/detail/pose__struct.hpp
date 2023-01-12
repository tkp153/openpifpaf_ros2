// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from openpifpaf_ros2_msgs:msg/Pose.idl
// generated code does not contain a copyright notice

#ifndef OPENPIFPAF_ROS2_MSGS__MSG__DETAIL__POSE__STRUCT_HPP_
#define OPENPIFPAF_ROS2_MSGS__MSG__DETAIL__POSE__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__openpifpaf_ros2_msgs__msg__Pose __attribute__((deprecated))
#else
# define DEPRECATED__openpifpaf_ros2_msgs__msg__Pose __declspec(deprecated)
#endif

namespace openpifpaf_ros2_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Pose_
{
  using Type = Pose_<ContainerAllocator>;

  explicit Pose_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
  }

  explicit Pose_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
    (void)_alloc;
  }

  // field types and members
  using _keypoints_type =
    std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>>;
  _keypoints_type keypoints;

  // setters for named parameter idiom
  Type & set__keypoints(
    const std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>> & _arg)
  {
    this->keypoints = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    openpifpaf_ros2_msgs::msg::Pose_<ContainerAllocator> *;
  using ConstRawPtr =
    const openpifpaf_ros2_msgs::msg::Pose_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<openpifpaf_ros2_msgs::msg::Pose_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<openpifpaf_ros2_msgs::msg::Pose_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      openpifpaf_ros2_msgs::msg::Pose_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<openpifpaf_ros2_msgs::msg::Pose_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      openpifpaf_ros2_msgs::msg::Pose_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<openpifpaf_ros2_msgs::msg::Pose_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<openpifpaf_ros2_msgs::msg::Pose_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<openpifpaf_ros2_msgs::msg::Pose_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__openpifpaf_ros2_msgs__msg__Pose
    std::shared_ptr<openpifpaf_ros2_msgs::msg::Pose_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__openpifpaf_ros2_msgs__msg__Pose
    std::shared_ptr<openpifpaf_ros2_msgs::msg::Pose_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Pose_ & other) const
  {
    if (this->keypoints != other.keypoints) {
      return false;
    }
    return true;
  }
  bool operator!=(const Pose_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Pose_

// alias to use template instance with default allocator
using Pose =
  openpifpaf_ros2_msgs::msg::Pose_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace openpifpaf_ros2_msgs

#endif  // OPENPIFPAF_ROS2_MSGS__MSG__DETAIL__POSE__STRUCT_HPP_
