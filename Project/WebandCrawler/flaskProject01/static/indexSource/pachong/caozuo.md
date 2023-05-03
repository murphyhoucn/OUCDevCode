# 项目构建

- 预备环境

``` bash
pip install scrapy
```

- 项目建立

``` bash
scrapy startproject Bilibili
```

- 爬虫准备

``` bash
在setting.py中设置爬虫配置文件
```

#  网络抓包

- 尝试

``` markdown
使用浏览器开发者工具，查看网络源代码，定位B站评论位置，根据源代码目录结构使用xpath确定数据路径，使用Python爬虫对数据进行爬取。
失败：由于B站评论反爬机制的存在，对B站评论的爬取不能连续进行。
```

- 确定

``` markdown
使用浏览器开发者工具，利用网络抓包，抓取B站评论API，对所有的API进行分析，获取评论相关信息。
使用Python的JSON解析工具对B站API中的JSON数据进行解析，获取所需数据。
```

![zhuabao](https://murhyimgur.oss-cn-beijing.aliyuncs.com/ouclesson/zhuabao.jpg)

在爬虫程序中，编写B站评论API获取循环算法，得到B站评论的每一页的API。

``` python
index = response.url.find("next=")
str1 = response.url[index:]
# print(str1)
index2 = str1.find("=")
# print(index2)
str2 = str1[(index2 + 1):]
# print(str2)
n = int(str2)
n += 1
```





# JSON数据解析



## JSON数据分析

分析JSON数据的结构，找到数据规律。


![image-20220824182145314](https://murhyimgur.oss-cn-beijing.aliyuncs.com/ouclesson/image-20220824182145314.png)



## 解析JSON数据获取评论信息

在爬虫程序中，编写JSON解析的Python代码，实现对JSON数据的解析。

``` python
resjson = response.json()
# print(resjson)
data = resjson["data"]["replies"]
```

# 写入CSV文件

在爬虫程序中，通过Python文件写入，将解析出来的JSON数据写入到CSV文件中。

``` python
        with open('yinyue_guyongzhe.csv', 'a+', encoding='gbk', newline='') as f:
            cf = csv.writer(f)
            cf.writerow((
                            item["uname"],
                            item["mid"],
                            item["sign"],
                            item["message"]
                            ))
```









