# 初回設定(How to use)
## 前提条件
git を入れる

1.`git clone https://github.com/hisa11/PS4-Controller_with_ROS2.git`

2.`cd ./PS4-Controller_with_ROS2`

3.`source /opt/ros/<ros2_distro>/setup.bash`
  
4.`colcon build`

各ライブラリを入れる
`pip install pyserial`(pythonが必要です)
`pip install pyPS4Controller --break-system-packages`
