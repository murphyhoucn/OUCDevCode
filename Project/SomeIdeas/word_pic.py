# -*- coding : utf-8 -*-
# Time      : 2021/3/31 19:09
# Author    : MurphyHou
# Proj_Name : pic_words
# File_Name : main.py
# Software  : PyCharm
# Here We Go!

from PIL import Image
import math

def encode(text):
    str_len = len(text)
    width = math.ceil(str_len ** 0.5)
    im = Image.new("RGB", (width, width), 0x0)

    x, y = 0, 0
    for i in text:
        index = ord(i)
        rgb = (0, (index & 0xFF00) >> 8, index & 0xFF)
        im.putpixel((x, y), rgb)
        if x == width - 1:
            x = 0
            y += 1
        else:
            x += 1
    return im


if __name__ == '__main__':
    file_name=input("请输入文本文件地址：")
    out_name=input("请输入保存图片的名称：")
    with open(file_name, encoding="utf-8")as f:
        all_text = f.read()

        im = encode(all_text)
        im.save(out_name)