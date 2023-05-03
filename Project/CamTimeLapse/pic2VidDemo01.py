# -*- coding : utf-8 -*-
# Author     : MurphyHou
# =======Here We Go!=======

import cv2
import os
 
# 读取时序图中的第一张图片

pwd = os.getcwd()
file = os.listdir(pwd)
# print(file)
filelist = []
for i in file:
	if i[-4:] == '.jpg':
		filelist.append(i)

# print(filelist)


# print(pwd + '\\' + filelist[-1])

img = cv2.imread(pwd + '\\' + filelist[0])
# 设置每秒读取多少张图片
fps = 25
imgInfo = img.shape

# print(imgInfo)

 
# 获取图片宽高度信息
size = (imgInfo[1], imgInfo[0])
fourcc = cv2.VideoWriter_fourcc(*"MJPG")
 
# 定义写入图片的策略
videoWrite = cv2.VideoWriter('output.mp4', fourcc, fps, size)

for i in filelist:
    # 读取所有的图片
    fileName = pwd + '\\' + i
    img = cv2.imread(fileName)
    # 将图片写入所创建的视频对象
    videoWrite.write(img)
 
videoWrite.release()
print('finish')