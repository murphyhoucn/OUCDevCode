# -*- coding : utf-8 -*-
# @Time      : 2020/11/15 19:15
# @Author    : MurphyHou
# @Proj_Name : Python projects
# @File_Name : 用Python写C？这不是来捣乱的吗！！.py
# @Software  : PyCharm
# Here We Go!

# a=input("输入：")
a=' *Love You,Chen Xinyi*'
print('\n'.join([''.join([(a[(x - y) %len(a)]
if ((x * 0.05) ** 2 + (y * 0.1) ** 2 - 1) ** 3 - (x * 0.05) ** 2 * (
            y * 0.1) ** 3 <= 0 else ' ')  # 此处是根据心形曲线公式来的(x2+y2-1)3-x2y3=0
for x in range(-30, 30)])  # 定义高
for y in range(30, -30, -1)]))  # 定义宽

# C Programming Language
# Love You,Chen Xinyin!!