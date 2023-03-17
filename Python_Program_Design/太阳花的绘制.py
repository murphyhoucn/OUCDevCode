# -*- coding: utf-8 -*-
# @Time      : 2020/10/16 7:33
# @Author    : MurphyHou
# @Proj_Name : Python projects
# @File_Name : 太阳花的绘制.py
# @Software  : PyCharm
# Here We Go!

from turtle import *
speed(10)
color ("red","yellow")
begin_fill()
while True:
    forward(200)
    left(170)
    if abs(pos())<1:
        break
end_fill()
done()