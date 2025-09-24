# -*- coding : utf-8 -*-
# @Time      : 2020/11/19 22:41
# @Author    : MurphyHou
# @Proj_Name : Python projects
# @File_Name : 子类的方法__init__().py
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

my_car=Car('daw','faw',2021)
my_car.describe_fun()

# jicheng yu paisheng
class ElectricCar(Car):
    ''' dian dong che de du te zhi chu'''

    def __init__(self,make0,model0,year0):
        '''     '''

        super().__init__(make0,year0,model0)

my_tesla=ElectricCar('tesla','model s',2019)
my_tesla.describe_fun()