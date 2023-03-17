#include <stdio.h>

int main(void)
{
	enum week{ ss=7,m=1,t,w,tt,f,s };

	//week 枚举类型

	// m,t.... 枚举元素

	enum week weekday;
	enum week weekend;
	//声明 枚举变量

	//enum 枚举名 {枚举元素}；

	//每一个枚举元素代表一个整数
	//枚举元素=枚举常量

	printf("%d", weekday);

	return 0;


}