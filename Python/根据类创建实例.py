# -*- coding : utf-8 -*-
# @Time      : 2020/11/14 22:30
# @Author    : MurphyHou
# @Proj_Name : Python projects
# @File_Name : 根据类创建实例.py
# @Software  : PyCharm
# Here We Go!
class Dog:

    def __init__(self,name0,age0):
        self.name=name0
        self.age=age0

    def sit(self):
        print(f"{self.name} is sitting")

    def roll(self):
        print(f"{self.name} is rolling")

# 访问属性
my_dog=Dog('sss',6)

print(f"my dog's name is {my_dog.name} ")
print(f"my dog's age is {my_dog.age}")

your_dog=Dog('aaa',5)
print(f"y dog's name is {your_dog.name} ")
print(f"y dog's age is {your_dog.age}")
# 调用方法
my_dog.roll()
my_dog.sit()
your_dog.sit()
your_dog.roll()