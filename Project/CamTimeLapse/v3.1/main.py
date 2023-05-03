# -*- coding : utf-8 -*-
# Author     : MurphyHou
# =======Here We Go!=======

import os
import time
import cv2
from makeDir import makedir
import sys

import gc


def caminit():
	print('=======侧面：init=======')
	global cap
	cap = cv2.VideoCapture(0)
	cap.set(3,1920)
	cap.set(4,1080)
	# ret, frame = cap.read()
	praList = list(cap.read())
	# print(praList)
	return praList

def camrelease():
	print('=======侧面：rels=======')
	cap.release()
	cv2.destroyAllWindows()

def takephoto(praList):
	while praList[0]:
		makedir()  # 以日期为分类，建立文件夹
		picName = os.getcwd() + '\\' + time.strftime('%Y_%m_%d') + '\\' + 'cemian' + '\\' + time.strftime('%Y_%m_%d__%H_%M_%S')+'.jpg'
		cv2.imwrite(picName, praList[1],[int(cv2.IMWRITE_JPEG_QUALITY), 100])  # 无损保存
		print(time.strftime('侧面：'+'%Y_%m_%d__%H_%M_%S')+'.jpg'+'-done')
		praList[0] = False


def caminit2():
	print('=======正面：init=======')
	global cap2
	cap2 = cv2.VideoCapture(2)
	cap2.set(3,1920)
	cap2.set(4,1080)
	praList = list(cap2.read())
	# print(praList)
	return praList

def camrelease2():
	print('=======正面：rels2=======')
	cap2.release()
	cv2.destroyAllWindows()

def takephoto2(praList):
	while praList[0]:
		makedir()  # 以日期为分类，建立文件夹
		picName = os.getcwd() + '\\' + time.strftime('%Y_%m_%d') + '\\' + 'zhengmian' + '\\' + time.strftime('%Y_%m_%d__%H_%M_%S')+'.jpg'
		cv2.imwrite(picName, praList[1],[int(cv2.IMWRITE_JPEG_QUALITY), 100])  # 无损保存
		print(time.strftime('正面：'+'%Y_%m_%d__%H_%M_%S')+'.jpg'+'-done-2')
		praList[0] = False


if __name__=='__main__':
	while True:

		nowtime = time.strftime('%H_%M_%S')

		print()

		if nowtime[3:5] == '00':
			time.sleep(60)
			print("restart...")
			os.execl(sys.executable,sys.executable,*sys.argv)
		else:
			# print("run")
			# time.sleep(10)

			print()
			print('****************************************')
			print(f'********************{nowtime}********************')
			print('****************************************')
			print()

			takephoto(caminit())
			time.sleep(1)
			camrelease()

			print()
			
			takephoto2(caminit2())
			time.sleep(1)
			camrelease2()

			del cap
			del cap2
			del nowtime
			gc.collect()

			time.sleep(30)  # 实际约60s
		
