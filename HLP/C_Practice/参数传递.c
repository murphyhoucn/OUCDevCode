#include <stdio.h>

void cheer(int i)
{
	printf("cheer   %d\n", i);
}

int main()
{
	double f = 3.6;
	cheer(2);
	cheer(2.6);  //2.6不是doubule 类型，存在一个从doubel到int 的转化
	cheer(f);
	//调用函数时给的值与参数的类型不匹配的C语言传统上最大的漏洞
	return 0;
}