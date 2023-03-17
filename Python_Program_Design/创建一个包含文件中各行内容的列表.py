# -*- coding : utf-8 -*-
# @Time      : 2020/11/22 22:51
# @Author    : MurphyHou
# @Proj_Name : Python projects
# @File_Name : 创建一个包含文件中各行内容的列表.py
# @Software  : PyCharm
# Here We Go!

filename='documents operation/test.txt'

with open(filename) as file_object:
    lines=file_object.readlines()
#     readlines :从文件中读取每一行，并将其存储在一个列表中

print(lines)

for line in lines:
    print(line.rstrip())