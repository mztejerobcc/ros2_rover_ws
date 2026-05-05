# ros2_rover_ws
ROS2 C++ Workspace for Rover

Current working features:
 - USB interface on desktop for reading and parsing RC data
 - USB interface on Raspberry Pi for reading and parsing onboard microcontroller
 - Desktop Node for publishing RC data to command velocities topic
 - Raspberry Pi Node subscribed to command velocities topic
 - Raspberry Pi Node publishing to rover data topic
