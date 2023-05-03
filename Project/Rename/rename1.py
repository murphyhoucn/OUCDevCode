import os 

def new_file(file_dir):
    """新建文件，并填充内容，用于测试"""
    for i in range(1, 6):
        with open("文件%d.txt" %i,  "w") as fout:
            fout.write("这是文件%d的内容" %i)
            
def get_filePath_fileName_fileExt(fileUrl):
    """
    param fileUrl
    return 文件路径，文件名，后缀名
    """
    filepath, file = os.path.split(fileUrl)
    filename, extension = os.path.splitext(file)
    return filepath, filename, extension

def get_fileName(file_dir):
    """获取文件名，并保存到文本中"""
    for root, dirs, files in os.walk(file_dir): 
      #print(root) #当前目录路径
      #print(dirs) #当前路径下所有子目录
      #print(files) #当前路径下所有非目录子文件
      with open("文件名.txt", "w") as fout:
          for file in files:
              file = os.path.splitext(file)[0]
              print(file)
              fout.write(str(file)+'\n') 

path = os.getcwd()  # 获取当前目录      
new_file(path)      # 新建文件
get_fileName(path)  # 获取文件名

