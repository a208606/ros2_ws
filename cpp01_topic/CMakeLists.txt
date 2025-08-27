cmake_minimum_required(VERSION 3.20)
project(cpp01_topic)

if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-Wall -Wextra -Wpedantic)
endif()



# find dependencies
find_package(ament_cmake REQUIRED)
find_package(rclcpp REQUIRED)
find_package(std_msgs REQUIRED)
find_package(base_interfase REQUIRED)

add_executable(cpp01_talker src/cpp01_talker.cpp)
add_executable(cpp02_listener src/cpp02_listener.cpp)

add_executable(cpp03_talker src/cpp03_talker.cpp)
add_executable(cpp04_listener src/cpp04_listener.cpp)


target_include_directories(cpp01_talker PUBLIC
  $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
  $<INSTALL_INTERFACE:include/${PROJECT_NAME}>)
target_compile_features(cpp01_talker PUBLIC c_std_99 cxx_std_17) # Require C99 and C++17

target_link_libraries(
  cpp01_talker
  ${rclcpp_TARGETS}
  ${std_msgs_TARGETS}
  ${base_interfase_TARGETS}
)

target_link_libraries(
  cpp02_listener
  ${rclcpp_TARGETS}
  ${std_msgs_TARGETS}
  ${base_interfase_TARGETS}
)



target_link_libraries(
  cpp03_talker
  ${rclcpp_TARGETS}
  ${std_msgs_TARGETS}
  ${base_interfase_TARGETS}
)

target_link_libraries(
  cpp04_listener
  ${rclcpp_TARGETS}
  ${std_msgs_TARGETS}
  ${base_interfase_TARGETS}
)



install(TARGETS
  cpp01_talker
  cpp02_listener
  cpp03_talker
  cpp04_listener
  DESTINATION lib/${PROJECT_NAME}
)

if(BUILD_TESTING) #include "std_msgs/msg/string.hpp"
  find_package(ament_lint_auto REQUIRED)
  # the following line skips the linter which checks for copyrights
  # comment the line when a copyright and license is added to all source files
  set(ament_cmake_copyright_FOUND TRUE)
  # the following line skips cpplint (only works in a git repo)
  # comment the line when this package is in a git repo and when
  # a copyright and license is added to all source files
  set(ament_cmake_cpplint_FOUND TRUE)
  ament_lint_auto_find_test_dependencies()
endif()

ament_package()
