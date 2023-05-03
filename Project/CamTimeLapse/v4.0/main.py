# -*- coding : utf-8 -*-
# Author     : MurphyHou
# =======Here We Go!=======

import os
import time
import cv2
import sys
import gc

from makeDir import makedir
from camInit import caminit
from takePic import takepic



def restart(nowTime):
	print(f"{nowTime} : 60s - restart...")
	time.sleep(60)
	print("restart...")
	os.execl(sys.executable,sys.executable,*sys.argv)

def start(picname):
	nowTime = picname[-24:-4]
	# print(nowTime) # 2022_10_08__23_07_05
	# print(nowTime[15:17])

	# 创建存储文件夹
	makedir(picname)

	# 一小时内三次重启三次
	if nowTime[15:17] == '00':
		restart(nowTime[15:17])
	elif nowTime[15:17] == '20':
		restart(nowTime[15:17])
	elif nowTime[15:17] == '40':
		restart(nowTime[15:17])
	else:
		# 开始拍照
		takepic(picname, caminit())



if __name__=='__main__':
	while True:
		# 设置文件名
		# D:\Develop_Python\Progect\CamTimeLapse\v4.0\2022_10_08\sid\2022_10_08__20_30_46.jpg
		pwd = os.getcwd()
		dirName = time.strftime('%Y_%m_%d')
		nowTime = time.strftime('%Y_%m_%d__%H_%M_%S')
		picClass = 'sid'
		fileClass = '.jpg'
		picName = pwd + '\\' + dirName + '\\' + picClass + '\\' + nowTime + fileClass

		# print(picName)

		# print(picName[-24:-4]) # nowTime
		# print(picName[-24:-14]) # dirName
		# print(picName[:-29])
		# print(picName[-28:-25])

		# picName = picName.replace('sid', 'fro')
		# print(picName[:-4])
		# time.sleep(10)		





		# ==================kaishi===================

		print()
		print("**********{start}**********")
		print()
		start(picName)
		print()
		print("**********{finish}**********")
		print()

		time.sleep(30)  # 实际约60s
		
