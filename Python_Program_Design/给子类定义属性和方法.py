# -*- coding : utf-8 -*-
# @Time      : 2020/11/19 22:55
# @Author    : MurphyHou
# @Proj_Name : Python projects
# @File_Name : 给子类定义属性和方法.py
# @Software  : PyCharm
# Here We Go!
class Car:
    '''yi ci qi che de mo ni'''

    def __init__(self,make0,model0,year0):
        '''   '''
        self.make=make0
        self.year=year0
        self.model=model0

        self.odometer=0

    def describe_fun(self):
        '''   '''
        print(f"{self.make} {self.year} {self.model}")

    def upper_fun(self,mile):
        '''   '''
        self.odometer+=mile

    def odometer_fun(self,mileage):
        '''  '''
        if mileage>=self.odometer:
            self.odometer=mileage
        else:
            print("illeage")



class ElectricCar(Car):
    '''   zi lei  '''
    def __init__(self,make0,model0,year0):
        '''初始化父类的属性
        再初始化子类的特有属性'''

        super().__init__(make0,model0,year0)

        self.battery_size=18650


    def describe_battery_fun(self):
        '''  miao shu dian chi'''
        print(f"{self.battery_size}")


my_tesla=ElectricCar('tesla','model -s',2019)
my_tesla.describe_battery_fun()
my_tesla.describe_fun()