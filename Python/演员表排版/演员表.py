n=eval(input())
with open ("in1.txt","r")as fp:
   with open("out.txt","w")as fo:
      txt=fp.readlines()
##      print(txt)
      txt=[i.strip().split("\n") for i in txt]
##      print(txt)
      s=[]
      for i in txt:
         s+=i
         
      for i in s:
##         print(i)
         
         a,b=i.split(":")
##         print(a,b)
         print(a.ljust(n),end='',file=fo)
         print(":",end="",file=fo)
         print(b,file=fo)
