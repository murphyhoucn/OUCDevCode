# -*- coding: utf-8 -*-
# @Time      : 2020/10/16 12:44
# @Author    : MurphyHou
# @Proj_Name : Python projects
# @File_Name : 五天向上两天向下.py
# @Software  : PyCharm
# Here We Go!
dayup=1.0
dayfactor=0.01
for i in range(365):
    if i%7 in [6,0]:
        dayup=dayup*(1-dayfactor)
    else:
        dayup=dayup*(1+dayfactor)
print("up:5,down:  {:.2f}".format(dayup))