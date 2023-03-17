# -*- coding : utf-8 -*-
# @Time      : 2020/11/15 22:22
# @Author    : MurphyHou
# @Proj_Name : Python projects
# @File_Name : 创建多个实例.py
# @Software  : PyCharm
# Here We Go!
class Dog:
    '''Dog类'''
    def __init__(self,name,age):
        self.name=name
        self.age=age
    def sit(self):
        print(f"{self.name} is now sitting")
    def roll(self):
        print(f"{self.name} is rolling now")


my_dog=Dog('sss',10)
your_dog=Dog('aaa',11)

print(f"my go's name is {my_dog.name}")
print(f"your dpg's name is {your_dog.name}")

my_dog.sit()
your_dog.roll()