# -*- coding : utf-8 -*-
# @Time      : 2020/11/14 8:10
# @Author    : MurphyHou
# @Proj_Name : Python projects
# @File_Name : 将函数存储在模块中.py
# @Software  : PyCharm
# Here We Go!
def make_pizza(size,*toppings):
    '''概要要制作的披萨'''
    print("\nmaiking a {size}-inch pizza with the following toppings:")
    for topping in toppings:
        print(f"-{topping}")

def person(first,last,**info):
    info['first']=first
    info['last']=last
    return info