# -*- coding : utf-8 -*-
# Time      : 2021/4/3 10:44
# Author    : MurphyHou
# Proj_Name : auto_mail
# File_Name : mail_test_1.py
# Software  : PyCharm
# Here We Go!

import yagmail

# 设置服务器
mail_host ="smtp.qq.com"
# 授权码
mail_pass="cewqytqekrbgdeif"
# 邮箱地址
sender='3168291829@qq.com'
# 收件人邮箱地址
receivers=['1416790341@qq.com','311989@qq.com']

# 登录SMTP服务器
# user- 邮箱账号
# password- 邮箱登录授权码
# host- 邮箱SMT服务地址

yag = yagmail.SMTP(user=sender,password=mail_pass,host=mail_host)

# 编辑邮件内容
contents=\
    [
        'yagmail test',
        yagmail.inline('MH_cv_1.jpg'),#在邮件中嵌入照片
        # 'MH_cv_1.jpg'   #以附件方式发送
    ]


# 发送邮件
# to- 收信主题
# subject- 邮件主题
# contents- 邮件内容

try:
    yag.send(to=receivers,subject='form yagmai',contents=contents)
    print("success")
except Exception as e:
    print("error",e)