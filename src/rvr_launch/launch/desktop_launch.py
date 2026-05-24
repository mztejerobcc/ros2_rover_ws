from launch import LaunchDescription
from launch_ros.actions import Node


def generate_launch_description():

    nodes = [
        Node(
            package = "controller",
            executable = "rc_pub",
            name = "rc_publisher_node"
        ),
        # Node(
        #     package = "data_processor",
        #     executable = "rvr_data_sub",
        #     name = "rover_subscriber_node"
        # ),
        Node(
            package = "data_processor",
            executable = "data_main_node",
            name = "data_node"
        ),
        Node(
            package='foxglove_bridge',
            executable='foxglove_bridge',
            name='foxglove_bridge',
            parameters=[
                {'port': 8765}
            ],
            output='screen'
        )
    ]

    ld = LaunchDescription(nodes)

    return ld