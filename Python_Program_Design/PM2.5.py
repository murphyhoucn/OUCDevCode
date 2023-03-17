# -*- coding: utf-8 -*-
# @Time      : 2020/10/16 21:40
# @Author    : MurphyHou
# @Proj_Name : Python projects
# @File_Name : PM2.5.py
# @Software  : PyCharm
# Here We Go!

PM=eval(input("input the value of PM2.5:"))
if 0<=PM<35:
    print("the air is good")
elif(35 < = PM < 75):
    print("the air very good")
else :
    print("the air is very very good")
