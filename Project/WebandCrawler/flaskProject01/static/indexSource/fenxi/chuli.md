# 一、将.csv文件预处理

![image-20220824200320564](https://murhyimgur.oss-cn-beijing.aliyuncs.com/ouclesson/image-20220824200320564.png)

# 二、将.csv文件转换为.txt文件

``` markdown
1.在python中打开导出的csv文件
2.读取csv文件中每列信息
3.遍历文件中的有用信息
4.将有用信息输出为txt文件
```

``` python
# -*- coding : utf-8 -*-
# Author     : MurphyHou
# =======Here We Go!=======
import pandas as pd

path = 'D:\Temp\OUC\shuji\\'
filename = "5yinyue"
format1 = '.csv'
format2 = '.txt'

print(path+filename)
with open(path+filename+format1,'r',encoding='gbk') as f:
    data = pd.read_csv(f)
    comment_data = data[['yinyuepinglun']]
    print(data[['yinyuepinglun']])
    with open(path+filename+format2,'a+',encoding='gbk') as ft:
        for line in comment_data.values:
            str1 = ''.join(line)
            print(str1)
            ft.write(str1 + '\n')
```





# 三、制作词云图

``` markdown
1.读入输出的txt文件
2.读入背景图片
3.用jieba函数实现文件的分词转换
4.用集合实现屏蔽某些关键词
5.用WordCloud词云制作
```
``` python
# -*- coding : utf-8 -*-
# Author     : MurphyHou
# =======Here We Go!=======

import jieba
import numpy as np
from PIL import Image
from wordcloud import WordCloud
# import matplotlib.pyplot as plt

# txt_filename=r"D:\Pycharm\QQ_comminication_record\Steam.txt"
txt_filename=r"D:\Temp\OUC\shuji\5yinyue.txt"
print()
# pic_filename=r"D:\Develop_Python\Progect\WordCloud\star1.png"
pic_filename=r"D:\Temp\OUC\shuji\tupian\yinyue5.jpeg"
print()

font_filename=r"C:\Windows\Fonts\Dengb.ttf"

#聊天记录获取
with open (txt_filename,'r',encoding='gbk') as f:
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
```



# 四、统计词频

``` markdown
1.读入txt文件
2.屏蔽无意义词汇
3.统计top30关键词出现的次数
4.输出柱状图
```
``` python
# -*- coding : utf-8 -*-
# Author     : MurphyHou
# =======Here We Go!=======
from matplotlib.font_manager import FontProperties
from collections import Counter
import jieba.posseg as psg
from pylab import *
 
mpl.rcParams['font.sans-serif']=['SimHei'] # X 轴可以显示中文
mpl.rcParams['axes.unicode_minus']= False # X 轴可以显示中文
 
font = FontProperties(fname=r'C:\Windows\Fonts\Dengb.ttf',size=14)
txt_filename=r"D:\Temp\OUC\shuji\5yinyue.txt"
f3 = open(txt_filename,'r').read()

nowords = ['x','uj','a','ul', 'p','d', 'v','zg','m',
'ug','i', 'f', 'ad','nz', 'r', 'r', 'ns','q','t','c',
'我', '的', '了', '是', '也', '你', '这个', '在', '就', 
'都', '现在', '时候', '还有', '有', '不', '视频', '时候', '不要'
]
 
wods =[x.word for x in psg.cut(f3) if len(x.word)>=2 and (x.flag) not in nowords]
word_count = Counter(wods)
print(word_count)
 
x=[x[0] for x in word_count.most_common(30)] #统计top20个关键字
y=[x[1] for x in word_count.most_common(30)] #统计top20个关键字出现的次数
fig = plt.figure()
plt.grid(False)
#c = np.random.randint(0,1,len(y))
plt.bar(x,y,color='lightskyblue')
plt.xlabel('词汇',FontProperties=font)
plt.ylabel('数量',FontProperties=font)
plt.title('哔哩哔哩“音乐区”词频统计柱状图',FontProperties=font)
plt.show()
```



