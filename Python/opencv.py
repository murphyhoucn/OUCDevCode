# -*- coding : utf-8 -*-
# @Time      : 2020/11/24 8:58
# @Author    : MurphyHou
# @Proj_Name : Python projects
# @File_Name : opencv.py
# @Software  : PyCharm
# Here We Go!

import cv2
import numpy as np

img = cv2.imdecode(np.fromfile("D:\!!!Launch\starlink-13.png", dtype=np.uint8), 1)   # 可读取中文路径图片
cv2.imshow("code", img)   # 展示图片时窗口名称
cv2.waitKey(0)   # 图像展示时间，单位:毫秒(ms)
# cv2.destroyAllWindows()