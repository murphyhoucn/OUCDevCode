# -*- coding : utf-8 -*-
# @Time      : 2020/11/15 22:29
# @Author    : MurphyHou
# @Proj_Name : Python projects
# @File_Name : 创建餐馆类.py
# @Software  : PyCharm
# Here We Go!
class Restaurant:
    '''创建餐馆类'''

    def __init__(self,name,type):
        '''初始化参数'''
        self.restaurant_name=name
        self.cuisine_type=type

    def describe_restaurant(self):
        '''方法describe_restaurant'''
        print(f"name:{self.restaurant_name},type:{self.cuisine_type}")

    def open_restaurant(self):
        '''方法open_restaurant'''
        print("open now")


chinese_restaurant=Restaurant('rixin','chuan')


print(f"i love this {chinese_restaurant.restaurant_name}")
print(f"i love {chinese_restaurant.cuisine_type}")

chinese_restaurant.describe_restaurant()
chinese_restaurant.open_restaurant()