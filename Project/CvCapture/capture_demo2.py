# -*- coding : utf-8 -*-
# Time       : 2021/7/26 9:03
# Author     : MurphyHou
# Proj_Name  : cv_capture
# File_Name  : capture_demo2.py
# Software   : PyCharm
# =======Here We Go!=======

#程序已完成：设置手动触发方式

import cv2
from pynput.mouse import Listener

mouse_return=0

def on_move(x,y):# 监听鼠标的位置
    # print("mouse:{}".format(x,y))
    global mouse_return
    mouse_return=x

    return False  # 不能返回True,否则程序不会停止

if __name__=="__main__":
    with Listener(on_move=on_move) as listener:
        listener.join()

    cap=cv2.VideoCapture(0)#创建对象
    num=1
    while(cap.isOpened()):#当摄像头被打开时，循环捕捉帧
        while(num<6):
            ret_flag, image_show = cap.read()  # 函数返回值是有两个参数
            cv2.imshow("Capture", image_show)  # 创建窗口，窗口的显示值为捕捉的图像，名称为Capture
            if mouse_return!=0:  # 当鼠标发生移动时触发程序
                # 设置窗口大小
                cap.get(4)
                cap.get(3)

                print("success:"+str(num))
                cv2.imwrite(str(num) + ".jpg", image_show)
                num += 1

        cap.release()
        cv2.destroyAllWindows()   #放到检测摄像头是否处于开状态的while循环之内，就能保证窗口在程序运行结束之后可以自动关闭