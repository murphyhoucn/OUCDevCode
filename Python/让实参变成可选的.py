# -*- coding : utf-8 -*-
# @Time      : 2020/11/12 22:49
# @Author    : MurphyHou
# @Proj_Name : Python projects
# @File_Name : 让实参变成可选的.py
# @Software  : PyCharm
# Here We Go!
def get_formatted_name(first_name,last_name,middle_name=''):
    '''返回简洁的名字'''
    if middle_name:
        full_name=f"{first_name} {middle_name} {last_name}"
    else:
        full_name=f"{first_name} {last_name}"
    return full_name
musician=get_formatted_name('join','hooker','lee')
print(musician)

musician=get_formatted_name('join','hooker')
print(musician)