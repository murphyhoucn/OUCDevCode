# -*- coding : utf-8 -*-
# Time      : 2021/3/31 19:30
# Author    : MurphyHou
# Proj_Name : pic_words
# File_Name : pic_word.py
# Software  : PyCharm
# Here We Go!


from PIL import Image

def decode(im):
    width,height = im.size
    lst = []
    for y in range(height):
        for x in range(width):
            red,green,blue = im.getpixel((x,y))
            if(blue | green | red) == 0:
                break
            index = (green<<8) + blue
            lst.append(chr(index))
    return ''.join(lst)

if __name__=='__main__':

    pic_name=input("请输入图片地址：")
    word_name=input("请输入保存文件的名称：")
    all_text = decode(Image.open(pic_name))
    with open (word_name,"w",encoding = "utf-8") as f:
        f.write(all_text)