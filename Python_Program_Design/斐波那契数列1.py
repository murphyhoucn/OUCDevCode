def fib(x,y):
   a,b=1,1
   s=''
   while True:
      a,b=b,a+b
      if b>=m:
         s+="{},".format(b)
      if a+b>n:
         break
   print(s[:-1])

   
m,n=eval(input())
fib(m,n)


