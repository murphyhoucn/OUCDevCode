f=input()
with open(f,"w") as fo:
   while True:
      x=input()
      if "@" in x:
         a,b=x.split("@")
         print(a,file=fo)
         print(b,file=fo)
         break
      else:
         print(x,file=fo)
