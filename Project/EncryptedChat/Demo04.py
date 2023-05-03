# -*- coding : utf-8 -*-
# Time       : 2021/8/11 17:10
# Author     : MurphyHou
# Proj_Name  : encrypt
# File_Name  : Demo04.py
# Software   : PyCharm
# =======Here We Go!=======


#!/usr/bin/env python
#AES-demo

import base64
from Crypto.Cipher import AES

'''
采用AES对称加密算法
'''

# str不是16的倍数那就补足为16的倍数
def add_to_16(value):
    while len(value) % 16 != 0:
        value += '\0'
    return str.encode(value)  # 返回bytes

# 加密方法
def encrypt_oracle():
    # 秘钥
    key = '33818121'
    # 一次性读取文本内容
    with open('testdata.txt', 'r', encoding='utf-8') as banks:
        # print(text) 测试打印读取的数据
        # 待加密文本
        mystr = banks.read()
    text = base64.b64encode(mystr.encode('utf-8')).decode('ascii')
    # 初始化加密器
    aes = AES.new(add_to_16(key), AES.MODE_ECB)
    # 先进行aes加密
    encrypt_aes = aes.encrypt(add_to_16(text))
    # 用base64转成字符串形式
    encrypted_text = str(base64.encodebytes(encrypt_aes), encoding='utf-8')  # 执行加密并转码返回bytes
    # print(encrypted_text) 测试打印加密数据
    # 写入加密数据到文件
    with open("encryptdata.txt","w") as bankdata:
        bankdata.write(encrypted_text)

# 解密方法
def decrypt_oralce():
    # 秘钥
    key = '33818121'
    # 密文
    with open('testdata.txt', 'r', encoding='utf-8') as banks:
        # print(text) 测试打印读取的加密数据
        # 待解密文本
        text = banks.read()
    # 初始化加密器
    aes = AES.new(add_to_16(key), AES.MODE_ECB)
    # 优先逆向解密base64成bytes
    base64_decrypted = base64.decodebytes(text.encode(encoding='utf-8'))
    # bytes解密
    decrypted_text = str(aes.decrypt(base64_decrypted),encoding='utf-8') # 执行解密密并转码返回str
    decrypted_text = base64.b64decode(decrypted_text.encode('utf-8')).decode('utf-8')
    print(decrypted_text)

if __name__ == '__main__':
   # encrypt_oracle()
   decrypt_oralce()