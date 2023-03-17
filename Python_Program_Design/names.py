# -*- coding : utf-8 -*-
# @Time      : 2020/11/27 22:21
# @Author    : MurphyHou
# @Proj_Name : Python projects
# @File_Name : names.py
# @Software  : PyCharm
# Here We Go!

from name_function import get_formatted_name


print ("enter 'q' at any time to quit")

flag=True

while flag:

    first=input("\nplease give me your first name: ")

    if first=='q':
        flag=False
        break

    last=input("\nplease give me your last name: ")
    if last=='q':
        flag=False
        break;

    name=get_formatted_name(first,last)
    print(f"name__{name}\n")
