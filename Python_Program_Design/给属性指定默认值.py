# -*- coding : utf-8 -*-
# @Time      : 2020/11/17 22:45
# @Author    : MurphyHou
# @Proj_Name : Python projects
# @File_Name : 给属性指定默认值.py
# @Software  : PyCharm
# Here We Go!
class Car:

    def __init__(self,make0,model0,year0):
        '''初始化描述汽车的属性'''
        self.make=make0
        self.model=model0
        self.year=year0
        self.odometer_reading=0

    def get_describe_name(self):
        '''返回整洁的描述性信息'''
        long_name=f"{self.year} {self.make} {self.model}"

    def read_odsmeter(self):
        '''打印一条指出汽车历程的消息'''
        print(f"this car has {self.odometer_reading} miles on it")


my_new_car=Car('audi','a4','2018')
print(my_new_car.get_describe_name())
my_new_car.read_odsmeter()