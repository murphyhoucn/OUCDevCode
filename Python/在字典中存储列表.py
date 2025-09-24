# -*- coding : utf-8 -*-
# @Time      : 2020/11/9 23:11
# @Author    : MurphyHou
# @Proj_Name : Python projects
# @File_Name : 在字典中存储列表.py
# @Software  : PyCharm
# Here We Go!

pizza=\
    {
        'crust':'thick',
        'toppings':['muchrooms','extra','cheese']
    }

print(f"you ordered a {pizza['crust']}-crust pizza "
      f"with the following topping:")

for topping in pizza['toppings']:
    print("\t"+topping)