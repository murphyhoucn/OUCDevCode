#include <stdio.h>
#include <math.h>

int main(void)
{
	int x;
	int y;
	scanf("%d %d", &x, &y);

	long double zz = pow((double)x, (double)y);
	//printf("%lf\n", zz);
	//printf("%d\n", (long int)zz);

	if (zz >= 1000)
	{
		if (((long int)zz % 1000) == 0)
		{
			printf("%d^%d的最后三位是：000", x, y);
		}
		else
		{
			printf("%d^%d的最后三位是：%d\n", x, y, (long int)zz % 1000);

		}


	}
	else if (zz >= 100)
	{
		printf("%d^%d的最后三位是：%d\n", x, y, (long int)zz);
	}
	else if (zz >= 10)
	{
		printf("%d^%d的最后三位是：0%d\n", x, y, (long int)zz);
	}
	else if (zz >= 1)
	{
		printf("%d^%d的最后三位是：00%d\n", x, y, (long int)zz);
	}



	return 0;
}