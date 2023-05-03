# -*- coding : utf-8 -*-
# @Time      : 2020/11/15 19:15
# @Author    : MurphyHou
# @Proj_Name : Python projects
# @File_Name : 用Python写C？这不是来捣乱的吗！！.py
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
    print('\n'.join([''.join([('C Programming Language '[(x - y) %
                           len('C Programming Language ')]
    if ((x * 0.05) ** 2 + (y * 0.1) ** 2 - 1) ** 3 - (x * 0.05) ** 2 * (
            y * 0.1) ** 3 <= 0 else ' ')  # 此处是根据心形曲线公式来的(x2+y2-1)3-x2y3=0
    for x in range(-30, 30)])  # 定义高
    for y in range(30, -30, -1)]))  # 定义宽

def greet(name):
    if (name=='陈小平'):
        print("陈老师好！")
        print()
        print("老师，程序中有什么缺陷，还望您指正。")
    else:
        print(f"{name}同学，欢迎欢迎")
        print()
        print("快来好好学习C语言吧")
        print()

def caution(name):
    print("喂！你谁啊！！！")
    print()
    print("这是陈老师班级专属的小程序哦")
    print()
    print("嘿嘿！你没有这个特权")
    print()
    print("即将退出")
    print()
    timefunction2()
    print()
    sss=input("输入任意字符+回车即可退出：")

def tips():
    scale = 50
    Clist = {'计算机与编程语言': '计算机其实很傻，他什么都不知道，只会执行命令。'
                         '厉害的是我们，是我们用编程语言写出的算法和程序，计算机只会老老实实的去执行',
             '变量': '变量需要一个名字，变量的名字是一种“标识符”，就是用来区别变量之间的不同的'
                   '注意变量的命名规则，同时不要使用C语言的保留字来命名变量',
             '表达式': '注意区分表达式和语句。'
                    '表达式中需要注意的就是运算符的使用规则啦',
             '判断': '主要的判断结构就是if-else啦。switch-case语句也很重要，不要忘记写break哦',
             '循环': '循环结构有多种，for，while，do-while，注意它们之间的区别，选择最合适的',
             '数据类型': 'C语言的数据类型太多了，但是不要慌，主要的类型就是整型和浮点型。'
                     '数据类型太多带来一个难点就是要根据数据的范围选择最合适的，尽量不要浪费内存空间',
             '函数': '我只想说一句：函数，永远滴神，太方便了',
             '数组': '数组还是很复杂的，涉及到了内存结构，以及变化和应用太多了，得需要多下工夫',
             '指针': '指针是C语言的精髓，难度肯定有，不过不要慌，指针就是保存地址的变量，这个要记住',
             '字符串': 'C语言没有字符串类型，字符串和数组关联在一起，所以和数组的特点类似，'
                    '同时字符串还有很多实用的函数',
             '结构体': 'C语言允许用户自己建立由不同类型数据组成的组合型的数据结构，它称为结构体',
             '全局变量': 'C/C++一个重要的点是，变量有生存周期，这个要注意哦',
             '文件': '文件操作可以我把的输入输出和系统保存的文件关联起来'}
    print()
    print("嘿嘿！！！")
    print()
    print("恭喜你开启了潘多拉魔盒")
    print()
    print("C语言是一个很基础的语言，有很多等着你去学习哦！！")
    print()
    print("主要有以下知识点".center(scale // 2, '*'))
    for key in Clist.keys():
        print(key);

    print()
    print("输入quit可以退出查询".center(scale // 2, '*'))
    print()

    f=True
    while f:
        c = input("输入知识点，查询相关内容: ")
        print()
        if c!='quit':
            if c in Clist.keys():
                print(Clist[c])
                print()
            else:
                print("暂时只支持上面几种知识点的查询 QAQ ")
                print()
                print("不要失望，后期还会更新的哦")
                print()

        else:
            print("即将结束知识点的查询")
            print()
            timefunction2()
            print()
            print("感谢使用")
            f=False

list=['刘士斌','陈雪瑶','赵益民','杨一凡','吴文龙','申展','石逸凡',
      '徐新宁','刘玉娟','马新雨','刘国庆','雒玉佳','叶铠欣','王冰涛',
      '张松赞','吴绍泷','苏明轩','田言博','于闯','瞿佑潼','吴宇晨',
      '刘泽宇','周涛','曾喻','刘权','任成宇','罗益萍','邱择鹏',
      '李俊华','周沄','达力泽博','郑永瑜','侯金良','陈小平','刘海波']

print("tips：可以先将这个黑黑的框框全屏，然后按住ctrl+鼠标滚轮将文字放大到合适的尺寸")
print()
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
        ttt = input("学累了吗？要不要来一局紧张刺激得贪吃蛇(yes/no):")
        print()
        ttt=ttt.upper()
        if ttt == 'YES':
            print("你可以按↑↓←→控制蛇的运动哦！")
            print()
            timefunction3()
            snack()
            print()
            print("别玩游戏了，”滚“去写程序（逃）")
            flag=False
        elif ttt=='NO':
            print()
            print("真的不来吗？QAQ")
        else:
            print()
            print("是不是输入错了呀")



    print()
    print("暂时先开发这么几个功能，觉得有意思的话，后期再升级")
    print()
    print("既然选了C语言，就要好好学哦")
    print()
    print("我们的陈老师超级好哦！")
    print()
    print("加油，你会变强的，但不会变秃，嘿嘿！")

    print()
    print("即将退出软件".center(50 // 2, '-'))
    timefunction2()
    print()
    fffff=input("输入任意字符+回车即可退出：")

else:
    caution(a)

