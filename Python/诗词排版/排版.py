with open("input.txt",'r',encoding='utf-8-sig')as fp:
   with open ("output.txt",'w')as fo:
      txt=fp.readlines()
      txt=[i.strip().split('\n') for i in txt]
      s=[]
      for i in txt:
         s+=i

         
      for i in s:
         a,b=i[:-1].split('，')
         print(a,file=fo)
         print(b,file=fo)
