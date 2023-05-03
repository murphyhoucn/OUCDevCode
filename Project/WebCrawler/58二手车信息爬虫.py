
#导入本代码需要用到的模块
import requests
from bs4 import BeautifulSoup
import xlsxwriter

#设置请求头，模仿浏览器访问
headers = {'User-Agent': 'Mozilla/5.0 (Windows NT 10.0; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/80.0.3987.149 Safari/537.36'}
#设置想要爬取的网页链接
url = 'https://nn.58.com/ershouche/?utm_source=market&spm=u-2d2yxv86y3v43nkddh1.BDPCPZ_BT&PGTID=0d100000-0034-d9f8-fe87-cbe415320007&ClickID=4'

response = requests.get(url, headers=headers)
content = response.content
soup = BeautifulSoup(content, 'lxml')
workbook = xlsxwriter.Workbook('58car.xlsx')
#在excel文件中添加一个sheet工作表
worksheet = workbook.add_worksheet()
#获取所有的汽车名称，并存储在一个列表里
name_list = soup.find_all('span',attrs={'class':'info_link'})
#获取所有的汽车描述信息，并存储在一个列表里
describe_list = soup.find_all('div',attrs={'class':'info_params'})
#获取所有的汽车价格信息，并存储在一个列表里
price_list = soup.find_all('div',attrs={'class':'info--price'})
#通过len()方法得到汽车信息个数并进行遍历
for i in range(len(name_list)):
    #在第i行第1列写入第i辆汽车的名称
    worksheet.write(i, 0, name_list[i].get_text().replace("\n", ""))
    # 在第i行第2列写入第i辆汽车的描述信息
    worksheet.write(i, 1, describe_list[i].get_text())
    # 在第i行第3列写入第i辆汽车的价格信息
    worksheet.write(i, 2, price_list[i].get_text().replace("\n", ""))
#数据写入完毕后将表格关闭
workbook.close()







