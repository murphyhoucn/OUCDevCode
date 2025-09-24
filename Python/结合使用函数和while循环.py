# -*- coding : utf-8 -*-
# @Time      : 2020/11/13 22:20
# @Author    : MurphyHou
# @Proj_Name : Python projects
# @File_Name : 结合使用函数和while循环.py
# @Software  : PyCharm
# Here We Go!
def get_formatted_name(first_name,last_name):
    full_name=f"{first_name} {last_name}"

    return full_name

while True:
    print("\nplease tell your name:")
    f_name=input("first_name: ")
    if (f_name=='q'):
        break
    l_name=input("last_name: ")
    if (l_name=='q'):
        break
    formatted_name=get_formatted_name(f_name,l_name)
    print(f"\nhello,{formatted_name}\n")