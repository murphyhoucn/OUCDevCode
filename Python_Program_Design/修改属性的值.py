# -*- coding : utf-8 -*-
# @Time      : 2020/11/18 22:25
# @Author    : MurphyHou
# @Proj_Name : Python projects
# @File_Name : 修改属性的值.py
# @Software  : PyCharm
# Here We Go!
class Car:
    '''qi che lei'''

    def __init__(self,make0,model0,year0):
        '''miao shu qi che  de shu xing'''
        self.make=make0
        self.model=model0
        self.year=year0
        self.odometer=0

    def describe(self):
        des=f"{self.make}  {self.model}  {self.year}"
        return des


    def odometer_fun(self):
        print(f"{self.odometer}")

my_car=Car('audi','44',2014)
print(my_car.describe())

my_car.odometer=100
# 通过实例直接访问它，然后修改属性的值
my_car.odometer_fun()