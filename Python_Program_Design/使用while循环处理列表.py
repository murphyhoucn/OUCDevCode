# -*- coding : utf-8 -*-
# @Time      : 2020/11/11 23:05
# @Author    : MurphyHou
# @Proj_Name : Python projects
# @File_Name : 使用while循环处理列表.py
# @Software  : PyCharm
# Here We Go!
unconfirmed_users=['alice','brain','candace']
confirmed_users=[]

while unconfirmed_users:
    current_user=unconfirmed_users.pop()

    print(f"verifying user:{current_user.title()}")
    confirmed_users.append(current_user)

print("\nthe following users have been confirmed")

for confirmed in confirmed_users:
    print(confirmed.title())