# -*- coding : utf-8 -*-
# @Time      : 2020/11/23 22:50
# @Author    : MurphyHou
# @Proj_Name : Python projects
# @File_Name : 包含一百万位的大型文件.py
# @Software  : PyCharm
# Here We Go!

filename='documents operation/millions.txt'

with open(filename) as file_object:

    lines=file_object.readlines()

string=''

for line in lines:
    string+=line.strip()

print(f"{string[:52]}.......")
print(len(string))