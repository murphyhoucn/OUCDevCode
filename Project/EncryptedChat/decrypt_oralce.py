# -*- coding : utf-8 -*-
# Time       : 2021/8/11 17:40
# Author     : MurphyHou
# Proj_Name  : encrypt
# File_Name  : decrypt_oralce.py
# Software   : PyCharm
# =======Here We Go!=======


import base64
from Crypto.Cipher import AES

# str不是16的倍数那就补足为16的倍数
def add_to_16(value):
    while len(value) % 16 != 0:
        value += '\0'
    return str.encode(value)  # 返回bytes

def decrypt_oralce(key0,msg):
    # 秘钥
    key = key0
    # 密文
    text=msg
    # 初始化加密器
    aes = AES.new(add_to_16(key), AES.MODE_ECB)
    # 优先逆向解密base64成bytes
    base64_decrypted = base64.decodebytes(text.encode(encoding='utf-8'))

    # bytes解密
    decrypted_text = str(aes.decrypt(base64_decrypted),encoding='utf-8') # 执行解密密并转码返回str
    decrypted_text = base64.b64decode(decrypted_text.encode('utf-8')).decode('utf-8')
    print(decrypted_text)


if __name__ == '__main__':
    print("请输入密钥：")
    key=input()


    while( 1 ):
        print("请输入加密内容：")
        msg = input()
        decrypt_oralce(key,msg)