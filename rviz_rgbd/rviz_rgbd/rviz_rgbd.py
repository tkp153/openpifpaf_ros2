import rclpy
from rclpy.node import Node
import os
import cv2
import numpy as np

from openpifpaf_ros2_msgs.msg import OpenpifpafPoses
from geometry_msgs.msg import Quaternion,Vector3
from visualization_msgs.msg import MarkerArray,Marker
import time
import open3d as o3d

class MyCheck(Node):
    def __init__(self):
        print("Starting")
        
        #self.declare_parameter('~in_topic',"/human_pose_3d")
        
        #in_topic = self.get_parameter("~in_topic").value
        
        self.sub = self.create_subscription(OpenpifpafPoses,"/human_pose_3d",self.callback_x,1)
        self.pub = self.create_publisher(MarkerArray,"/pose_vis",10)
        
        
        
    def callback_x(self,pose):
        ms = MarkerArray()
        
        i = 0
        for person in pose.poses:
            keypoints = np.array(person.keypoints).reshape(-1, 4)
            keypoints = keypoints[keypoints[:, 3] != 0]

            for k in keypoints:
                m = Marker()
                m.header.stamp = pose.header.stamp
                m.header.frame_id = "camera_color_optical_frame"
                m.id = i
                i += 1

                m.type = Marker.SPHERE
                m.pose.position.x, m.pose.position.y, m.pose.position.z = k[:3] / 100.0
                m.pose.orientation = Quaternion(0, 0, 0, 1)
                m.color.r, m.color.g, m.color.r, m.color.a = [0, 1, 0, 1]
                m.scale = Vector3(0.1, 0.1, 0.1)
                print(m)
                ms.markers.append(m)

        self.pub.publish(ms)

        
            
        
def main():
    rclpy.init()
    
    node = MyCheck()
    
    rclpy.spin(node)
    
    rclpy.shutdown()
    
if __name__ == "__main__":
    main()