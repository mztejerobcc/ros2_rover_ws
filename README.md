# ros2_rover_ws
ROS2 C++ Workspace for Rover

Current working features:
 - USB interface on desktop for reading and parsing RC data
 - USB interface on Raspberry Pi for reading and parsing onboard microcontroller
 - Desktop Node for publishing RC data to command velocities topic
 - Raspberry Pi Node subscribed to command velocities topic
 - Raspberry Pi Node publishing to rover data topic
 - Data Processor Node subscribed to Raspbery Pi rover data topic and estimating the rover's x and y position as well as heading angle.
 - Data Processor Node publishing rover state estimates to two marker topics ```imu_odom``` and ```enc_odom```
 - Launch files for onboard nodes and desktop nodes (including a node for Foxglove websocket)

Issues:
 - Visualization of yaw currently rotates rover around map center point rather than around the rover geometric center.
 - Significant latency when including visualization.
