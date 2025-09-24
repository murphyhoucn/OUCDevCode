# -*- coding : utf-8 -*-
# @Time      : 2020/11/19 23:02
# @Author    : MurphyHou
# @Proj_Name : Python projects
# @File_Name : 重写父类的方法.py
# @Software  : PyCharm
# Here We Go!
class Car:
    '''fulei'''

    def __init__(self,make0):
        self.make=make0

    def describe_fun(self):
        print(f"make:{self.make}")

    def fill_gas_tank(self):
        print("filled")


class ElectricCar(Car):

    def __init__(self,make0):
        self.make=make0

    def fill_gas_tank(self):
        print("no tank")


my_car=ElectricCar("ss")
my_car.fill_gas_tank()