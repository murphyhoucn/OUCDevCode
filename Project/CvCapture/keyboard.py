# -*- coding : utf-8 -*-
# Time      : 2021/4/2 22:14
# Author    : MurphyHou
# Proj_Name : cv_capture
# File_Name : keyboard.py
# Software  : PyCharm
# Here We Go!

from pynput.keyboard import Key, Listener
keyboard = Controller()  #实例化键盘对象

def on_press(key):  # 按键被按压调用这个函数
    # 输出按压的按键名字
    print('{0} pressed'.format(key))

def on_release(key):  # 按键被松开调用这个函数
    # 输出松开的按键名字
    print('{0} release'.format(key))
    if key == Key.esc:  # 如果按了Esc键就停止监听
        return False  # Stop listener

# 连接事件以及释放
with Listener(on_press=on_press, on_release=on_release) as listener:
    listener.join()
