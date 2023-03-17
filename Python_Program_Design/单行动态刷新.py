# -*- coding: utf-8 -*-
# @Time      : 2020/10/16 14:16
# @Author    : MurphyHou
# @Proj_Name : Python projects
# @File_Name : 单行动态刷新.py
# @Software  : PyCharm
# Here We Go!

import time
for i in range(101):
    print("\r{:3}%".format(i), end='')
    time.sleep(0.5) 