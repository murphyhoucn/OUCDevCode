# -*- coding: utf-8 -*-
# @Time      : 2020/10/19 22:49
# @Author    : MurphyHou
# @Proj_Name : Python projects
# @File_Name : 异常处理2.py
# @Software  : PyCharm
# Here We Go!

try:
    alp="ABCDEFGHIJKLMNOPQRSTUVWXYZ"
    idx=eval(input("please input an integer:"))
    print(alp[idx-1])
except NameError:
    print("the input has an error")
else:
    print("no error")
finally:
    print("the programme has end but we don't know whether it has any error")
