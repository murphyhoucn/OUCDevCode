# -*- coding : utf-8 -*-
# Author     : MurphyHou
# =======Here We Go!=======

# 鼠标连点器

import pynput, time

if __name__ == "__main__":

    time.sleep(5)
    print('start')
    n = 1
    while n!=1000 :
        ctr = pynput.mouse.Controller()
        print("第"+str(n)+'张5min后拍摄')
        time.sleep(300)
        print("第"+str(n)+'张已拍摄'+'\n')
        ctr.click(pynput.mouse.Button.left) #左键单击。
        # ctr.click(pynput.mouse.Button.left, 2) #左键双击。
        # ctr.click(pynput.mouse.Button.right) #右键单击。
        n = n+1
        print(n)


    print("over")