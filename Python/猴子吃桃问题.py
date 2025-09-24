# -*- coding: utf-8 -*-
# @Time      : 2020/10/16 7:24
# @Author    : MurphyHou
# @Proj_Name : Python projects
# @File_Name : 猴子吃桃问题.py
# @Software  : PyCharm
# Here We Go!

n=1
for i in range (4,0,-1):
    n=(n+1)<<1
print(n)