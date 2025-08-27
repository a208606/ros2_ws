import launch


from ament_index_python.packages import get_package_share_directory
from launch import LaunchDescription
from launch.actions import DeclareLaunchArgument
from launch.actions import IncludeLaunchDescription
from launch.launch_description_sources import PythonLaunchDescriptionSource
from launch.substitutions import LaunchConfiguration
from launch_ros.actions import Node


def generate_launch_description():
    return LaunchDescription([
        # 设置 空间名称和节点名
        Node(
            package='turtlesim',
            executable='turtlesim_node',
            namespace="ns1",
            name='t1',
        ),

        # 修改话题名称
        Node(
            package='turtlesim',
            executable='turtlesim_node',
            remappings=[("/ns1/t1", "ts1")],
        ),
    ])
