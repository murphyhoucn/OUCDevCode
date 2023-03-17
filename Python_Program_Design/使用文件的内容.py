# -*- coding : utf-8 -*-
# @Time      : 2020/11/23 22:44
# @Author    : MurphyHou
# @Proj_Name : Python projects
# @File_Name : 使用文件的内容.py
# @Software  : PyCharm
# Here We Go!

filename='documents operation/test.txt'

with open(filename) as file_object:

    lines=file_object.readlines()


string=''
for line in lines:
    string+=line.strip()

print(string)
print(len(string))