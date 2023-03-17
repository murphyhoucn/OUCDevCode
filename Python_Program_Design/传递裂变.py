# -*- coding : utf-8 -*-
# @Time      : 2020/11/13 22:33
# @Author    : MurphyHou
# @Proj_Name : Python projects
# @File_Name : 传递裂变.py
# @Software  : PyCharm
# Here We Go!
def greet_users(names):
    '''xiang lie biao zhong de mei ge ren wen hao'''
    for name in names:
        print(f"hello,{name.title()}\n")

names=['hh','adwa','dadada']
greet_users(names)