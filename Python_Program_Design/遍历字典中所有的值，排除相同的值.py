# -*- coding : utf-8 -*-
# @Time      : 2020/11/9 22:49
# @Author    : MurphyHou
# @Proj_Name : Python projects
# @File_Name : 遍历字典中所有的值，排除相同的值.py
# @Software  : PyCharm
# Here We Go!
favorite_languages=\
    {
        'jen':'python',
        'sarah':'C',
        'deward':'ruby',
        'phil':'python'
    }

print("the following language has been mentioned:")

for language in set(favorite_languages.values()):
    print(f"{language} is good")