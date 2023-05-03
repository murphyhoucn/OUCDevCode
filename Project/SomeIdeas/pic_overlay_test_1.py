# -*- coding : utf-8 -*-
# Time      : 2021/4/1 14:26
# Author    : MurphyHou
# Proj_Name : Picture_overlay
# File_Name : pic_overlay_test_1.py
# Software  : PyCharm
# Here We Go!


from PIL import Image
import sys

def gen_tank(imgA,imgB):
    imgTank=Image.new("RGBA",(imgA.width,imgA.height))


    for w in range(imgTank.width):
        for h in range(imgTank.height):
            pixelA = imgA.getpixel((w,h))
            pixelB = imgB.getpixel((w,h))


            alpha=255-(pixelA-pixelB)+1
            # alpha=255-(pixelA-pixelB)
            gray=int(255*pixelB/alpha)

            imgTank.putpixel((w,h),(gray,gray,gray,alpha))

    return imgTank

if __name__=="__main__":
    if len(sys.argv) !=4:
        print('python',sys.argv[0],'[正常图片名称]','[隐含图片名称]','[合成图片名称]')

    else:
        imgA = Image.open(sys.argv[1]).convert('L')
        imgB = Image.open(sys.argv[2]).convert('L')


        imgTank=gen_tank(imgA,imgB)
        imgTank.save(sys.argv[3])