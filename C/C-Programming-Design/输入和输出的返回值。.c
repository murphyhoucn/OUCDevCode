#include <stdio.h>

int main()
{
	int num;
	int i1 = scanf_s("%i", &num);
	int i2 = printf("%d\n", num);
	printf("%d\n", i1);    //读到的个数

	printf("%d\n", i2);   //输出的个数（包括“\n”）

	return 0;
}