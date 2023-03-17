# -*- coding: utf-8 -*-
# @Time      : 2020/10/16 22:09
# @Author    : MurphyHou
# @Proj_Name : Python projects
# @File_Name : BMI2.py
# @Software  : PyCharm
# Here We Go!
height,weight=eval(input("input your height and weight:"))
bmi=weight/pow(height,2)
print("bim is {:.2f}".format(bmi))
who,dom="",""
if bmi<18.5:
    who,dom="thin","thin"
elif 18.5<=bmi<24:
    who,dom="stanard","stanard"
elif 24<=bmi<25:
    who,dom="stanard","fat"
elif 25<=bmi<28:
    who,dom="fat","fat"
elif 28<=bmi<30:
    who,dom="fat","very fat"
else:
    who.dom="very fat","very fat"


print("international:'{}' and national:'{}'".format(who,dom))