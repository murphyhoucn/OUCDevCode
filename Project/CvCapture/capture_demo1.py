# -*- coding : utf-8 -*-
# Time       : 2021/7/26 8:47
# Author     : MurphyHou
# Proj_Name  : cv_capture
# File_Name  : capture_demo1.py
# Software   : PyCharm
# =======Here We Go!=======

#程序已经完成：自动拍照，并保存

import cv2

cap=cv2.VideoCapture(0)#创建对象
num=0
while(cap.isOpened()):#当摄像头被打开时，循环捕捉帧
    while(num<6):
        ret_flag, image_show = cap.read()  # 函数返回值是有两个参数
        cv2.imshow("Capture", image_show)  # 创建窗口，窗口的显示值为捕捉的图像，名称为Capture

        # 设置窗口大小
        cap.get(4)
        cap.get(3)

        print("success:"+str(num))
        cv2.imwrite(str(num) + ".jpg", image_show)
        num += 1

    cap.release()
    cv2.destroyAllWindows()   #放到检测摄像头是否处于开状态的while循环之内，就能保证窗口在程序运行结束之后可以自动关闭