shift+右键
打开powershell

pyinstaller -F 名称.py

--------------------------------------------------------------------------


pyinstaller 打包出现第三方库FileNotFoundError的一般解决方法
https://blog.csdn.net/lucyTheSlayer/article/details/92795220


https://zhuanlan.zhihu.com/p/162237978

https://www.cnblogs.com/xiao987334176/p/14143930.html
``` bash
打开cmd窗口，进入test目录，执行：

pyinstaller -F -c test.py
注意：test.py是主程序
```

我们可以看到，后面有一个黑洞洞的窗口，这就有点尴尬了，所以，我们的打包命令也要变一下。

7、执行 pyinstaller -F -wsetup.py 多加-w以后，就不会显示黑洞洞的控制台了，这里就不做演示啦！

8、但是我们打包的exe，我们的图标呀，实在是有点丑陋，默认的，没有一点自己的风格，那么，我们应该怎么改一下呢？

执行命令:pyinstaller -F -w-i wind.ico setup.py，如下图所示。




https://blog.csdn.net/weixin_30904593/article/details/95743055