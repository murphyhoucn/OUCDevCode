# -*- coding: utf-8 -*-
# @Time      : 2020/10/19 22:43
# @Author    : MurphyHou
# @Proj_Name : Python projects
# @File_Name : 异常处理.py
# @Software  : PyCharm
# Here We Go!
try:
    num=eval(input("please input  an integer:"))
    print(num*2)
except NameError :
    print("the input has an error!!")