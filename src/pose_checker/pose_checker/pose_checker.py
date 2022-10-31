from tkinter import W
import rclpy
from rclpy.node import Node
import numpy as np
from openpifpaf_ros2_msgs.msg import Poses,Pose
import time
import math
from geometry_msgs.msg import Twist

class pose_checker(Node):
    def __init__(self):
        super().__init__("pose_checker")
        print("pose_checker created ")
        
        #QOSProfile 関連設定
        video_qos = rclpy.qos.QoSProfile(depth = 10)
        video_qos.reliability  = rclpy.qos.QoSReliabilityPolicy.BEST_EFFORT
        
        #パブリッシャー生成
        self.sub = self.create_subscription(Poses,"/human_pose",self.callback,qos_profile = video_qos)
        
        self.pub = self.create_publisher(Twist,"cmd_vel",10)
        self.count_L = 0
        self.count_R = 0
        
        
    def callback(self,poses):
        
        for p in poses.poses:
            #骨格検知した情報を計算しやすいように変換
            keypoints =  np.asarray(p.keypoints).reshape(-1,3)
            keypoints_pos = np.floor(keypoints).astype(np.int64)
            
            # 信頼度の情報を削除をおこなう処理を実施（x,y座標）
            keypoints_pos_2d = np.delete(keypoints_pos,2,1)
            #print(keypoints_pos_2d)
            #print("\n\n\n\n")
            
            
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
                #print(x_pos,y_pos)
            
                #左の動き処理
                if(k_num == 5 or k_num == 7 or k_num == 11):
                    if(k_num == 5):
                        Point_O = np.array([x_pos,y_pos])
                        r_num += 1
                    if(k_num == 7):
                        Point_A = np.array([x_pos,y_pos])
                        r_num += 1
                    if(k_num == 11):
                        Point_O_d = Point_O - np.array([0, 50])
                        Point_B = Point_O_d
                        r_num += 1
                    if(r_num == 3):
                        L_Raise_theta = self.deg_checker(Point_A, Point_B, Point_O)
                        hand_switch = "Left"
                        L_Raise_Hand = self.raise_checker(L_Raise_theta,Point_A, Point_B,hand_switch)
                        
            
                #右の動き処理
                if(k_num == 6 or k_num == 8 or k_num == 12 ):
                    if(k_num == 6):
                        Point_X = np.array([x_pos,y_pos])
                        l_num += 1
                    if(k_num == 8):
                        Point_C = np.array([x_pos,y_pos])
                        l_num += 1
                    if(k_num == 12):
                        Point_D = Point_X - np.array([0, 50])
                        l_num += 1
                    if(l_num == 3):
                        R_Raise_theta = self.deg_checker(Point_C,Point_D, Point_X)
                        hand_switch = "Right"
                        R_Raise_Hand = self.raise_checker(R_Raise_theta,Point_A,Point_B,hand_switch)
                        
                        
                k_num += 1
                
            #手の上げたのか？
            if(L_Raise_Hand == True ) :
                print(time.time())
                print("You are raising Left hand\n")
                self.robot_stopper()
            elif(R_Raise_Hand == True ):
                print(time.time())
                print("You are raising Right hand\n")
                self.robot_stopper()
            
    def deg_checker(self,Point_1,Point_2,Origin):
        
        # ベクトル生成
        Vector_1 = Point_1 - Origin
        Vector_2 = Point_2 - Origin
        #ベクトル長さ
        Length_V1 = np.linalg.norm(Vector_1)
        Length_V2 = np.linalg.norm(Vector_2)
        #内積計算
        dot = np.dot(Vector_1,Vector_2)
        #COSθを計算
        cos_theta = dot /(Length_V1 * Length_V2)
        theta = np.arccos(cos_theta) * 180 /np.pi
        return theta
        
    def raise_checker(self,theta,Point_1,Point_2,hand_switch):
        # 手をまっすぐに上げたら０度付近になる（多分）
        
        if(hand_switch == "Left"):
            #手を上げた状態が０度とする。キーポイントが検知していない場合除外を行う処理をする。
            if(theta < 45 
                and Point_1[0] != 0.0 and Point_1[1] != 0.0 
                and Point_2[0] != 0.0 and Point_2[1] != 0.0):
                
                self.count_L += 1
                #2フレーム以上カウントされていたら手を上げている状態にする。
                if(self.count_L > 4 ):
                    return True
                else:
                    return False
                
            else:
                self.count_L = 0
                return False
                    
        elif(hand_switch =="Right"):
            if(theta < 45
                and Point_1[0] != 0.0 and Point_1[1] != 0.0
                and Point_2[0] != 0.0 and Point_2[1] != 0.0):
                
                self.count_R += 1
                
                if(self.count_R > 4):
                    return True
                else:
                    return False
            else:
                self.count_R = 0
                return False
        else:
            self.get_logger().error("想定外なエラー発生")
            
    def robot_stopper(self):
        twist = Twist()
        twist.angular.x = 0.000
        twist.linear.z = 0.000
        self.pub.publish(twist)
        

def main():
    
    rclpy.init()
    
    node = pose_checker()
    
    rclpy.spin(node)
    
    rclpy.shutdown()
    
if __name__ == "__main__":
    main()
