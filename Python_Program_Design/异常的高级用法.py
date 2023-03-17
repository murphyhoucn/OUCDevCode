# -*- coding: utf-8 -*-
# @Time      : 2020/10/19 22:45
# @Author    : MurphyHou
# @Proj_Name : Python projects
# @File_Name : 异常的高级用法.py
# @Software  : PyCharm
# Here We Go!

try:
    alp="ABCDEFGHIGKLMNOPQRSTUVWXYZ"
    idx=eval(input("please input an integer:"))
    print(alp[idx-1])
except NameError:
    print("the input has an error!!!")
except:
    print("other error")