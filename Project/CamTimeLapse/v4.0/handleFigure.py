# -*- coding : utf-8 -*-
# Author     : MurphyHou
# =======Here We Go!=======

# pip install  matplotlib
# pip install  pillow
# pip install  PaddlePaddle
# pip install paddlehub
# hub install deeplabv3p_xception65_humanseg


# paddle-bfloat           0.1.7
# paddle2onnx             1.0.1
# paddlefsl               1.1.0
# paddlehub               2.3.0
# paddlenlp               2.4.0
# paddlepaddle            2.3.2
# hub install deeplabv3p_xception65_humanseg==1.1.2



import os
import paddlehub as hub
import cv2

def handlefigure(picname):

    # 加载模型
    human_seg = hub.Module(name='deeplabv3p_xception65_humanseg')

    img = cv2.imread(picname)

    picname = picname.replace('fro', 'seg')

    print('1) 正在提取人体轮廓...')
    results = human_seg.segmentation(images = [img], visualization=True, use_gpu=False, output_dir = picname[:-25])
    print('2) 提取人体轮廓完成。')
    for result in results:
        # print(result['save_path'])
        oldname = result['save_path']
    os.renames(oldname, picname[:-4] + '_seg' + '.jpg')


# if __name__=='__main__':
#     picname = r'D:\Develop_Python\Progect\CamTimeLapse\v4.0\2022_10_08\fro\2022_10_08__22_28_49.jpg'
#     handlefigure(picname)







# 案例学习

# import paddlehub as hub
# import numpy as np
# import cv2
# import time
# from PIL import Image

# if __name__ == '__main__':
#         #第一次运行会自动下载deeplabv3p_xception65_humanseg模型，会慢一点
#     human_seg = hub.Module(name="deeplabv3p_xception65_humanseg")
#     src_img = cv2.imread('/Users/luoye/Downloads/WechatIMG281.jpeg')
#     #visualization默认是false，当设置为true时会生成分割后的图片并保存在humanseg_output目录下
#     results = human_seg.segmentation(images=[src_img], visualization=True)
#     for result in results:
#         image_alpha = result['data'].astype(np.uint8)
#         #这里我把背景换成了红色
#         img_bg = Image.new('RGBA', (src_img.shape[1], src_img.shape[0]), (255, 0, 0, 255))
#         image_temp = Image.fromarray(cv2.cvtColor(src_img, cv2.COLOR_BGR2RGBA))
#         img_bg.paste(image_temp, (0, 0), Image.fromarray(image_alpha))

#         path = "./" + str(int(time.time_ns() / 1000)) + ".png"
#         img_bg.save(path)
#         print("add successful path=" + path)






## 官方演示代码
# https://www.paddlepaddle.org.cn/hubdetail?name=deeplabv3p_xception65_humanseg&en_category=ImageSegmentation

# import paddlehub as hub
# import cv2

# human_seg = hub.Module(name="deeplabv3p_xception65_humanseg")
# result = human_seg.segmentation(images=[cv2.imread('/PATH/TO/IMAGE')])

## API
# def segmentation(images=None,
#                 paths=None,
#                 batch_size=1,
#                 use_gpu=False,
#                 visualization=False,
#                 output_dir='humanseg_output')


## 参数
# images (list[numpy.ndarray]): 图片数据，ndarray.shape 为 [H, W, C]，BGR格式；
# paths (list[str]): 图片的路径；
# batch_size (int): batch 的大小；
# use_gpu (bool): 是否使用 GPU；
# visualization (bool): 是否将识别结果保存为图片文件；
# output_dir (str): 图片的保存路径。

##返回
# res (list[dict]): 识别结果的列表，列表中每一个元素为 dict，关键字有 'save_path', 'data'，对应的取值为：
    # save_path (str, optional): 可视化图片的保存路径（仅当visualization=True时存在）；
    # data (numpy.ndarray): 人像分割结果，仅包含Alpha通道，取值为0-255 (0为全透明，255为不透明)，也即取值越大的像素点越可能为人体，取值越小的像素点越可能为背景。


