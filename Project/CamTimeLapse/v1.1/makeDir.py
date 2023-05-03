# -*- coding : utf-8 -*-
# Author     : MurphyHou
# =======Here We Go!=======

import os
import time
def makedir():
	flag = False
	for i in os.listdir():
		if i == time.strftime('%Y_%m_%d'):
			flag = True
	if not flag:
		os.mkdir(os.getcwd() + '\\' + time.strftime('%Y_%m_%d'))