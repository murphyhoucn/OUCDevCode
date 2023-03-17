#include <stdio.h>

int f(void);

int main(int argc, char const *arv[])
{
	f();
	f();
	f();
	return 0;

}

int f(void)
{
	//int all = 1;
	static int all = 1;//静态本地变量 ：仅对all 定义一次，再次进入函数的时候，初始值是上次进入函数后的最后的值。
	printf("in %s all=%d\n", __func__, all);
	all += 2;
	printf("agn in %s all=%d\n", __func__, all);
	printf("\n");
	return 0;
}