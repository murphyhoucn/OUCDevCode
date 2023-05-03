# -*- coding : utf-8 -*-
# Author     : MurphyHou
# =======Here We Go!=======

# pip install  matplotlib
# pip install  pillow
# pip install  PaddlePaddle
# pip install paddlehub
# hub install deeplabv3p_xception65_humanseg

import os
# import paddlehub as hub

if __name__ == "__main__":
    # 当前文件夹
    base_dir = os.path.abspath(os.path.dirname(__file__))

    # 加载模型
    humanSegModel = hub.Module(name='deeplabv3p_xception65_humanseg')

    # print('1) 正在提取人体轮廓...')

    # # 获取当前文件目录
    # model_path = os.path.join(base_dir, 'models/')
    # # 获取文件列表
    # lst_image = [model_path + f for f in os.listdir(model_path)]

    # # 人像抠图并放在自动生成的humanseg_output文件夹中
    # results = humanSegModel.segmentation(data={'image': lst_image})