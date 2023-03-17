#include <stdio.h>
int main()
{
	int a, b;
	printf("请输入两个整数：");
	scanf("%d %d", &a, &b);

	int max = b;
	if (a > b) {
		max = a;
	}
	printf("大的那个是%d。", max);
	return 0;
}