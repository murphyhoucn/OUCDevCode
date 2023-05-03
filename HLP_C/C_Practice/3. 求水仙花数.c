#include <stdio.h>

int main(void)
{
	void decom(int* p0);
	int n;
	//scanf_s("%d", &n);
	scanf("%d", &n);


	int i;


	for (i = 100; i < n + 1; i++)
	{
		int* p;
		p = &i;

		decom(p);
	}

	return 0;
}

void decom(int* p0)
{
	//printf("i=%d\n", *p0);
	int a;
	int b;
	int c;
	int temp1 = *p0;
	int temp2 = *p0;

	a = temp1 / 100;
	temp1 %= 100;

	b = temp1 / 10;
	temp1 %= 10;

	c = temp1;

	//printf("%d %d %d\n", a, b, c);
	int sum = a * a * a + b * b * b + c * c * c;
	if (sum == temp2)
	{
		printf("%d\n", temp2);
	}
}