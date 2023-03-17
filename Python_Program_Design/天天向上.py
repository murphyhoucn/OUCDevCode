# -*- coding: utf-8 -*-
# @Time      : 2020/10/16 12:41
# @Author    : MurphyHou
# @Proj_Name : Python projects
# @File_Name : 天天向上.py
# @Software  : PyCharm
# Here We Go!
import math
dayup=math.pow((1.0+0.001),365)
daydown=math.pow((1.0-0.001),365)
print("up:{:.2f},down:{:.2f}".format(dayup,daydown))