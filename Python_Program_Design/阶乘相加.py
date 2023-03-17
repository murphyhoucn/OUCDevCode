# -*- coding: utf-8 -*-
# @Time      : 2020/10/16 7:21
# @Author    : MurphyHou
# @Proj_Name : Python projects
# @File_Name : 阶乘相加.py
# @Software  : PyCharm
# Here We Go!

sum = 0
temp = 1
for i in range (1,11):
    temp *=i
    sum+=temp
print("the answer is:{}".format(sum))