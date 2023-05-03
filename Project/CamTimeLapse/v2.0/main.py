# -*- coding : utf-8 -*-
# Author     : MurphyHou
# =======Here We Go!=======

import os
import time
import cv2

from makeDir import makedir

from GUI import Ui_Form
import sys
from PyQt5 import QtWidgets

class MyPyQT_Form(QtWidgets.QWidget,Ui_Form):

	def __init__(self, number, option, interval, praList):
		super(MyPyQT_Form, self).__init__()
		self.setupUi(self)

		self.number = number
		self.option = option
		self.interval = interval
		self.praList = praList
		
	def caminit(self):
		self.textEdito.setPlainText('=======init=======')
		print('=======init=======')
		global cap 
		cap = cv2.VideoCapture(int(self.number))
		cap.set(3,1920)
		cap.set(4,1080)
		# ret, frame = cap.read()
		self.praList = list(cap.read())
		# print(praList)
		# return self.praList

	def camrelease(self):
		self.textEdito.setPlainText('=======rels=======')
		print('=======rels=======')
		cap.release()
		cv2.destroyAllWindows()

	def takephoto(self):
		while self.praList[0]:
			makedir()  # 以日期为分类，建立文件夹
			picName = os.getcwd() + '\\' + time.strftime('%Y_%m_%d') + '\\' + time.strftime('%Y_%m_%d__%H_%M_%S')+'.jpg'
			cv2.imwrite(picName, self.praList[1],[int(cv2.IMWRITE_JPEG_QUALITY), 100])  # 无损保存
			print(time.strftime('%Y_%m_%d__%H_%M_%S')+'.jpg'+'-done')
			self.textEdito.setPlainText(time.strftime('%Y_%m_%d__%H_%M_%S')+'.jpg'+'-done')
			self.praList[0] = False

	def camstart(self):

		while True:
			my_pyqt_form.caminit()
			my_pyqt_form.takephoto()
			time.sleep(1)
			my_pyqt_form.camrelease()
			time.sleep(int(self.interval))
			print()
			
		# for i in range(2):
		# 	my_pyqt_form.caminit()
		# 	my_pyqt_form.takephoto()
		# 	time.sleep(1)
		# 	my_pyqt_form.camrelease()
		# 	time.sleep(int(self.interval))
		# 	print()

	# 获取窗口所输入的信息的函数
	def pushButton1_click(self):

		# 获取Windows界面输入的内容
		self.number=self.lineEdit_1.text()
		self.option=self.lineEdit_2.text()
		self.interval=self.lineEdit_3.text()

		# print(self.number)
		# print(self.option)
		# print(self.interval)

		self.textEditi.setPlainText("当前信息：\n"+ "相机号:" + self.number 
			+'\n'+ "模式选择:" + self.option 
			+'\n'+ "间隔:" + self.interval +'\n')
		
		my_pyqt_form.camstart()

if __name__=='__main__':
	app = QtWidgets.QApplication(sys.argv)
	my_pyqt_form = MyPyQT_Form(0,0,0,[])

	# 窗口的打开和关闭
	my_pyqt_form.show()
	sys.exit(app.exec_())