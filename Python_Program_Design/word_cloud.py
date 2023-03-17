# -*- coding : utf-8 -*-
# @Time      : 2020/12/26 15:38
# @Author    : MurphyHou
# @Proj_Name : 单词.py
# @File_Name : word_cloud.py
# @Software  : PyCharm
# Here We Go!
import wordcloud
import matplotlib.pyplot as plt
s='hello word python python python basic basic python great java java'
cloud=wordcloud.WordCloud().generate(s)
plt.imshow(cloud)
plt.axis("off")
plt.show()
cloud.to_file("cloud2.png")
