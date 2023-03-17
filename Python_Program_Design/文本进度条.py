# -*- coding: utf-8 -*-
# @Time      : 2020/10/16 14:11
# @Author    : MurphyHou
# @Proj_Name : Python projects
# @File_Name : 文本进度条.py
# @Software  : PyCharm
# Here We Go!

import time
scale =10
print("------start------")
for i in range(scale+1):
    a,b="**"*i, "··"*(scale-i)
    c=(i/scale)*100
    print("%{:^3.0f}[{}->{}]".format(c,a,b))
    time.sleep(0.1)
print("------end------")