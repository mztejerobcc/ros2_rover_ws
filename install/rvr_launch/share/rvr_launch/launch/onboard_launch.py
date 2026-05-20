from launch import LaunchDescription
from launch_ros.actions import Node


def generate_launch_description():

    nodes = [
        Node(
            package = "onboard_pkg",
            executable = "cmd_vel_sub",
            name = "rc_subscriber_node"
        ),
        Node(
            package = "onboard_pkg",
            executable = "rvr_data_pub",
            name = "rover_publisher_node"
        )
    ]

    ld = LaunchDescription(nodes)

    return ld