cmake_minimum_required(VERSION 3.8)
project(controller)

if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-Wall -Wextra -Wpedantic)
endif()

# find dependencies
find_package(ament_cmake REQUIRED)
# uncomment the following section in order to fill in
# further dependencies manually.
# find_package(<dependency> REQUIRED)
find_package(rclcpp REQUIRED)
find_package(rvr_msgs REQUIRED)

add_executable(rc_pub
                src/rc_pub_lib.cpp
                src/rc_pub_main.cpp
                src/usb_interface_lib.cpp)
ament_target_dependencies(rc_pub rclcpp rvr_msgs)
target_include_directories(rc_pub PUBLIC include)

add_library(usb_interface_lib
  src/usb_interface_lib.cpp
)
target_include_directories(usb_interface_lib PUBLIC include)

add_executable(controller_test test/controller_test.cpp)
target_link_libraries(controller_test usb_interface_lib)
add_test(NAME ControllerTest COMMAND controller_test)

install(TARGETS
  rc_pub
  DESTINATION lib/${PROJECT_NAME})

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
