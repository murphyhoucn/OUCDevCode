# -*- coding : utf-8 -*-
# @Time      : 2020/11/18 22:46
# @Author    : MurphyHou
# @Proj_Name : Python projects
# @File_Name : 通过方法修改属性的值2.py
# @Software  : PyCharm
# Here We Go!
class Car:
    '''  '''
    def __init__(self,make0,model0,year0):
        '''     '''
        self.make=make0
        self.year=year0
        self.model=model0
        self.odometer=0

    def descibe(self):
        des=f"{self.year} {self.make} {self.model}"
        return des

    def odometer_fun(self):
        print(f"{self.odometer}")

    def upper_fun(self,mileage):
        if mileage>=self.odometer:
            self.odometer=mileage
        else:
            print("illeage")


my_car=Car("daw",'dawda',1022)
print(my_car.descibe())

my_car.upper_fun(100)
my_car.odometer_fun()

my_car.upper_fun(10)
my_car.odometer_fun()