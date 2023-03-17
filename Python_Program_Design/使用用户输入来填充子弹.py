# -*- coding : utf-8 -*-
# @Time      : 2020/11/11 23:16
# @Author    : MurphyHou
# @Proj_Name : Python projects
# @File_Name : 使用用户输入来填充子弹.py
# @Software  : PyCharm
# Here We Go!

responses={}
prompt0="what is your name?"
prompt="which mountain would you like to climb someday?   "
prompt2="would you like to let another person response(yes or no)?  "

polling_active=True

while polling_active:
    name=input(prompt0)
    response=input(prompt)

    responses[name]=response

    repeat=input(prompt2)

    if repeat=='no':
        polling_active=False

print("\n----poll result-----")
for name,response in responses.items():
    print(f"{name} would like to climb {response}")