#include<stdio.h>
int main()
{
	long long a, b, c, t, n, k;
	//scanf_s("%lld %lld", &a, &b);
	scanf("%lld %lld", &a, &b);
	n = b;
	k = a;
	if (a < b)
	{
		t = a;
		a = b;
		b = t;
	}
	c = a % b;
	while (c != 0)
	{
		a = b;
		b = c;
		c = a % b;
	}

	printf("%lld\n", ((k / b - 1) + (n / b - 1)));
	return 0;
}
