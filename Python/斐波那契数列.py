# -*- coding: utf-8 -*-
# @Time      : 2020/10/15 22:36
# @Author    : MurphyHou
# @Proj_Name : Python projects
# @File_Name : 斐波那契数列.py
# @Software  : PyCharm
# Here We Go!
a, b = 0, 1
while a < 1000:
    print(a, end=" ")
    a, b = b, a + b