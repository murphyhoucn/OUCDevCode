# -*- coding : utf-8 -*-
# @Time      : 2020/11/6 22:03
# @Author    : MurphyHou
# @Proj_Name : Python projects
# @File_Name : 实使用get（）来访问值.py
# @Software  : PyCharm
# Here We Go!
aline=\
    {
        'color':'green',
        'speed':'slow',
        'points':25
    }
print(aline['color'])

point_value=aline.get('points','no point value assigned')
# 使用get()方法在指定的键不存在时返回一个默认的值
# get()方法的第一个参数是指定键，是必不可少的
# 第二个参数是指定键不存在时返回的值，是可选的
# 如果字典中有该键的值，在打印时输出值
# 如果字典中没有该键的值，在打印时输出默认值
print(point_value)