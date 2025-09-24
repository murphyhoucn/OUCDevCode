a=list(input())
print(a)
if a[0]==')':
   print("no")
else:
   s=[]
   
   for i in range(len(a)):
      x=a.pop(0)
      print(x)
      s.append(x)
   print(s)
