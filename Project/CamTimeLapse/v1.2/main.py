# -*- coding : utf-8 -*-
# Author     : MurphyHou
# =======Here We Go!=======

import os
import time
import cv2
from makeDir import makedir


def caminit():
	print('=======init=======')
	global cap
	cap = cv2.VideoCapture(0)
	cap.set(3,1920)
	cap.set(4,1080)
	# ret, frame = cap.read()
	praList = list(cap.read())
	# print(praList)
	return praList

def camrelease():
	print('=======rels=======')
	cap.release()
	cv2.destroyAllWindows()

def takephoto(praList):
	while praList[0]:
		makedir()  # 以日期为分类，建立文件夹
		picName = os.getcwd() + '\\' + time.strftime('%Y_%m_%d') + '\\' + time.strftime('%Y_%m_%d__%H_%M_%S')+'.jpg'
		cv2.imwrite(picName, praList[1],[int(cv2.IMWRITE_JPEG_QUALITY), 100])  # 无损保存
		print(time.strftime('%Y_%m_%d__%H_%M_%S')+'.jpg'+'-done')
		praList[0] = False


if __name__=='__main__':
	
	while True:
		takephoto(caminit())
		time.sleep(1)
		camrelease()
		time.sleep(60)
		print()