from launch import LaunchDescription
from launch_ros.actions import Node


def generate_launch_description():

    nodes = [
        Node(
            package = "controller",
            executable = "rc_pub",
            name = "rc_publisher_node"
        )
        # Node(
        #     package = "onboard_pkg",
        #     executable = "rvr_data_pub",
        #     name = "rover_publisher_node"
        # )
    ]

    ld = LaunchDescription(nodes)

    return ld