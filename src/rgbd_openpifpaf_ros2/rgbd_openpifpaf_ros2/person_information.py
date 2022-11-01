import rclpy
from rclpy.node import Node
import numpy as np
from openpifpaf_ros2_msgs.msg import Poses,Pose3DArray,Pose3D
import time
import math

class person_information(Node):
    def __init__(self):
        super().__init__("person_information")
        print("person_information initialized")
        
        video_qos = rclpy.qos.QoSProfile(depth = 10)
        video_qos.reliability = rclpy.qos.QoSReliabilityPolicy.BEST_EFFORT
        
        self.sub = self.create_subscription(Poses,"/human_pose_3d",self.callback,1)
        
        self.pub_1 = self.create_publisher(Pose3DArray,"person_information",10)
        
    def callback(self,pose):
        ms = Pose3DArray()
        
        for person in pose.poses:
            
            keypoints = np.array(person.keypoints).reshape(-1,4)
            keypoints = keypoints[keypoints[:, 3] != 0]
            num_keypoints = len(keypoints)
            
            x_sum = 0
            y_sum = 0
            z_sum = 0
            k_num = 0
            point_count = 0
            
            for k in keypoints:
                
                ds = Pose3D() # centerofgravity message type
                float_value = np.array(k[:3] / 100.0,dtype=float)
                if(k_num == 5 or k_num == 6 or k_num == 11 or k_num == 12):
                    #座標抽出
                    x_pos,y_pos,z_pos = float_value
                    #print("appending.....")
                    x_sum += x_pos
                    y_sum += y_pos
                    z_sum += z_pos
                    point_count += 1
                    if(k_num == 5):
                        Point_B_numpy = np.array([x_pos,y_pos,z_pos])
                    if(k_num == 6):
                        #A点座標(Numpy version)
                        Point_A_numpy = np.array([x_pos,y_pos,z_pos])
                    
                    
                    
                elif(k_num == num_keypoints - 1 and point_count == 4 ): 
                    #重心計算(標準用)
                    ds.pos_x = x_sum / 4
                    ds.pos_y = y_sum / 4
                    ds.pos_z = z_sum / 4
                    
                    #角度計算関数
                    #ds.theta = self.person_rotation(ds.pos_x,ds.pos_y,ds.pos_z,Point_A_numpy)
                    
                    #向き情報関数
                    ds.dir_x,ds.dir_y,ds.dir_z = self.person_arrow(ds.pos_x,ds.pos_y,ds.pos_z,Point_A_numpy,Point_B_numpy)
                    ms.poses3d.append(ds)
                    
                    
                
                k_num += 1
                    
                
        self.pub_1.publish(ms)
        
    def person_arrow(self,  pos_x, pos_y, pos_z, point_a,point_b):
        Point_O = np.array([pos_x, pos_y, pos_z])
        Point_A = point_a
        Point_B = point_b

        Vector_OA = Point_A - Point_O
        Vector_OB = Point_B - Point_O 
        
        arrow = np.cross(Vector_OB,Vector_OA)
        arrow = arrow.T
        return arrow   
    
    
        
def main(): 
    rclpy.init()
    
    node = person_information()
    
    rclpy.spin(node)
    
    rclpy.shutdown()
    
if __name__ == "__main__":
    main()