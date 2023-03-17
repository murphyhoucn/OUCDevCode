with open("input.txt",'r')as fp:
      txt=fp.read()

      txt=txt.split("\n")

      txt=[i.split() for i in txt]

      for i in range(3):
         s=[]
         x=input().split()
         s+=x
         txt.append(s)

      txt.sort(key=lambda x:(int(x[3]),int(x[0])))


      for a,b,c,d in txt:
         print(a,b,c,d)
         print()
