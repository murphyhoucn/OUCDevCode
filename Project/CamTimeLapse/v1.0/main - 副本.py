# -*- coding : utf-8 -*-
# Author     : MurphyHou
# =======Here We Go!=======

import os
import time
import cv2

def takephoto():
	cap = cv2.VideoCapture(0)
	cap.set(3,1920)
	cap.set(4,1080)
	# print("CV_CAP_PROP_POS_AVI_RATIO :" + str(cap.get(3)))
	# print("CV_CAP_PROP_FRAME_WIDTH :" + str(cap.get(4)))
	ret, frame = cap.read()

	# print(frame)
	while ret:
		# frame = cv2.resize(frame, (1920,1080))  # 尺寸更改
		cv2.imwrite(time.strftime('%Y_%m_%d__%H_%M_%S')+'.jpg', frame,[int(cv2.IMWRITE_JPEG_QUALITY), 100])  # 无损保存
		print(time.strftime('%Y_%m_%d__%H_%M_%S')+'.jpg'+'-done')
		
		time.sleep(10)
		ret, frame = cap.read()

	cap.release()
	cv2.destroyAllWindows()
	return 0

if __name__=='__main__':
	print('开始')
	takephoto()