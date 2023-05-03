# -*- coding : utf-8 -*-
# Time      : 2021/4/3 12:10
# Author    : MurphyHou
# Proj_Name : cv_capture
# File_Name : cv_capture_mail_demo1.py
# Software  : PyCharm
# Here We Go!


import cv2
import yagmail
from pynput.mouse import Listener

mouse_return=0

def on_move(x, y):  # 监听鼠标移动
    # print('Pointer moved to {0}'.format((x, y)))
    global mouse_return
    mouse_return=x
    # return x
    return False

def send_mail():
    # 设置服务器
    mail_host = "smtp.qq.com"
    # 授权码
    mail_pass = "hvtzzpfbtguqdfig"
    # 邮箱地址
    sender = '3168291829@qq.com'
    # 收件人邮箱地址
    # receivers = ['1416790341@qq.com'] # 设置单个收件人
    receivers = ['1416790341@qq.com', '311989@qq.com']  # 设置多个收件人

    # 登录SMTP服务器
    # user- 邮箱账号
    # password- 邮箱登录授权码
    # host- 邮箱SMT服务地址

    yag = yagmail.SMTP(user=sender, password=mail_pass, host=mail_host)

    # 编辑邮件内容
    contents = \
        [
            'Python yagmail',
            yagmail.inline('MH_cv_1.jpg'),  # 在邮件中嵌入照片
            # #以附件方式发送
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

    # 发送邮件
    # to- 收信主题
    # subject- 邮件主题
    # contents- 邮件内容

    try:
        yag.send(to=receivers, subject='Python yagmai', contents=contents)
        # print("success")
    except Exception as e:
        print("error", e)

if __name__=="__main__":

    with Listener(on_move=on_move) as listener:
        listener.join()

    cap = cv2.VideoCapture(0) # 创建一个 VideoCapture 对象

    num = 1 # 递增，用来设置文件名
    while (num<11):
        ret_flag, Vshow = cap.read() # 返回两个参数，第一个是bool是否正常打开，第二个是照片数组，如果只设置一个则变成一个tumple包含bool和图片
        cv2.imshow("Capture",Vshow)  # 窗口显示，显示名为 Capture
        k = cv2.waitKey(5) & 0xFF # 每帧数据延时 ms，延时不能为 0，否则读取的结果会是静态帧

        if mouse_return!=0:
            cv2.imwrite('MH_cv_'+str(num) + ".jpg", Vshow) #保存到程序所在的路径
            num += 1

    cap.release() # 释放摄像头
    cv2.destroyAllWindows() # 删除建立的全部窗口

    # 调用邮件发送函数
    send_mail()