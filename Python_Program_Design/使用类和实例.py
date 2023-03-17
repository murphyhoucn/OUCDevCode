# -*- coding : utf-8 -*-
# @Time      : 2020/11/15 22:56
# @Author    : MurphyHou
# @Proj_Name : Python projects
# @File_Name : 使用类和实例.py
# @Software  : PyCharm
# Here We Go!
class Car:
    '''一次模拟汽车的简单尝试'''

    def __init__(self,make0,model0,year0):
        '''初始化描述汽车的属性'''
        self.make=make0
        self.model=model0
        self.year=year0

    def get_describe_car(self):
        '''返回简洁的描述性信息'''
        long_name=f"{self.make} {self.model} {self.year}"

        return long_name.title()

my_new_car=Car('audi','a4',2019)

print(my_new_car.get_describe_car())