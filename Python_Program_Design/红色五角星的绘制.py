# -*- coding: utf-8 -*-
# @Time      : 2020/10/16 7:28
# @Author    : MurphyHou
# @Proj_Name : Python projects
# @File_Name : 红色五角星的绘制.py
# @Software  : PyCharm
# Here We Go!

from turtle import *
fillcolor("red")
begin_fill()
while True:
    forward(200)
    right(144)
    if abs(pos())<1:
        break
end_fill()
n=eval(input())