# -*- coding : utf-8 -*-
# @Time      : 2020/11/26 23:01
# @Author    : MurphyHou
# @Proj_Name : Python projects
# @File_Name : else代码块.py
# @Software  : PyCharm
# Here We Go!
print("give me two numbers and i'll divide them")
print("input q to quit")

while True:
    first_number=input("\n first number:")
    if first_number=='q':
        break
    second_number=input("\n second_number:")
    if second_number=='q':
        break

    try:
        answer=int(first_number)/int(second_number)
    except ZeroDivisionError:
        print("you candwadada")
    else:
        print(answer)