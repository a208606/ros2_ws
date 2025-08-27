cmake_minimum_required(VERSION 3.20)
project(cpp02_sevice)

if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-Wall -Wextra -Wpedantic)
endif()

# 2. 生成编译数据库（核心配置）
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)


# find dependencies
find_package(ament_cmake REQUIRED)
find_package(rclcpp REQUIRED)
find_package(std_msgs REQUIRED)
find_package(base_interfase REQUIRED)

add_executable(cpp02_server src/cpp02_server.cpp)
add_executable(cpp02_client src/cpp02_client.cpp)


target_include_directories(cpp02_server PUBLIC
  $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
  $<INSTALL_INTERFACE:include/${PROJECT_NAME}>)
target_compile_features(cpp02_server PUBLIC c_std_99 cxx_std_17) # Require C99 and C++17

target_link_libraries(
  cpp02_server
  ${rclcpp_TARGETS}
  ${std_msgs_TARGETS}
  ${base_interfase_TARGETS}
)


target_link_libraries(
  cpp02_client
  ${rclcpp_TARGETS}
  ${std_msgs_TARGETS}
  ${base_interfase_TARGETS}
)

install(TARGETS
  cpp02_server
  cpp02_client
  DESTINATION lib/${PROJECT_NAME}
)

if(BUILD_TESTING)
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
