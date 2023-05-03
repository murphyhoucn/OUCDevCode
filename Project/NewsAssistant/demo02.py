# -*- coding : utf-8 -*-
# Time       : 2021/9/13 21:40
# Author     : MurphyHou
# Proj_Name  : news_assistant
# File_Name  : demo02.py
# Software   : PyCharm
# =======Here We Go!=======


import newspaper

# url = 'http://www.news.cn/politics/ej.htm?page=szlb'
url = 'http://opinion.people.com.cn/GB/223228/index.html'
paper = newspaper.build(url,memoize_articles=False,language='zh')

print("amount:%s" % paper.size())

for article in paper.articles:
    try:
        article.download()
        article.parse()
    except Exception:
        continue
    else:
        print(article.title)
