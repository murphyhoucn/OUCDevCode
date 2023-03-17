# -*- coding : utf-8 -*-
# @Time      : 2020/11/20 22:44
# @Author    : MurphyHou
# @Proj_Name : Python projects
# @File_Name : 将实例用作属性.py
# @Software  : PyCharm
# Here We Go!

class Car:
    '''    '''

    def __init__(self,make0,year0,model0):
        '''    '''
        self.make=make0
        self.year=year0
        self.model=model0

        self.odometer=0

    def describe_fun(self):
        print(f"{self.make} {self.year} {self.model}")



class Battery():
    '''yi ci mo ni dian dong che dian ping de jian dan chang shi '''

    def __init__(self,battery_size0=75):
        '''chu shi hua dian ping shu xing'''
        self.battery_size=battery_size0

    def describe_battery_fun(self):
        print(f"battery size is  {self.battery_size}")


    def get_range(self):
        if self.battery_size==75:
            range0=260
        elif self.battery_size==100:
            range0=315

        print(f"range is {range0}")

class ElectricCar(Car):
    '''    '''

    def __init__(self,make0,year0,model0):

        super().__init__(make0,year0,model0)
        self.battery=Battery()




my_tesla=ElectricCar('tesla','2020','wda')
print(my_tesla.describe_fun())
my_tesla.battery.describe_battery_fun()
my_tesla.battery.get_range()