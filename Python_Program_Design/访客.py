# -*- coding : utf-8 -*-
# @Time      : 2020/11/26 22:44
# @Author    : MurphyHou
# @Proj_Name : Python projects
# @File_Name : 访客.py
# @Software  : PyCharm
# Here We Go!


name=input("input your name:")

filename=f'documents operation/guest_{name}.txt'

with open(filename,'w') as file_object:
    file_object.write(name)