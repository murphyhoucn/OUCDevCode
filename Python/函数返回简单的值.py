# -*- coding : utf-8 -*-
# @Time      : 2020/11/12 7:24
# @Author    : MurphyHou
# @Proj_Name : Python projects
# @File_Name : 函数返回简单的值.py
# @Software  : PyCharm
# Here We Go!
def get_formatted_name(first,last):
    '''返回简洁的名字'''
    full_name=f"{first} {last}"
    return full_name
flag=True

while flag:

    first_name=input("first:")
    if first_name!='quit':
        last_name=input("last:")
        musician = get_formatted_name(first_name,last_name)
        print(f"the musician's name :{musician}\n")
    else:
        flag=False



