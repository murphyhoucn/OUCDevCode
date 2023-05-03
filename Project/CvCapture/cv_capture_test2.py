# -*- coding : utf-8 -*-
# Time      : 2021/4/2 22:20
# Author    : MurphyHou
# Proj_Name : cv_capture
# File_Name : cv_capture_test2.py
# Software  : PyCharm
# Here We Go!


import cv2
from pynput.mouse import Listener

mouse_return=0

def on_move(x, y):  # 监听鼠标移动
    # print('Pointer moved to {0}'.format((x, y)))
    print("START!")
    global mouse_return
    mouse_return=x
    # return x
    return False

# def on_click(x, y, button, pressed):  # 监听鼠标点击
#     print('{0} at {1}'.format('Pressed' if pressed else 'Released', (x, y)))
#     if not pressed:  # 如果没有按压就结束程序（即，单击一下鼠标会结束程序）
#         # Stop listener
#         return False

# def on_scroll(x, y, dx, dy):  # 监听鼠标滚轮
#     print('Scrolled {0}'.format((x, y)))
#
#     return x;

if __name__=="__main__":
    # 连接事件以及释放
    # print (mouse_return)
    with Listener\
                (on_move=on_move,
                 # on_click=on_click,
                 # on_scroll=on_scroll
                 ) as listener:
        listener.join()

    # print (mouse_return)

    cap = cv2.VideoCapture(0)#创建一个 VideoCapture 对象

    flag = 1 #设置一个标志，用来输出视频信息
    num = 1 #递增，用来保存文件名
    # while(cap.isOpened()):#循环读取每一帧
    while (num<11):
        ret_flag, Vshow = cap.read() #返回两个参数，第一个是bool是否正常打开，第二个是照片数组，如果只设置一个则变成一个tumple包含bool和图片
        cv2.imshow("Capture",Vshow)  #窗口显示，显示名为 Capture
        k = cv2.waitKey(5) & 0xFF #每帧数据延时 ms，延时不能为 0，否则读取的结果会是静态帧

        # if k == ord('s'):  #若检测到按键 ‘s’，打印字符串
        if mouse_return!=0:
            # cv2.imwrite('D:/'+'MH_cv_'+str(num) + ".jpg", Vshow)
            #注意，C盘不能用程序保存文件，如果文件下载到C盘，则程序不能正常运行\

            cv2.imwrite('MH_cv_'+str(num) + ".jpg", Vshow) #保存到程序所在的路径
            print(cap.get(4)); #得到长宽
            print(cap.get(3));
            print("success "+str(num))
            print("--------------------------------------------------")
            num += 1
        # elif k == ord('q'): #若检测到按键 ‘q’，退出
        #     break
    cap.release() #释放摄像头
    cv2.destroyAllWindows()#删除建立的全部窗口