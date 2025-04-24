cmake_minimum_required(VERSION 3.8)
project(p2_ej2)

if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-Wall -Wextra -Wpedantic)
endif()

if(NOT CMAKE_CXX_STANDARD)
  set(CMAKE_CXX_STANDARD 14)
endif()

# 📦 Dependencias
find_package(ament_cmake REQUIRED)
find_package(rclcpp REQUIRED)
find_package(moveit_ros_planning_interface REQUIRED)
find_package(geometry_msgs REQUIRED)
find_package(moveit_core REQUIRED)
find_package(moveit_visual_tools REQUIRED)
find_package(tf2_geometry_msgs REQUIRED)
find_package(Eigen3 REQUIRED)

# 🧩 Ejecutable
add_executable(panda_ik_menu src/panda_ik_menu.cpp)

ament_target_dependencies(panda_ik_menu
  rclcpp
  moveit_ros_planning_interface
  geometry_msgs
  moveit_core
  moveit_visual_tools
  tf2_geometry_msgs
)

install(TARGETS panda_ik_menu
  DESTINATION lib/${PROJECT_NAME}
)

ament_package()
