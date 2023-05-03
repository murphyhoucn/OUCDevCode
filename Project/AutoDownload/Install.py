# -*- coding : utf-8 -*-
# Author     : MurphyHou
# =======Here We Go!=======

from pywinauto import application
import time

def installQQ(path):
	app = application.Application().start(path)
	time.sleep(2)
	window_title='腾讯QQ安装向导'
	app[window_title].child_window(title="阅读并同意").click()
	app[window_title].child_window(class_name="#32770").child_window(title="立即安装", class_name="Button").click()
	# time.sleep(30) # 啊？这个时间好像不是很好把控
	# app[window_title].child_window(class_name="#32770").child_window(title="完成安装", class_name="Button").click()

def installWechat(path):
	app = application.Application().start(path)
	time.sleep(15)# 啊？这个时间好像不是很好把控
	window_title='微信安装向导'
	# app[window_title].child_window(title="我已阅读并同意服务协议和隐私协议").click()
	# app[window_title].child_window(title="安装", class_name="Button").click()