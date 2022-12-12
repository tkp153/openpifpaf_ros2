import rclpy
from rclpy.node import Node
import cv2
from sensor_msgs.msg import Image,CameraInfo
from cv_bridge import CvBridge
from openpifpaf_ros2_msgs.msg import Poses,Pose
from message_filters import ApproximateTimeSynchronizer,Subscriber
import numpy as np

class rgbd_openpifpaf_ros2_node(Node):
    def __init__(self):
        super().__init__("rgbd_openpifpaf_ros2_node")
        
        self.bridge = CvBridge()
        #RGBD_camera_typeパラメータ宣言
        self.declare_parameter('~rgbd_camera_type','RealSense')
        rgbd_camera_type = self.get_parameter('~rgbd_camera_type').value
        
        if (rgbd_camera_type == 'RealSense'):
            #パラメータ宣言(RealSense)
            in_depthinto_topic = "/camera/aligned_depth_to_color/camera_info"
            in_depth_topic = "/camera/aligned_depth_to_color/image_raw"
            in_pose_topic = "/human_pose"
            out_topic = "human_pose_3d"
            qos_profile = "best"
        elif (rgbd_camera_type == 'Kinect'):
            #パラメータ宣言（Kinect）
            in_depthinto_topic = "/depth_to_rgb/camera_info"
            in_depth_topic = "/depth_to_rgb/image_raw"
            in_pose_topic = "/human_pose"
            out_topic = "human_pose_3d"
            qos_profile = "best"
        else:
            self.get_logger().error("Not supported this camera or out of range")
        
        if(qos_profile == "best"):
            video_qos = rclpy.qos.QoSProfile(depth = 10)
            video_qos.reliability = rclpy.qos.QoSReliabilityPolicy.BEST_EFFORT
        elif(qos_profile == "good"):
            video_qos = rclpy.qos.QoSProfile(depth = 5)
            video_qos.reliability = rclpy.qos.QoSReliabilityPolicy.BEST_EFFORT
        
        sub_depth =Subscriber(self,Image, in_depth_topic,qos_profile =video_qos)
        sub_info = Subscriber(self,CameraInfo, in_depthinto_topic,qos_profile =video_qos)
        sub_poses = Subscriber(self,Poses,in_pose_topic,qos_profile =video_qos)
        
        ts = ApproximateTimeSynchronizer([sub_depth,sub_info,sub_poses],100,0.2)
        ts.registerCallback(self.callback)
        
        self.pub = self.create_publisher(Poses,out_topic,1)

    def callback(self,depth,info,poses):
        #self.get_logger().info("Callback called")
        depth_img = self.bridge.imgmsg_to_cv2(depth)

        poses_3d = []
        for p in poses.poses:
            keypoints = np.asarray(p.keypoints).reshape(-1, 3)  # x, y, conf
            keypoints_pos = np.floor(keypoints).astype(np.int64)

            idx = keypoints_pos[:, 1] * depth_img.shape[1] + keypoints_pos[:, 0]
            flag = idx >= 0
            flag[flag] = idx[flag] < (depth_img.shape[0] * depth_img.shape[1])
            flag[flag] = keypoints[flag, 2] != 0

            depth_values = np.zeros((len(keypoints_pos), 1))
            depth_values[flag] = depth_img.reshape(-1, 1)[idx[flag]]

            xy = (keypoints[:, :2] - np.array([info.k[2], info.k[5]])) / np.array(
                [info.k[0], info.k[4]]
            )
            xy = xy * depth_values

            keypoints_3d = np.hstack((xy, depth_values, keypoints[:, 2:]))
            keypoints_3d[~flag] = np.array([0, 0, 0, 0])

            pose_3d = Pose()
            pose_3d.keypoints = list(keypoints_3d.reshape(-1))
            poses_3d.append(pose_3d)
            
        self.publish(poses.header,poses_3d)

    def publish(self,header,poses_3d):
        msg = Poses()
        msg.header.stamp = header.stamp
        msg.poses = []

        for p in poses_3d:
            pmsg = Pose()
            pmsg.keypoints = p.keypoints
            msg.poses.append(pmsg)
        
        
        self.pub.publish(msg)
        #print(msg.poses)
        
        
        
        
def main():
    print("Starting...")
    rclpy.init()
    #　ノード初期化
    node =rgbd_openpifpaf_ros2_node()
    # 処理を実行して、ノードが終了するまでブロックする。
    rclpy.spin(node)
    #初期化コンテキストを終了する。
    rclpy.shutdown()
    
if __name__ == "__main__":
    main()