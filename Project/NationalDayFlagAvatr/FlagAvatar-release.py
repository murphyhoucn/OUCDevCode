from PIL import Image


# 读取图片
name=input("请输入头像名称：")
form=input("请输入文件格式（jpg/png）：")
portrait = Image.open(str(name)+'.'+str(form))

The_flag_of_China = Image.open('国旗.png')

# 获取国旗的尺寸
x,y = The_flag_of_China.size


# 关于裁切尺寸的问题具体看下文的关于cut方法的坐标图示。
cut=(50, 30, 550, 530)
area = The_flag_of_China.crop(cut)


# 测试代码：生成裁切后的图像，看一下效果，如果裁切效果不好的话，重新修改上面的cut尺寸（类似反馈doge）！
# cut_name='flag.png'
# area.save(cut_name)

# 头像的尺寸
w,h = portrait.size

# 国旗尺寸变成头像尺寸
area = area.resize((w,h))

# 渐变色设置
for i in range(w):
    for j in range(h):
        pixelcolor = area.getpixel((i, j))
        parameter = 260-i//3   #参数都是多次运行程序测试出来的，可以根据需要进行更改
        if parameter < 0:
            parameter=0
        pixelcolor = pixelcolor[:-1] + (parameter,)
        area.putpixel((i, j), pixelcolor)  
# //：向下取整做除法
# getpixel函数是用来获取图像中某一点的像素的RGB颜色值，getpixel的参数是一个坐标点（x,y）;
#putpixel函数是用来在指定位置画一像素，其中(x,y)是坐标，pixelcolor是像素的颜色.


# 粘贴到头像并保存 
portrait.paste(area,(0,0),area)
portrait.save(str(name)+'_flag.png',quality=100, subsampling=0)

