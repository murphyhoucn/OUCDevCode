# -*- coding : utf-8 -*-
# Time      : 2021/2/11 12:16
# Author    : MurphyHou
# Proj_Name : WordCloud
# File_Name : wordcloud_demo_1.py
# Software  : PyCharm
# Here We Go!

import jieba
import numpy as np
from PIL import Image
from wordcloud import WordCloud
# import matplotlib.pyplot as plt


# txt_filename=input("输入导出的聊天记录的txt文件地址：")#聊天记录获取
# txt_filename=r"D:\Pycharm\QQ_comminication_record\Steam.txt"
txt_filename=r"D:\Develop_Python\Progect\WordCloud\shuju.txt"
print()

# pic_filename=input("输入背景图片地址：")# 图片获取
# pic_filename=r"D:\Pycharm\QQ_comminication_record\star1.png"
pic_filename=r"D:\Develop_Python\Progect\WordCloud\star1.png"
print()

# font_filename=input("输入字体的地址(如果不知道如何获取地址，可输入该地址:C:\Windows\Fonts\Dengb.ttf)：")# 字体获取
font_filename=r"C:\Windows\Fonts\Dengb.ttf"

#聊天记录获取
with open (txt_filename,'r',encoding='utf-8') as f:
    com_record=f.read()

# 图片获取
ground=np.array(Image.open(pic_filename))


#用集合实现屏蔽某些单词

exclude=set()
flag=True

print()

ff=input("是否需要添加屏蔽的关键词？(Y/N):")
ff=ff.upper()
if ff=='Y':
    while flag:
        print()
        ex_in = input("请输入需要屏蔽的关键词（输入QUIT可停止添加屏蔽关键词）：")

        if ex_in == "QUIT":
            flag = False
        else:
            #exclude.update(ex_in)
            exclude.add(ex_in)
    print()
    print("屏蔽关键词集合:")
    print(exclude)
else:
    print()

    print("屏蔽关键词集合为空")

#用jieba函数实现文件的分词转换
sep_list=jieba.lcut_for_search(com_record)##（结巴有三种方式，全模式、精确模式、搜索引擎模式）
sep_list=" ".join(sep_list)

#词云制作部分
wc=WordCloud\
(
    scale=4,#调整图片大小
    font_path=font_filename,#使用的字体库
    max_words=500,  #词云显示的最大词数
    margin=2,#字体之间的间距
    mask=ground,#背景图片
    background_color='white', #背景颜色

    max_font_size=200,
    min_font_size=1,

    collocations=False, #避免重复单词
    width=1600,height=1200, #图像宽高，字间距

    stopwords=exclude#屏蔽的内容
)


wc.generate(sep_list) #制作词云



save_file_name=input("WordCloud将以PNG格式保存，请输入保存的名称：")
print()

save_file_name=save_file_name.lower()
save_file_name=save_file_name+".png"
wc.to_file(save_file_name) #保存到当地文件

print()

print("WordCloud制作完成！")
print()
fffff=input("输入任意字符+回车即可退出：")