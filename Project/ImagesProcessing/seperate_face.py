# -*- coding : utf-8 -*-
# Time      : 2021/6/3 19:50
# Author    : MurphyHou
# Proj_Name : handle_pic
# File_Name : seperate_face.py
# Software  : PyCharm
# Here We Go!


import dlib         # 人脸识别的库dlib
import numpy as np  # 数据处理的库numpy
import cv2          # 图像处理的库OpenCv
import os

system_path=input("输入地址：")
system_path2=system_path+'/face'
pic_num=0;
for filename in os.listdir(system_path):
    # if filename.endswith("jpg") or filename.endswith("png"):
    if filename.endswith("jpg"):
        pic_num+=1

print(pic_num)

for count in range(pic_num):

    # 获取人脸检测器
    detector = dlib.get_frontal_face_detector()
    # 预测人脸关键点
    predictor = dlib.shape_predictor('shape_predictor_68_face_landmarks.dat')

    # 读取图像
    path = "pic/"
    path=path+str(count)+".jpg"
    print(path)
    # path="pic/0.jpg"
    img = cv2.imread(path)

    # Dlib 检测
    dets = detector(img, 1)

    print("pic {}.jpg have {} faces\n".format(count,len(dets)))

    # 记录人脸矩阵大小
    height_max = 0
    width_sum = 0

    # 计算要生成的图像 img_blank 大小
    for k, d in enumerate(dets):

        # 计算矩形大小
        # (x,y), (宽度width, 高度height)
        pos_start = tuple([d.left(), d.top()])
        pos_end = tuple([d.right(), d.bottom()])

        # 计算矩形框大小
        height = d.bottom()-d.top()
        width = d.right()-d.left()

        # 处理宽度
        width_sum += width

        # 处理高度
        if height > height_max:
            height_max = height
        else:
            height_max = height_max

    # 绘制用来显示人脸的图像的大小
    print("窗口大小："
          , '\n', "高度 / height:", height_max
          , '\n', "宽度 / width: ", width_sum)

    # 生成用来显示的图像
    if(height_max!=0 and width_sum!=0):
        img_blank = np.zeros((height_max, width_sum, 3), np.uint8)
    else:
        print("pic {}.jpg have {} faces\n".format(count, len(dets)))
        continue
    # 记录每次开始写入人脸像素的宽度位置
    blank_start = 0

    # 将人脸填充到img_blank
    for k, d in enumerate(dets):

        height = d.bottom()-d.top()
        width = d.right()-d.left()

        # 填充
        for i in range(height):
            for j in range(width):
                    img_blank[i][blank_start+j] = img[d.top()+i][d.left()+j]
        # 调整图像
        blank_start += width

    # cv2.namedWindow("img_faces")#, 2)
    # cv2.imshow("img_faces", img_blank)
    cv2.imwrite(os.path.join(system_path2 , str(count)+'_face.jpg'), img_blank)
    cv2.waitKey(0)