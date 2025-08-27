import launch
import launch_ros


def generate_launch_description():

    # 乌龟2
    t2 = launch.actions.ExecuteProcess(
        cmd=[
            "ros2 service call /spawn turtlesim_msgs/srv/Spawn \"{x: 1.0, y: 1.0,theta: 1.57, name: toto}\""],
        output="both",
        shell=True,
    )

    client = launch_ros.actions.Node(
        package='cpp07_exercise',
        executable='exer03_client',
        arguments=["1.0", "1.0", "1.57"]
    )

    return launch.LaunchDescription([t2, client])
