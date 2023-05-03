# -*- coding : utf-8 -*-
# Author     : MurphyHou
# =======Here We Go!=======

import os
import time
import cv2
from makeDir import makedir

def takephoto():
	cap = cv2.VideoCapture(0)
	cap.set(3,1920)
	cap.set(4,1080)
	# print("CV_CAP_PROP_POS_AVI_RATIO :" + str(cap.get(3)))
	# print("CV_CAP_PROP_FRAME_WIDTH :" + str(cap.get(4)))
	ret, frame = cap.read()

	# print(frame)
	while ret:
		makedir()  # 以日期为分类，建立文件夹
		picName = os.getcwd() + '\\' + time.strftime('%Y_%m_%d') + '\\' + time.strftime('%Y_%m_%d__%H_%M_%S')+'.jpg'
		cv2.imwrite(picName, frame,[int(cv2.IMWRITE_JPEG_QUALITY), 100])  # 无损保存
		print(time.strftime('%Y_%m_%d__%H_%M_%S')+'.jpg'+'-done')
		
		time.sleep(60)
		ret, frame = cap.read()

	cap.release()
	cv2.destroyAllWindows()
	return 0

if __name__=='__main__':
	print('开始')
	takephoto()