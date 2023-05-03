# -*- coding : utf-8 -*-
# Author     : MurphyHou
# =======Here We Go!=======

# 鼠标连点器

import pynput, time

if __name__ == "__main__":

    time.sleep(5)

    n = 10000;
    while n!=0 :
        ctr = pynput.mouse.Controller()
        time.sleep(1)
        ctr.click(pynput.mouse.Button.left) #左键单击。
        # ctr.click(pynput.mouse.Button.left, 2) #左键双击。
        # ctr.click(pynput.mouse.Button.right) #右键单击。
        n = n-1
        print(n)


    print("over")