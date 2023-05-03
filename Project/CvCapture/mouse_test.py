# -*- coding : utf-8 -*-
# Time       : 2021/7/26 9:09
# Author     : MurphyHou
# Proj_Name  : cv_capture
# File_Name  : mouse_test.py
# Software   : PyCharm
# =======Here We Go!=======

from pynput.mouse import Listener

def on_move(x,y):# 监听鼠标的位置
    print("mouse:{0}".format((x,y)))




if __name__=="__main__":
    with Listener(on_move=on_move) as listener:
        listener.join()