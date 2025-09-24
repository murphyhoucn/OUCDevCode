# -*- coding : utf-8 -*-
# @Time      : 2020/11/11 22:58
# @Author    : MurphyHou
# @Proj_Name : Python projects
# @File_Name : 使用break退出循环.py
# @Software  : PyCharm
# Here We Go!
prompt="\nplease enter the name of a city you have visted"
prompt+="\n(enter 'quit' when you are finished)  "

while True:
    city=input(prompt)

    if city=='quit':
        break
    else:
        print(f"i'd love to go to {city.title()}")