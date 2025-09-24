# -*- coding : utf-8 -*-
# @Time      : 2020/11/23 22:58
# @Author    : MurphyHou
# @Proj_Name : Python projects
# @File_Name : 圆周率中包含你的生日吗？.py
# @Software  : PyCharm
# Here We Go!

filename='documents operation/millions.txt'

with open(filename) as file_object:

    lines=file_object.readlines()

string=''
for line in lines:
    string+=line.strip()

birth=input("input your birth:")

if birth in string:
    print("yes")
else:
    print("no")