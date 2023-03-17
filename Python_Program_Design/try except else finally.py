try:
   x=eval(input())
   if x%2==0:
      print("oushu")
   else:
      print("jishu")
except:
   print("wrong")# 出错时执行
else:
   print("nomal")#只有不出错时，作为奖励执行
finally:
   print("over")  #无论是否出错，都执行
