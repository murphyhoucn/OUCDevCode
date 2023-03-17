# -*- coding : utf-8 -*-
# @Time      : 2020/11/19 22:27
# @Author    : MurphyHou
# @Proj_Name : Python projects
# @File_Name : 通过方法对属性的值进行递增.py
# @Software  : PyCharm
# Here We Go!
class Car:
    '''   '''

    def __init__(self,make0,model0,year0):
        ''''    '''
        self.make=make0
        self.year=year0
        self.model=model0
        self.odometer=0

    def describe(self):
        print(f"{self.make}")

    def odometer_fun(self):
        print(f"{self.odometer}")

    def upper(self,mileage):
        if mileage>=self.odometer:
            self.odometer=mileage
        else:
            print("illeage")

    def increat(self,miles):
        self.odometer+=miles



my_car=Car('dadaw','dadwa',2121)
my_car.describe()

my_car.upper(1_000)
my_car.odometer_fun()

my_car.increat(1)
my_car.odometer_fun()
