# -*- coding : utf-8 -*-
# @Time      : 2020/11/18 22:33
# @Author    : MurphyHou
# @Proj_Name : Python projects
# @File_Name : 通过方法修改属性的值.py
# @Software  : PyCharm
# Here We Go!
class Car:
    '''111'''

    def __init__(self,make0,model0,year0):
        '''ddd'''
        self.make=make0
        self.model=model0
        self.year=year0
        self.odometer=0

    def describe_fun(self):
        des=f"{self.make} {self.model} {self.year}"

        return des

    def odometer_fun(self):
        '''  '''
        print(f"odometer {self.odometer}")

    def odometer_upper_fun(self,meter0):
        self.odometer=meter0




my_car=Car('dudsd','dawda',23315)
print(my_car.describe_fun())

my_car.odometer_upper_fun(1000)
my_car.odometer_fun()