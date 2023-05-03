# -*- coding : utf-8 -*-
# Time       : 2021/5/22 18:45
# Author     : MurphyHou
# Proj_Name  : Python_Project
# File_Name  : rename.py
# Software   : PyCharm
# =======Here We Go!=======

import os
import numpy as  np

class BatchRename():
    '''
    批量重命名文件夹中的图片文件

    '''
    def __init__(self):

        self.path = ['F:\logo\CCF 背景底图\car_images_','F:\logo\CCF 背景底图\电视节目','F:\logo\CCF 背景底图\综艺节目']

    def rename(self):
        for j in range(3):
            filelist = os.listdir(self.path[j])
            total_num = len(filelist)
            print(total_num)
            i = 0
            for item in filelist:
                if item.endswith('.jpg'):
                    src = os.path.join(os.path.abspath(self.path[j]), item)
                    dst = os.path.join(os.path.abspath(self.path[j]), str(i) + '.jpg')
                    try:
                        os.rename(src, dst)
                        print ('converting %s to %s ...' % (src, dst))
                        i = i + 1
                    except:
                        continue

            print ('total %d to rename & converted %d jpgs' % (total_num, i))
            # print('i = %d'%(i))

if __name__ == '__main__':
    demo = BatchRename()
    demo.rename()