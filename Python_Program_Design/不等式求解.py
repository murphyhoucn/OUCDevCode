m=eval(input())
s=0
n=1
while s<m:
   for i in range (1,n+1):
      s+=i
   n+=1
   print(s)
n=n-2   
print("n={}".format(n))
   

