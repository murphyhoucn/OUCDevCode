# -*- coding : utf-8 -*-
# Time       : 2021/9/13 21:33
# Author     : MurphyHou
# Proj_Name  : news_assistant
# File_Name  : demo01.py
# Software   : PyCharm
# =======Here We Go!=======


import newspaper

url = 'http://www.news.cn/2021-09/12/c_1127852636.htm'
article = newspaper.Article(url,language = 'zh')


article.download()
article.parse()

print(article.title)
print(article.text)
# print(article.authors)
print(article.publish_date)