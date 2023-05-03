# -*- coding : utf-8 -*-
# Author     : MurphyHou
# =======Here We Go!=======

import cv2
import time

def findcamid():
	cap = cv2.VideoCapture(0)
	# cap = cv2.VideoCapture(1)
	# cap = cv2.VideoCapture(2)

	while True:
		ret, frame = cap.read()
		# frame = cv2.flip(frame,1)   #镜像操作
		cv2.imshow("video", frame)
		key = cv2.waitKey(50)
		#print(key)
		if key  == ord('q'):
			break
	cv2.destroyAllWindows()

if __name__=='__main__':
	print('开始')
	findcamid()

