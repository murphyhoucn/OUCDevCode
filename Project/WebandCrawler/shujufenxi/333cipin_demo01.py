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