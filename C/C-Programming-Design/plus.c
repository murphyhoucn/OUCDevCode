#include <stdio.h>
int main()
{
	int a;
	int b;
	printf("请输入两个整数：");
	scanf("%d %d", &a, &b);
	printf("%d+%d=%d",a, b, a + b);
	return 0;
}