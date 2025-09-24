with open("text1.txt",'r')as fp:
   with open("text2.txt",'w')as fo:
      txt=fp.readlines()
##      print(txt)
      txt=[i.strip().split('\n') for i in txt]
##      print(txt)
      s=[]
      for i in txt:
         s+=i
##      print(s)
      w=''
      for i in s:
         w+=i[::-1]+'\n'
      print(w,file=fo)
