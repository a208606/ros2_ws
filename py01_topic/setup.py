from setuptools import find_packages, setup

package_name = "py01_topic"

setup(
    name=package_name,
    version="0.0.0",
    packages=find_packages(exclude=["test"]),
    data_files=[
        ("share/ament_index/resource_index/packages", ["resource/" + package_name]),
        ("share/" + package_name, ["package.xml"]),
    ],
    install_requires=["setuptools"],
    zip_safe=True,
    maintainer="robot",
    maintainer_email="robot@todo.todo",
    description="TODO: Package description",
    license="TODO: License declaration",
    extras_require={
        "test": [
            "pytest",
        ],
    },
    entry_points={
        "console_scripts": [
            "py01_talker = py01_topic.py01_talker:main",
            "py01_listener = py01_topic.py01_listener:main",
            "py02_talker = py01_topic.py02_talker:main",
            "py02_listener = py01_topic.py02_listener:main",
        ],
    },
)
