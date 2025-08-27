from launch import LaunchDescription
from launch_ros.actions import Node
from launch.actions import ExecuteProcess, RegisterEventHandler
from launch.event_handlers import OnProcessExit


def generate_launch_description():

    # 乌龟1 - 蓝色背景
    t1 = Node(
        package='turtlesim',
        executable='turtlesim_node',
        parameters=[{'background_r': 0,
                     'background_g': 0,
                     'background_b': 255}
                    ]
    )

    # 乌龟2 - 绿色背景
    t2 = Node(
        package='turtlesim',
        executable='turtlesim_node',
        namespace="t2",
        parameters=[{'background_r': 0,
                     'background_g': 255,
                     'background_b': 0}
                    ]
    )

    # 王八掉头指令
    theta_t2 = ExecuteProcess(
        cmd=["ros2 action send_goal /t2/turtle1/rotate_absolute turtlesim_msgs/action/RotateAbsolute \"theta: 3.14\""],
        output="both",
        shell=True,
    )

    exec01 = Node(
        package="cpp07_exercise",
        executable="exer01_pub_sub"
    )

    # 注册信号事件
    reg_event_exer01 = RegisterEventHandler(
        event_handler=OnProcessExit(
            target_action=theta_t2,
            on_exit=exec01
        ),
    )

    return LaunchDescription([t1, t2, theta_t2, reg_event_exer01])
