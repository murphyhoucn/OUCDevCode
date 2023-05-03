# -*- coding : utf-8 -*-
# Author     : MurphyHou
# =======Here We Go!=======

import os
import time
def makedir(picname):
	flag = False
	for i in os.listdir():
		# print(i)
		if i == picname[-24:-14]:
			flag = True
			break
	if not flag:
		os.mkdir(picname[:-29])
		os.mkdir(picname[:-24])
		os.mkdir(picname[:-29] + '\\' + 'fro')
		os.mkdir(picname[:-29] + '\\' + 'seg')