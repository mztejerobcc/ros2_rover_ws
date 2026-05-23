cmake_minimum_required(VERSION 3.8)
project(data_processor)

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
find_package(geometry_msgs REQUIRED)
find_package(Eigen3 REQUIRED)
find_package(nav_msgs REQUIRED)

add_executable(data_main_node src/data_main.cpp src/rvr_data_sub_lib.cpp src/data_pub_lib.cpp src/data_processor_lib.cpp)
ament_target_dependencies(data_main_node rclcpp rvr_msgs geometry_msgs nav_msgs)
target_link_libraries(data_main_node Eigen3::Eigen)
target_include_directories(data_main_node PUBLIC include)

# add_executable(rvr_data_sub src/rvr_data_sub_lib.cpp src/rvr_data_sub_main.cpp src/data_processor_lib.cpp)
# ament_target_dependencies(rvr_data_sub rclcpp rvr_msgs)
# target_link_libraries(rvr_data_sub Eigen3::Eigen)
# target_include_directories(rvr_data_sub PUBLIC include)

# add_executable(pos_data_pub src/data_pub_lib.cpp src/data_pub_main.cpp src/data_processor_lib.cpp)
# ament_target_dependencies(pos_data_pub rclcpp rvr_msgs)
# target_link_libraries(pos_data_pub Eigen3::Eigen)
# target_include_directories(pos_data_pub PUBLIC include)

# target_include_directories(pos_data_sub PUBLIC include ${EIGEN3_INCLUDE_DIR})

install(TARGETS
  data_main_node
  # rvr_data_sub
  # pos_data_pub
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
