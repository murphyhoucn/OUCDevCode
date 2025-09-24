# -*- coding : utf-8 -*-
# @Time      : 2020/11/20 23:19
# @Author    : MurphyHou
# @Proj_Name : Python projects
# @File_Name : car.py
# @Software  : PyCharm
# Here We Go!
'''一个可用于表示汽车的类'''

class Car:
    '''一次模拟汽车的简单尝试'''

    def __init__(self,make0,mode0,year0):
        '''chu shi hua miao shu qi che de shu xing'''

        self.make=make0
        self.model=mode0
        self.year=year0

        self.odometer=0

    def get_descriptive_name(self):
        '''fan hui jian jie de miao shu xing ming cheng'''

        name=f"{self.make} {self.model} {self.year}"

        return name.title()


    def read_odometer(self):
        ''' da yin qi che de  li cheng'''

        print(f"odometer:{self.odometer}")

    def upper_odometer(self,mileage):
        '''geng xin qi che de li cheng '''

        if self.odometer>=mileage:
            print("illeage")
        else:
            self.odometer=mileage


    def increatment_odometer(self):
        self.odometer+=mile

my_new_car=Car('audi','di',20001)
print(my_new_car.get_descriptive_name())

my_new_car.odometer=23
my_new_car.read_odometer()