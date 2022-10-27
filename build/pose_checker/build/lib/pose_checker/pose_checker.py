from tkinter import W
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
        video_qos = rclpy.qos.QoSProfile(depth = 10)
        video_qos.reliability  = rclpy.qos.QoSReliabilityPolicy.BEST_EFFORT
        
        #パブリッシャー生成
        self.sub = self.create_subscription(Poses,"/human_pose",self.callback,qos_profile = video_qos)
        
        self.pub = self.create_publisher(Poses,"pose_status",1)
        
        
    def callback(self,poses):
        
        for p in poses.poses:
            #骨格検知した情報を計算しやすいように変換
            keypoints =  np.asarray(p.keypoints).reshape(-1,3)
            keypoints_pos = np.floor(keypoints).astype(np.int64)
            
            # 信頼度の情報を削除をおこなう処理を実施（x,y座標）
            keypoints_pos_2d = np.delete(keypoints_pos,2,1)
            
            
            #k_numは、keypoints_numberの略称
            k_num = 0
            l_num = 0
            r_num = 0
            L_Raise_Hand = False
            R_Raise_Hand = False
            '''
            memo:
            openpose のモデル
            右肘がID8,右肩がID6,右腰がID12である。
            左肘がID7,左肩がID5,左腰がID11である
            '''
            for num in keypoints_pos_2d:
                float_value = np.array(num[:2],dtype=float) 
            
                x_pos,y_pos = float_value
                print(x_pos,y_pos)
            
                #左の動き処理
                if(k_num == 5 or k_num == 7 or k_num == 7 or k_num == 11):
                    if(k_num == 5):
                        Point_O = np.numpy([x_pos,y_pos])
                        r_num += 1
                    if(k_num == 7):
                        Point_A = np.array([x_pos,y_pos])
                        r_num += 1
                    if(k_num == 11):
                        Point_O_d = Point_O - np.array([0, 10])
                        Point_B = Point_O_d
                        r_num += 1
                    if(r_num == 2):
                        print("Right")
                        L_Raise_Hand = self.deg_checker(Point_A, Point_B, Point_O)
            
                #右の動き処理
                if(k_num == 6 or k_num == 8 or k_num == 12 or k_num == 11):
                    if(k_num == 6):
                        Point_X = np.numpy([x_pos,y_pos])
                        l_num += 1
                    if(k_num == 8):
                        Point_C = np.array([x_pos,y_pos])
                        l_num += 1
                    if(k_num == 12):
                        Point_D = Point_X - np.array([0, 10])
                        l_num += 1
                    if(l_num == 2):
                        R_Raise_Hand = self.deg_checker(Point_C,Point_D, Point_X)
                        print("Left")
            #手の上げたのか？
            if(L_Raise_Hand == True or R_Raise_Hand == True ) :
                print("You are raising hand")  
            
    def deg_checker(self,Point_1,Point_2,Origin):
        
        Vector_1 = Point_1 - Origin
        Vector_2 = Point_2 - Origin
        Length_V1 = np.linalg.norm(Vector_1)
        Length_V2 = np.linalg.norm(Vector_2)
        
        inner = np.inner(Vector_1,Vector_2)
        cos_theta = inner /(Length_V1 * Length_V2)
        theta = math.degrees(math.atan(cos_theta))
        print(theta)        
            
def main():
    
    rclpy.init()
    
    node = pose_checker()
    
    rclpy.spin(node)
    
    rclpy.shutdown()
    
if __name__ == "__main__":
    main()