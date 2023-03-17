# -*- coding: utf-8 -*-
# @Time      : 2020/10/16 21:52
# @Author    : MurphyHou
# @Proj_Name : Python projects
# @File_Name : BMI.py
# @Software  : PyCharm
# Here We Go!
height, weight = eval(input("input the height and weight:"))
# print(height)
# print('')
# print(weight)
# print('')
bmi = weight/pow(height, 2)
# print(bmi)
# print('')
print("BMI is:{:.2f}".format(bmi))
who, dom="",""
if bmi<18.5:
    who="thin"
elif bmi<25:
    who="standard"
elif bmi<30:
    who="fat"
else:
    who="very fat"

if bmi<18.5:
    dom="thin"
elif bmi<24:
    dom="standard"
elif bmi<28:
    dom="fat"
else:
    bmi="very fat"
print("internatinal:'{}',nationtal:'{}'".format(who,dom))