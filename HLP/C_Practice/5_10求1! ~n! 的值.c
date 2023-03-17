#include <stdio.h>

int main()
{
	int n;
	//scanf_s("%d", &n);
	scanf("%d", &n);

	int i;

	int fun(int a);
	printf("Enter n: ");

	for (i = 1; i < n + 1; i++)
	{
		printf("%d!=%d\n", i, fun(i));
	}

	return 0;
}

int fun(int a)
{
	int jiecheng = 1;
	int k;
	for (k = 1; k < a + 1; k++)
	{
		jiecheng *= k;
	}
	return jiecheng;
}