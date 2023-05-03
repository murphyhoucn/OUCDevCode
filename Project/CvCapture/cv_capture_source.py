# -*- coding : utf-8 -*-
# Time       : 2021/4/7 22:28
# Author     : MurphyHou
# Proj_Name  : cv_capture
# File_Name  : cv_capture_source.py
# Software   : PyCharm
# =======Here We Go!=======



import cv2
import yagmail
from pynput.mouse import Listener


mouse_return=0

def on_move(x, y):  # 监听鼠标移动
    # print('Pointer moved to {0}'.format((x, y)))
    print("START!")
    global mouse_return
    mouse_return=x
    # return x
    return False


def send_mail():
    # 设置服务器
    mail_host = "smtp.qq.com"
    # 授权码
    mail_pass = "cewqytqekrbgdeif"
    # 邮箱地址
    sender = '3168291829@qq.com'
    # 收件人邮箱地址
    receivers = ['1416790341@qq.com']

    yag = yagmail.SMTP(user=sender, password=mail_pass, host=mail_host)

    contents = \
        [
            'yagmail test',
            yagmail.inline('MH_cv_1.jpg'),  # 在邮件中嵌入照片
            #以附件方式发送
            'MH_cv_2.jpg',
            'MH_cv_3.jpg',
            'MH_cv_4.jpg',
            'MH_cv_5.jpg',
            'MH_cv_6.jpg',
            'MH_cv_7.jpg',
            'MH_cv_8.jpg',
            'MH_cv_9.jpg',
            'MH_cv_10.jpg'
        ]

    try:
        yag.send(to=receivers, subject='from yagmai', contents=contents)
        print("success")
    except Exception as e:
        print("error", e)

if __name__=="__main__":
    with Listener(on_move=on_move,) as listener:
        listener.join()

    cap = cv2.VideoCapture(0)#创建一个 VideoCapture 对象
    num=1
    while (num<11):
        ret_flag, Vshow = cap.read()
        cv2.imshow("Capture",Vshow)  #窗口显示，显示名为 Capture
        k = cv2.waitKey(0) & 0xFF #每帧数据延时 ms.

        if mouse_return!=0:

            cv2.imwrite('MH_cv_'+str(num) + ".jpg", Vshow) #保存到程序所在的路径
            print(cap.get(4)); #得到长宽
            print(cap.get(3));
            print("success "+str(num))
            print("--------------------------------------------------")
            num += 1

    cap.release() #释放摄像头
    cv2.destroyAllWindows()#删除建立的全部窗口

    send_mail()