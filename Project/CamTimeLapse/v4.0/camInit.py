# -*- coding : utf-8 -*-
# Author     : MurphyHou
# =======Here We Go!=======

import cv2
import numpy as np

def caminit():
	for i in range(2):
		if i == 0:
			print('=======side:init=======')
			cap = cv2.VideoCapture(0)
		else:
			print('=======front:init=======')
			cap = cv2.VideoCapture(2)

		# 相机参数设置
		cap.set(3,1920)
		cap.set(4,1080)

		if i == 0:
			praListSide = list(cap.read())
			# print(praListSide)
			cap.release()
			print('=======side:rels=======')
			print()
		else:
			praListFront = list(cap.read())
			# print(praListFront)
			cap.release()
			print('=======front:rels=======')
			print()

	praList = np.array([praListSide,praListFront])

	return praList
	# print(type(praList))
	# print(praList)