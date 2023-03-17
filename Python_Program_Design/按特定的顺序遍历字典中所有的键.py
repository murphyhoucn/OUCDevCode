# -*- coding : utf-8 -*-
# @Time      : 2020/11/9 22:44
# @Author    : MurphyHou
# @Proj_Name : Python projects
# @File_Name : 按特定的顺序遍历字典中所有的键.py
# @Software  : PyCharm
# Here We Go!

favorite_languages=\
    {
        'jen':'python',
        'sarah':'C',
        'deward':'ruby',
        'phil':'python'
    }

for name in sorted(favorite_languages.keys()):
    print(f"{name},thank you")