# 微信公众号：chimuyhs 【可爱丸学python】 关注并回复：源码  即可获取源代码
# QQ学习交流群：983460742

#导入需要用到的模块
import pandas as pd
import matplotlib.pyplot as plt
from matplotlib import rcParams
rcParams['font.family'] = 'simhei'

#读取目标表格文件，并用people代表读取到的表格数据
people = pd.read_excel('test.xlsx')
#x轴是姓名，y轴是年龄，让直方图排序显示，默认升序
people.sort_values(by='年龄',inplace=True)
#在控制台中输出表格数据
print(people)
#将直方图颜色统一设置为蓝色
people.plot.bar(x='姓名',y='年龄',color='orange')
#旋转X轴标签，让其横向写
plt.xticks(rotation=360)
plt.show()