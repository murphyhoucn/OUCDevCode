#include <stdio.h>
int main()
{
	int a = 0;
	int b = 0;
	printf("����������������");
	scanf("%d %d", &a, &b);

	int max;

	if (a > b) {
		max = a;
	}
	else {
		max=b;
	}
	printf("������ǣ�%d",max);
	return 0;
}