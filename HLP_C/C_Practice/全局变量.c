#include <stdio.h>

int f(void);

int gall = 12;

//int gall;  //不做初始化时，全局变量的值是0
//int gall = f();   //只能用编译时刻已知的值来初始化全局变量

//int gall2 = gall;   //这种初始化方法不对（除非gall是const类型的（但不推荐这样的写法，因为全局变量的初始化顺序可能很复杂））

int main(int argc, char const *argv[])       //__func__ 表示函数的名称  是"字符串"类型——>%s
{
	printf("①in %s gall=%d\n", __func__, gall);         //12  ①
	f();
	printf("④agn in %s gall=%d\n", __func__, gall);     //14   ④

	return 0;
}

int f(void)
{

	//int gall = 1;   //函数内部的本地变量和全局变量重名时，全局变量被隐藏
	printf("②in %s gall=%d\n", __func__, gall);      //12   ②
	gall += 2;
	printf("③agn in %s gall=%d\n", __func__, gall);    //14   ③
	return 0;
}