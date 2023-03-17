# -*- coding : utf-8 -*-
# @Time      : 2020/11/14 8:33
# @Author    : MurphyHou
# @Proj_Name : Python projects
# @File_Name : 创建dog类.py
# @Software  : PyCharm
# Here We Go!


# 面向对象编程是最有效的软件编写方法之一
# 在面向对象中，你编写表示现实生活中的事物和情景的类，并基于这些类来创建对象。
# 编写类时，你定义一大类对象都有的通用行为
# 基于类创建对象时，每个对象都自动具备这种通用行为，然后可根据需要赋予每个对象独特的个性

class Dog:
    # 类名的首字母一般大写
    '''一次模拟小狗的简单尝试'''

    def __int__(self,name0,age0):
        '''初始化属性，name和age'''
        self.name=name0
        self.age=age0

    def sit(self):
        '''模拟小狗受到命令蹲下'''
        print(f"{self.name} is now sitting")

    def roll(self):
        '''模拟小狗受到命令后打滚'''
        print(f"{self.name} is now rolling")


