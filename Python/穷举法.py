min0=5
for c in range(13):
   for d in range(11):
      s=19*c+23*d
      if s<=235:
         sheng=235-s
         if sheng<min0:
            min0=sheng
            x=c
            y=d
print("{} {} {}".format(x,y,min0))
