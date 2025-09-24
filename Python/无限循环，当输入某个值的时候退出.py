# -*- coding : utf-8 -*-
# @Time      : 2020/11/11 22:35
# @Author    : MurphyHou
# @Proj_Name : Python projects
# @File_Name : 无限循环，当输入某个值的时候退出.py
# @Software  : PyCharm
# Here We Go!
prompt="\nTell me something and i will repeat it back to you  "
prompt+="\nEnter 'quit' to end the problem  "

message=""

while (message!='quit'):
    message=input(prompt)

    if (message!='quit'):
        {
            print(message)
        }