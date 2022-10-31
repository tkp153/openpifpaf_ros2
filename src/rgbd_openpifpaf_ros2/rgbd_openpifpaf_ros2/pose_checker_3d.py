from unittest import result
import rclpy
from rclpy.node import Node
import numpy as np
from openpifpaf_ros2_msgs import Poses,Pose3DArray,Pose3D

class pose_checker_3d(Node):
    def __init__(self):
        super().__init__("pose_checker_3d")
        print("pose_checker_3d")
        self.sub = self.create_subscription(Poses,"/human_pose_3d",self.callback,1)
        self.pub = self.create_publisher(Pose3DArray,"pose_checker_3d",10)
        
        
    def callback(self,pose):
        ms = Pose3DArray()
        
        for person in pose.poses:
            
            keypoints = np.array(person.keypoints).reshape(-1,4)
            keypoints = keypoints[keypoints[:3] != 0]
            num_keypoints = len(keypoints)
            
            x_sum_list= []
            y_sum_list= []
            z_sum_list= []
            
            keypoints_count = 0
        for k in keypoints:
            ds = Pose3D()
            float_value = np.array(k[:3] / 100.0,dtype=float)
            
            x_pos,y_pos,z_pos = float_value
            #重心のポイント判別
            if( keypoints_count == 5 or keypoints_count == 6 or keypoints_count == 11 or keypoints_count == 12):
                
                x_sum_list.append(x_pos)
                y_sum_list.append(y_pos)
                z_sum_list.append(z_pos)
                
            keypoints_count += 1
            
            #重心計算処理条件分岐
            if(keypoints_count == num_keypoints - 1):
                #重心計算関数実行
                Result_Of_Center_Gravity = self.CenterOfGravity(x_sum_list, y_sum_list, z_sum_list)
                
                ds.pos_x ,ds.pos_y ,ds.pos_z = Result_Of_Center_Gravity
                
                #人の向き計算関数実行
                self.Person_arrow(self, x_sum_list, y_sum_list, z_sum_list)
                
    #重心計算関数
    def CenterOfGravity(self,x_sum,y_sum,z_sum):
        X_data = x_sum
        Y_data = y_sum
        Z_data = z_sum 
        
        #キーポイント検索（キーポイント未検出があるかどうか）
        # 含まれていなかったらTRUEを返す。
        X_data_result = 0.0 not in X_data
        Y_data_result = 0.0 not in Y_data
        Z_data_result = 0.0 not in Z_data
        
        if(X_data_result == True and Y_data_result == True and Z_data_result == True):
            
            #重心計算
            X_Center = X_data.sum() / 4 
            Y_Center = Y_data.sum() / 4
            Z_Center = Z_data.sum() / 4
            
            CenterOfGravity = np.array([X_Center, Y_Center, Z_Center])
            
            return CenterOfGravity
            
    #向き計算関数実行
    def Person_arrow(self,x_info,y_info,z_info):
        x_data = x_info
        y_data = y_info
        z_data = z_info
        
            