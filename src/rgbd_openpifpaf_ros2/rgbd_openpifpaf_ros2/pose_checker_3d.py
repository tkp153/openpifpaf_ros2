from unittest import result
import rclpy
from rclpy.node import Node
import numpy as np
from openpifpaf_ros2_msgs.msg import Poses,Pose3DArray,Pose3D

class pose_checker_3d(Node):
    def __init__(self):
        super().__init__("pose_checker_3d")
        print("pose_checker_3d")
        video_qos = rclpy.qos.QoSProfile(depth = 10)
        video_qos.reliability = rclpy.qos.QoSReliabilityPolicy.BEST_EFFORT
        self.sub = self.create_subscription(Poses,"/human_pose_3d",self.callback,qos_profile =video_qos)
        self.pub = self.create_publisher(Pose3DArray,"pose_checker_3d_A",10)
        
        self.human_data = [[],[]]
        
        
    def callback(self,pose):
        ms = Pose3DArray()
        
        for person in pose.poses:
            
            keypoints = np.array(person.keypoints).reshape(-1,4)
            keypoints = keypoints[keypoints[:,3] != 0]
            
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
                
            
                #重心計算処理条件分岐
                if(keypoints_count == 15):
                    #重心計算関数実行
                    Result_Of_Center_Gravity = self.CenterOfGravity(x_sum_list, y_sum_list, z_sum_list)
                
                    ds.pos_x ,ds.pos_y ,ds.pos_z = Result_Of_Center_Gravity
                    #print(ds.pos_x ,ds.pos_y ,ds.pos_z)
                
                    #人の向き計算関数実行
                    arrow=self.Person_arrow(x_sum_list, y_sum_list, z_sum_list,Result_Of_Center_Gravity)
                    ds.dir_x ,ds.dir_y ,ds.dir_z = arrow
                    #print(ds.dir_x ,ds.dir_y ,ds.dir_z)
                
                    ms.poses3d.append(ds)
            
                keypoints_count += 1
                
        self.pub.publish(ms)
        
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
            X_Center = sum(X_data) / 4 
            Y_Center = sum(Y_data) / 4
            Z_Center = sum(Z_data) / 4
            
            CenterOfGravity = np.array([X_Center, Y_Center, Z_Center])
            
            return CenterOfGravity
            
    #向き計算関数
    def Person_arrow(self,x_info,y_info,z_info,center):
        x_data = x_info
        y_data = y_info
        z_data = z_info
        
        print(x_data)
        
        #キーポイント検索（キーポイント未検出があるかどうか）
        # 含まれていなかったらTRUEを返す。
        X_data_result = 0.0 not in x_data
        Y_data_result = 0.0 not in y_data
        Z_data_result = 0.0 not in z_data  

        if (X_data_result == True and Y_data_result == True and Z_data_result == True):
            #keypoints 5
            Point_A = np.array([x_data[0],y_data[0],z_data[0]])
            #keypoints 6
            Point_B = np.array([x_data[1],y_data[1],z_data[1]])
            # CenterOfGravity
            Point_O = center
            
            Vector_A = Point_A - Point_O
            Vector_B = Point_B - Point_O
            
            Vector_Cross = np.cross(Vector_B,Vector_A)
            arrow_data = Vector_Cross.T
            return arrow_data
    
    #人速度計算関数
    def Person_velocity(self,center):
        data = center
            
def main():
    rclpy.init()
    
    node = pose_checker_3d()
    
    rclpy.spin(node)
    
    rclpy.shutdown()
    
if __name__ == "__main__":
    main()            