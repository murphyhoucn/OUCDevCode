# -*- coding : utf-8 -*-
# @Time      : 2020/11/5 22:29
# @Author    : MurphyHou
# @Proj_Name : Python projects
# @File_Name : 字典 外星人粒子.py
# @Software  : PyCharm
# Here We Go!

aline={'x_position':0,'y_position':25,'speed':'medium'}
aline['speed']="fast"
print(f"the position of the aline is {aline['x_position']}")
if (aline['speed']=="slow"):
    x_increment=1
elif (aline['speed']=="medium"):
    x_increment=2
else:
    x_increment=3


aline['x_position']+=x_increment
print(f"new position of the aline is {aline['x_position']}")