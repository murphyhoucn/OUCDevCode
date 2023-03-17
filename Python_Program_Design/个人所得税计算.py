x=eval(input())
y=x-3500
if y<0:
   print("0")
elif 0<=y<1500:
   print("{}".format(y*0.03))
elif 1500<=y<4500:
   print("{}".format(y*0.1))
elif 4500<=y<9000:
   print("{}".format(y*0.2))
elif 9000<=y<35000:
   print("{}".format(y*0.25))
elif 35000<=y<55000:
   print("{}".format(y*0.3))
elif 55000<=y<80000:
   print("{}".format(y*0.35))
else:
   print("{}".format(y*0.45))
