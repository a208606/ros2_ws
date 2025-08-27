import launch
import launch_ros



def generate_launch_description():

    # 乌龟
    t1 = launch_ros.actions.Node(
        package='turtlesim',
        executable='turtlesim_node'
    )

    # 启动服务
    start = launch_ros.actions.Node(
        package="cpp07_exercise",
        executable="exer02_server"
    )

    return launch.LaunchDescription([t1, start])
