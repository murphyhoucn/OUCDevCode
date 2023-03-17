# -*- coding: utf-8 -*-
# @Time      : 2020/10/16 10:47
# @Author    : MurphyHou
# @Proj_Name : Python projects
# @File_Name : 温度转换.py
# @Software  : PyCharm
# Here We Go!

tempstr = input("please input the value of temprature with signal:")
if tempstr[-1] in ['F', 'f']:
    c = (eval(tempstr[0:-1]) - 32) / 1.8
    print("the translated value is {:.2f}C".format(c))
elif tempetr[-1] in ['C', 'c']:
    f = 1.8 * eval(tempstr[0:-1]) + 32
    print("the translated value is {:.2f}F".format(f))
else:
    print("error")
