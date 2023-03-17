# -*- coding : utf-8 -*-
# @Time      : 2020/11/9 23:20
# @Author    : MurphyHou
# @Proj_Name : Python projects
# @File_Name : 在字典中存储字典.py
# @Software  : PyCharm
# Here We Go!

user=\
    {
        'aeinsten':
            {
                'first':'albert',
                'last':'einstein',
                'location':'princeton'
            },

        'mcurie':
            {
                'first':'marie',
                'last':'curie',
                'location':'paris'
            }
    }

for username,userinfo in user.items():
    print(f"\nUsername:{username}")
    full_name=f"{userinfo['first']} {userinfo['last']}"
    location=userinfo['location']


    print(f"\tFull name:{full_name}")
    print(f"\tLocation:{location}")