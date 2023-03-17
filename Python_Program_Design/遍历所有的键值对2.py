# -*- coding : utf-8 -*-
# @Time      : 2020/11/6 22:31
# @Author    : MurphyHou
# @Proj_Name : Python projects
# @File_Name : 遍历所有的键值对2.py
# @Software  : PyCharm
# Here We Go!
favourite_language=\
    {
        'jen':'python',
        'sarah':'c',
        'edward':'ruby',
        'phil':'python'
    }

for name,language in favourite_language.items():
    print(f"\n{name}'s favourite is {language}")