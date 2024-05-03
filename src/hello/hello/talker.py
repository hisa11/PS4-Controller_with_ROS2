import rclpy
from hello_interfaces.msg import MyString
from rclpy.node import Node
from pyPS4Controller.controller import Controller

class MyController(Controller, Node):
    def __init__(self, **kwargs):
        Controller.__init__(self, **kwargs)
        Node.__init__(self, 'ps4_controller_node')
        self.publisher_ = self.create_publisher(MyString, 'chatter', 1)
        self.timer = self.create_timer(0.01, self.timer_callback)  # 0.01秒ごとにtimer_callbackを呼び出す
        self.last_R3_x = 0
        self.last_R3_y = 0

    def timer_callback(self):
        # コントローラーのイベントをリッスンするためのポーリング
        self.listen(timeout=5)

    # コントローラーのイベントハンドラー
    def on_x_press(self):
        msg = MyString()
        msg.data = "cross"
        self.publisher_.publish(msg)
        self.get_logger().info("Published: " + msg.data)
    def on_x_release(self):
        msg = MyString()
        msg.data = "batuu"
        self.publisher_.publish(msg)
        self.get_logger().info("Published: " + msg.data)

    # ... 他のイベントメソッドも同様に含めて修正 ...

    def on_R3_left(self, value):
        if -3000 < value < 3000:
            value = 0
        if abs(value - self.last_R3_x) >= 1000:
            self.last_R3_x = value
            msg = MyString()
            msg.data = f"R3_x: {value}"
            self.publisher_.publish(msg)
            self.get_logger().info("Published: R3_x: " + str(value))

    def on_R3_right(self, value):
        if -3000 < value < 3000:
            value = 0
        if abs(value - self.last_R3_x) >= 1000:
            self.last_R3_x = value
            msg = MyString()
            msg.data = f"R3_x: {value}"
            self.publisher_.publish(msg)
            self.get_logger().info("Published: R3_x: " + str(value))

    def on_R3_up(self, value):
        if -3000 < value < 3000:
            value = 0
        if abs(value - self.last_R3_y) >= 1000:
            self.last_R3_y = value
            msg = MyString()
            msg.data = f"R3_y: {value}"
            self.publisher_.publish(msg)
            self.get_logger().info("Published: R3_y: " + str(value))

    def on_R3_down(self, value):
        if -3000 < value < 3000:
            value = 0
        if abs(value - self.last_R3_y) >= 1000:
            self.last_R3_y = value
            msg = MyString()
            msg.data = f"R3_y: {value}"
            self.publisher_.publish(msg)
            self.get_logger().info("Published: R3_y: " + str(value))

def main(args=None):
    rclpy.init(args=args)
    controller = MyController(interface="/dev/input/js0", connecting_using_ds4drv=False)
    rclpy.spin(controller)  # コントローラーとROS2ノードを同時に実行

    # コントローラが停止したら、ノードを破棄してROS通信をシャットダウンする
    controller.destroy_node()
    rclpy.shutdown()

if __name__ == "__main__":
    main()