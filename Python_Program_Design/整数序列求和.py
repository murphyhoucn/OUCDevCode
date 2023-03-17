# -*- coding: utf-8 -*-
# @Time      : 2020/10/16 7:14
# @Author    : MurphyHou
# @Proj_Name : Python projects
# @File_Name : 整数序列求和.py
# @Software  : PyCharm
# Here We Go!

n = input("please input an integer num:")
sum = 0
for i in range(int(n)):
    sum += i + 1
print("the answer is: ", sum )