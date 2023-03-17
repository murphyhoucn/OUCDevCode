# -*- coding: utf-8 -*-
# @Time      : 2020/10/19 22:54
# @Author    : MurphyHou
# @Proj_Name : Python projects
# @File_Name : 函数的基本使用.py
# @Software  : PyCharm
# Here We Go!
def happy():
    print("h b t y")
def happyb(name):
    happy()
    happy()
    print("h b ,d {}!".format(name))
    happy()
happyb("mike")
print()
happyb("lili")