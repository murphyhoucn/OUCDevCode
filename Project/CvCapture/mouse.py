# -*- coding : utf-8 -*-
# Time      : 2021/4/2 22:18
# Author    : MurphyHou
# Proj_Name : cv_capture
# File_Name : mouse.py
# Software  : PyCharm
# Here We Go!

from pynput.mouse import Listener

def on_move(x, y):  # 监听鼠标移动
    print('Pointer moved to {0}'.format((x, y)))

def on_click(x, y, button, pressed):  # 监听鼠标点击
    print('{0} at {1}'.format('Pressed' if pressed else 'Released', (x, y)))
    if not pressed:  # 如果没有按压就结束程序（即，单击一下鼠标会结束程序）
        # Stop listener
        return False

def on_scroll(x, y, dx, dy):  # 监听鼠标滚轮
    print('Scrolled {0}'.format((x, y)))

    return x;

# 连接事件以及释放
with Listener(on_move=on_move, on_click=on_click, on_scroll=on_scroll) as listener:
    listener.join()
