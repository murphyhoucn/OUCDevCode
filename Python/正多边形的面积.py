import math
n=eval(input())
s=eval(input())
area=(n*s**2)/(4*math.tan(math.pi/n))
print("正{}边形的面积为：{:.2f}".format(n,area))
