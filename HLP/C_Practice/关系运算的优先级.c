#include <stdio.h>
int main()
{
	printf("%d\n", 7 <= 3 + 4);     //关系运算的优先级低于算数运算的优先级。
	printf("%d\n", 5 > 3 == 6 > 4);
	printf("%d\n", 6>5>4);
	//printf("%d\n", a==b==4);
	//printf("%d\n", a==b> 0);

	return 0;

	//int r = a > 0;   //关系运算的优先级高于赋值运算的优先级。
}