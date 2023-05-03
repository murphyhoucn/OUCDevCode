# -*- coding : utf-8 -*-
# Time       : 2021/6/7 11:00
# Author     : MurphyHou
# Proj_Name  : Python_Project
# File_Name  : RSA.py
# Software   : PyCharm
# =======Here We Go!=======
import math
def isPrime(n):
  if n <= 1:
    return False
  for i in range(2, int(math.sqrt(n)) + 1):
    if n % i == 0:
        return False
  return True
if __name__ == '__main__':
    a=int(input("input:"))
    for i in range(a):
        for j in range(a):
            # print("test:{}*{}".format(i, j))
            if i*j==a:
                if (isPrime(i)&isPrime(j)):
                    print("*****************************************{}*{}={}".format(i,j,a))
