# -*- coding : utf-8 -*-
# @Time      : 2020/11/26 22:20
# @Author    : MurphyHou
# @Proj_Name : Python projects
# @File_Name : 写入空文件.py
# @Software  : PyCharm
# Here We Go!

filename='documents operation/programming.txt'

with open(filename,'w') as file_object:
    file_object.write("i love programming.")

