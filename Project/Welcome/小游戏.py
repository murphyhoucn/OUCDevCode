# -*- coding : utf-8 -*-
# @Time      : 2020/11/14 23:04
# @Author    : MurphyHou
# @Proj_Name : Python projects
# @File_Name : 小游戏.py
# @Software  : PyCharm
# Here We Go!
import time

from turtle import *
from random import randrange
from freegames import square, vector


def snack():
    food = vector(0, 0)
    snake = [vector(10, 0)]
    aim = vector(0, -10)

    def change(x, y):
        "Change snake direction."
        aim.x = x
        aim.y = y

    def inside(head):
        "Return True if head inside boundaries."
        return -200 < head.x < 190 and -200 < head.y < 190

    def move():
        "Move snake forward one segment."
        head = snake[-1].copy()
        head.move(aim)

        if not inside(head) or head in snake:
            square(head.x, head.y, 9, 'red')
            update()
            return

        snake.append(head)

        if head == food:
            print('Snake:', len(snake))
            food.x = randrange(-15, 15) * 10
            food.y = randrange(-15, 15) * 10
        else:
            snake.pop(0)

        clear()

        for body in snake:
            square(body.x, body.y, 9, 'black')

        square(food.x, food.y, 9, 'green')
        update()
        ontimer(move, 100)

    setup(420, 420, 370, 0)
    # Screen(420,420,370,0)
    hideturtle()
    tracer(False)
    listen()
    onkey(lambda: change(10, 0), 'Right')
    onkey(lambda: change(-10, 0), 'Left')
    onkey(lambda: change(0, 10), 'Up')
    onkey(lambda: change(0, -10), 'Down')
    move()
    done()




def timefunction():
    scale = 50
    # print("start".center(scale // 2, '-'))
    print("wait a minute".center(scale // 2, '-'))
    t = time.perf_counter()
    for i in range(scale + 1):
        a = '*' * i
        b = '.' * (scale - i)
        c = (i / scale) * 100
        t -= time.perf_counter()
        print("\r{:^3.0f}%[{}->{}]{:.2f}s".format(c, a, b, -t), end='')
        time.sleep(0.2)
    # print("\n" + "end".center(scale // 2, '-'))
    print()
    print()
    print()
    print()
    print()
    print("\nHere We Go!")

def timefunction2():
    scale = 50
    # print("start".center(scale // 2, '-'))
    # print("wait a minute".center(scale // 2, '-'))
    t = time.perf_counter()
    for i in range(scale + 1):
        a = '*' * i
        b = '.' * (scale - i)
        c = (i / scale) * 100
        t -= time.perf_counter()
        print("\r{:^3.0f}%[{}->{}]{:.2f}s".format(c, a, b, -t), end='')
        time.sleep(0.05)
    # print("\n" + "end".center(scale // 2, '-'))

def timefunction3():
    scale = 50
    # print("start".center(scale // 2, '-'))
    # print("wait a minute".center(scale // 2, '-'))
    t = time.perf_counter()
    for i in range(scale + 1):
        a = '*' * i
        b = '.' * (scale - i)
        c = (i / scale) * 100
        t -= time.perf_counter()
        print("\r{:^3.0f}%[{}->{}]{:.2f}s".format(c, a, b, -t), end='')
        time.sleep(0.1)
    # print("\n" + "end".center(scale // 2, '-'))



def heart():
    print('\n'.join([''.join([('Season'[(x - y) % len('Season')]
    if ((x * 0.05) ** 2 + (y * 0.1) ** 2 - 1) ** 3 - (x * 0.05) ** 2 * (
            y * 0.1) ** 3 <= 0 else ' ')  # 此处是根据心形曲线公式来的(x2+y2-1)3-x2y3=0
    for x in range(-30, 30)])  # 定义高
    for y in range(30, -30, -1)]))  # 定义宽

def greet(name):
    print(f"{name}同学， Congratulations! ")
    print()
    print("恭喜你，成功通过实习期啦，正式称为海之子大家庭的一员啦")
    print()

def caution(name):
    print("喂！你谁啊！！！")
    print()
    print("这是我给我可爱的徒徒们做的哦！！")
    print()
    print("嘿嘿！你没有这个特权")
    print()
    print("即将退出")
    print()
    timefunction2()
    print()
    sss=input("输入任意字符+回车即可退出：")

def tips():
    Adobe = {'PR': '视频剪辑的主要工具',
             'AE': '做特效或者动画效果时会用到',
             'AU': "主要用于处理音频",
             'PS': "用于处理图片",
             'ME': '对导出视频的属性有特殊要求时会用到',
             "LR": "处理大量图片的时候会特别方便"}
    print()
    print("嘿嘿！！！")
    print()
    print("恭喜你开启了潘多拉魔盒")
    print()
    print("Adobe全家桶在等着你去学习哦！！")
    print()
    print("主要包括这些：Pr,Ae,Au,Ps,Me,Lr")
    print()
    scale = 50
    print("输入quit可以退出查询".center(scale // 2, '*'))
    print()

    f=True
    while f:
        adobe = input("输入它们的名字，查询他们的功能: ")
        print()
        adobe=adobe.upper()
        if adobe!='QUIT':
            if adobe in Adobe.keys():
                print(Adobe[adobe])
                print()
            else:
                print("暂时只支持上面几种软件的查询 QAQ ")
                print()

        else:
            print("即将结束软件功能的查询")
            print()
            timefunction2()
            print()
            print("感谢使用")
            f=False

list=['方乃彬','张昊','杨淋洁','冯湘','梁恩惠','杨浩迪',
      '刘瑶','张煦','蒋紫瑶','晋逸凡','郑茹丹','陈泽昊','马春霞',
      '陈欣沂','林新超','朱钰涵','李慧婷','胡洪梅','陈心怡','江宇蒙']

print("tips：可以先将这个黑黑的框框全屏，然后按住ctrl+鼠标滚轮将文字放大到合适的尺寸")
a=input("请输入你的名字: ")

if a in list:
    print()
    timefunction()
    heart()
    greet(a)

    flag=True
    while flag:
        print()
        b = input("按F进入坦克（doge）： ")
        if (b == 'F'):
            tips()
            flag=False
        elif (b == 'f'):
            print()
            print("要看仔细哦！是输入大写的F哦！！")
        else:
            print()
            print("要看仔细哦！是输入的F哦！！")
            print()
            # continue



    flag= True
    while flag:
        print()
        ttt = input("要不要来一局紧张刺激得贪吃蛇(yes/no):")
        print()
        ttt=ttt.upper()
        if ttt == 'YES':
            print("你可以按↑↓←→控制蛇的运动哦！")
            print()
            timefunction3()
            snack()
            print()
            print("游戏虽好玩，但是只能玩一次哦！")
            flag=False
        elif ttt=='NO':
            print()
            print("真的不来吗？QAQ")
        else:
            print()
            print("是不是输错了呀")



    print()
    print("暂时先开发这么几个功能，觉得有意思的话，后期再升级")
    print()
    print("不管怎么样，通过了实习期还不能松懈")
    print()
    print("慢慢学习，一点点增长经验，加油啊！！！！")

    print()
    print("即将退出软件".center(50 // 2, '-'))
    timefunction2()
    print()
    fffff=input("输入任意字符+回车即可退出：")

else:
    caution(a)

