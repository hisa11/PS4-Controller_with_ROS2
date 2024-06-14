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

    def timer_callback(self):
        # コントローラーのイベントをリッスンするためのポーリング
        self.listen(timeout=5)

    # コントローラーのイベントハンドラー
    def on_up_arrow_press(self):
        msg = MyString()
        msg.data = "up"
        self.publisher_.publish(msg)
        self.get_logger().info("Published: " + msg.data)
    def on_down_release(self):
        msg = MyString()
        msg.data = "un_up"
        self.publisher_.publish(msg)
        self.get_logger().info("Published: " + msg.data)

    # ... 他のイベントメソッドも同様に含めて修正 ...
    def on_down_arrow_press(self):
        msg = MyString()
        msg.data = "down"
        self.publisher_.publish(msg)
        self.get_logger().info("Published: " + msg.data)
    def on_down_arrow_release(self):
        msg = MyString()
        msg.data = "un_down"
        self.publisher_.publish(msg)
        self.get_logger().info("Published: " + msg.data)
    
    def on_triangle_press(self):
        msg = MyString()
        msg.data = "triangle"
        self.publisher_.publish(msg)
        self.get_logger().info("Published: " + msg.data)
    def on_triangle_release(self):
        msg = MyString()
        msg.data = "un_triangle"
        self.publisher_.publish(msg)
        self.get_logger().info("Published: " + msg.data)

    def on_x_press(self):
        msg = MyString()
        msg.data = "x"
        self.publisher_.publish(msg)
        self.get_logger().info("Published: " + msg.data)
    def on_x_release(self): 
        msg = MyString()
        msg.data = "un_x"
        self.publisher_.publish(msg)
        self.get_logger().info("Published: " + msg.data)

def main(args=None):
    rclpy.init(args=args)
    controller = MyController(interface="/dev/input/js0", connecting_using_ds4drv=False)
    rclpy.spin(controller)  # コントローラーとROS2ノードを同時に実行


if __name__ == "__main__":
    main()