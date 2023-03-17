# -*- coding: utf-8 -*-
# @Time      : 2020/10/16 7:18
# @Author    : MurphyHou
# @Proj_Name : Python projects
# @File_Name : 九九乘法表输出.py
# @Software  : PyCharm
# Here We Go!
for i in range (1,10):
    for j in range(1,i+1):
        print("{}*{}={:2}".format(j,i,i*j),end='')
    print("")