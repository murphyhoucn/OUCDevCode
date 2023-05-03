#include<stdio.h>
#include<stdlib.h>
int main()
{
	FILE *fp;
	errno_t err;                                    //不同点1
	char ch, filename[10];
	printf("请输入所用的文件名：");
	scanf_s("%s", filename, 10);
	if ((err = fopen_s(&fp, filename, "w")) != 0)    //不同点2
	{
		printf("无法打开此文件\n");            //如果打不开，就输出打不开
		exit(0);                               //终止程序
	}
	ch = getchar();                            //用来接收最后输入的回车符
	printf("请输入一个准备存储到磁盘的字符串（以#结束）：");
	ch = getchar();                            //用来接收从键盘输入的第一个字符
	while (ch != '#')                          //当输入“#”时结束循环
	{
		fputc(ch, fp);                         //向磁盘输出一个字符
		putchar(ch);                           //将输出的字符显示在屏幕上
		ch = getchar();                        //再接收从键盘输入的一个字符
	}
	fclose(fp);                                //关闭文件
	putchar(10);                               //向屏幕输出一个换行符
	return 0;
}