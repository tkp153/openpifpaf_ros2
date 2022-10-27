import rclpy
from rclpy.node import Node
import numpy as np
from openpifpaf_ros2_msgs.msg import Poses,Pose
import time
import math

class pose_checker(Node):
    def __init__(self):
        super().__init__("pose_checker")
        print("pose_checker created ")
        
        #QOSProfile 関連設定
        video_qos = rclpy.qos.QOSProfile(depth = 10)
        video_qos.reliability = rclpy.qos.QosReliabilityPolicy.BEST_EFFORT
        
        #パブリッシャー生成
        self.sub = self.create_subscription(Poses,"/human_pose",self.callback,qos_profile = video_qos)
        
        self.pub = self.create_publisher(Poses,"pose_status",1)
        
    def callback(self,poses):
        
        for p in poses.pose:
            keypoints =  np.asarray(p.keypoints).reshape(-1,3)
            keypoints_pos = np.floor(keypoints).astype(np.int64)
            
            print(keypoints_pos)