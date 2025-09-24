# -*- coding : utf-8 -*-
# @Time      : 2020/11/22 22:45
# @Author    : MurphyHou
# @Proj_Name : Python projects
# @File_Name : 逐行读取.py
# @Software  : PyCharm
# Here We Go!

filename='documents operation/test.txt'

with open(filename) as file_object:
    for line in file_object:
        print(line.rstrip())