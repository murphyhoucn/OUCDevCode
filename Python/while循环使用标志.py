# -*- coding : utf-8 -*-
# @Time      : 2020/11/11 22:53
# @Author    : MurphyHou
# @Proj_Name : Python projects
# @File_Name : while循环使用标志.py
# @Software  : PyCharm
# Here We Go!
prompt="\nTell me something and i will repeat it back to you  "
prompt+="\nEnter 'quit' to end the problem  "

active=True

while active:
    message=input(prompt)

    if (message=='quit'):
        active=False
    else:
        print(message)


