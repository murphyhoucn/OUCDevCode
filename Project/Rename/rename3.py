# 将1-9 变成 01-09
import os
path=input('请输入文件路径：')  

#获取该目录下所有文件，存入列表中
fileList=os.listdir(path)
print(fileList)

n=0
for i in fileList:
    
    #设置旧文件名（就是路径+文件名）
    oldname=path+ os.sep + fileList[n]   # os.sep添加系统分隔符
    
    #设置新文件名
    newname=path + os.sep +'0'+str(n+1)+'.JPG'
    
    os.rename(oldname,newname)   #用os模块中的rename方法对文件改名
    print(oldname,'======>',newname)
    
    n+=1