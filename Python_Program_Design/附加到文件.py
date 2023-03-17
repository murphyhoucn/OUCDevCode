# -*- coding : utf-8 -*-
# @Time      : 2020/11/26 22:42
# @Author    : MurphyHou
# @Proj_Name : Python projects
# @File_Name : 附加到文件.py
# @Software  : PyCharm
# Here We Go!


filename='documents operation/test.txt'

with open(filename,'a') as file_object:
    file_object.write('5456436\n')
    file_object.write('gfesfesfs\n')

