import rclpy
from rclpy.node import Node
import cv2
import sys
from sensor_msgs.msg import Image
from cv_bridge import CvBridge
from openpifpaf.predictor import Predictor
#sys.path.append('../openpifpaf_ros2_msgs/msg')
from openpifpaf_ros2_msgs.msg import Poses,Pose

class OpenPifPaf_ros2_node(Node):
    def __init__(self):
        super().__init__("openpifpaf_ros2_node")
        
        #OpenPifPafのモジュール呼び出し
        self.predictor = Predictor()
        #RGBD_camera_typeパラメータ宣言
        self.declare_parameter('~rgbd_camera_type',"RealSense")
        rgbd_camera_type = self.get_parameter('~rgbd_camera_type').value
        
        if(rgbd_camera_type == 'RealSense'):
            #パラメータ宣言(RealSense)
            self.declare_parameter('~in_topic',"/camera/color/image_raw")
            self.declare_parameter('~out_topic',"human_pose")
            self.declare_parameter('~scale','1.0')
            self.declare_parameter('~qos_profile',"best")
        elif(rgbd_camera_type =='Kinect'):
            #パラメータ宣言（Kinect）
            self.declare_parameter('~in_topic',"/rgb/image_raw")
            self.declare_parameter('~out_topic',"human_pose")
            self.declare_parameter('~scale','1.0')
            self.declare_parameter('~qos_profile',"best")
        
        #パラメータ読み込み
        in_topic =self.get_parameter('~in_topic').value
        out_topic =self.get_parameter('~out_topic').value
        scale = self.get_parameter('~scale').value
        qos_profile = self.get_parameter('~qos_profile').value
        
        
        if(qos_profile == "best"):
            video_qos = rclpy.qos.QoSProfile(depth = 10)
            video_qos.reliability = rclpy.qos.QoSReliabilityPolicy.BEST_EFFORT
        elif(qos_profile == "good"):
            video_qos = rclpy.qos.QoSProfile(depth = 5)
            video_qos.reliability = rclpy.qos.QoSReliabilityPolicy.BEST_EFFORT
            
        #サブスクライバー生成
        self.subscription = self.create_subscription(Image,in_topic,self.callback,video_qos)
        
        #パブリッシャー生成
        self.publisher = self.create_publisher(Poses,out_topic,video_qos)
        
        self.bridge =CvBridge()
        self.scale = scale
    
    # callback    
    def callback(self,data):
        
        #self.get_logger().info("Callback received")
        
        #print ("NOWis"+self.scale)
        #ROS2 のメッセージデータからOpenCVのデータ（カラー変換
        #rgb_img = self.bridge.imgmsg_to_cv2(data,"8UC3")
        rgb_img = self.bridge.imgmsg_to_cv2(data,"rgb8")
        
        #もしスケールが1倍以下の場合OpenCVのスケール縮小処理を実施
        if float(self.scale) < 1.0:
            rgb_img = cv2.resize(rgb_img, None, fx=self.scale, fy=self.scale)
        pred, _, meta = self.predictor.numpy_image(rgb_img)
        
        poses = []
        
        for p in pred:
            pose = p.json_data()
        
            
        #もしスケールが1倍以下の場合OpenCVのスケール縮小処理を実施    
            if float(self.scale) < 1.0:
                d = p.data.reshape((-1, 3))
                d[d[:, 2] != 0, 0:2] /= self.scale
                d = d.reshape(-1)
                pose['keypoints'] = list(d)
            
            poses.append(pose)

        self.publish(data.header,poses)
    
    def publish(self, header, poses):
        msg = Poses()
        msg.header.stamp = header.stamp
        msg.poses = []
        
        for p in poses:
            pmsg = Pose()
            pmsg.keypoints = p['keypoints']
            msg.poses.append(pmsg)

        #self.get_logger().info(msg.header.stamp)
        #self.get_logger().info(msg.poses)
        self.publisher.publish(msg)


def main(args = None):
    print("started")
    #　ノード初期化
    rclpy.init(args=args)
    
    node =OpenPifPaf_ros2_node()
    # 処理を実行して、ノードが終了するまでブロックする。
    rclpy.spin(node)
    #初期化コンテキストを終了する。
    rclpy.shutdown()
    
if __name__ == '__main__':
    main()