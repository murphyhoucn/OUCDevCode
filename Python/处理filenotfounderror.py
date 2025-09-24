# -*- coding : utf-8 -*-
# @Time      : 2020/11/26 23:05
# @Author    : MurphyHou
# @Proj_Name : Python projects
# @File_Name : 处理filenotfounderror.py
# @Software  : PyCharm
# Here We Go!

filename='alice.txt'

try:
    with open(filename, encoding='utf-8') as file_object:
        contents=file_object.read()
except FileNotFoundError:
    print(f"file {filename} can not  found")
else:
    print(contents)