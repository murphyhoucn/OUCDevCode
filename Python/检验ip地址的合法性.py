x=input()
x=x.split(".")
##print(x)
l=len(x)
s=0
if l==4:
   for i in x:
      if 0<=int(i)<=255:
         s+=0
      else:
         s+=1
   if s==0:
      print("yes")
   else:
      print("no")
else:
   print("no")
      
