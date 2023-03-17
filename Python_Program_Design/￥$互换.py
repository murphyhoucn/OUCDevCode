x=input()
a=x[-1]
##print(a)
if a=="$":
   y=int(x[:-1])*6.32
   print("{:.2f}￥".format(y))
if a=="￥":
   y=int(x[:-1])/6.32
   print("{:.2f}$".format(y))
