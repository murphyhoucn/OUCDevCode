# -*- coding : utf-8 -*-
# @Time      : 2020/11/14 22:47
# @Author    : MurphyHou
# @Proj_Name : Python projects
# @File_Name : Dog类.py
# @Software  : PyCharm
# Here We Go!
class Dog:
    """A simple attempt to model a dog."""

    def __init__(self, name0, age0):
        """Initialize name and age attributes."""
        self.name = name0
        self.age = age0

    def sit(self):
        """Simulate a dog sitting in response to a command."""
        print(f"{self.name} is now sitting.")

    def roll_over(self):
        """Simulate rolling over in response to a command."""
        print(f"{self.name} rolled over!")


my_dog = Dog('Willie', 6)

print(f"My dog's name is {my_dog.name}.")
print(f"My dog is {my_dog.age} years old.")
