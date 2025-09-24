#include <stdio.h>

int main(void)
{
	int i;

	for (i = 100; i < 1000; i++)
	{
		int a[3];
		int k = 0;

		//printf("%d\n", i);
		
		int temp = i;

		do
		{
			a[k] = temp % 10;
			temp /= 10;
			k++;
		} while (temp>0);

		int result = a[0] * a[0] * a[0] + a[1] * a[1] * a[1] + a[2] * a[2] * a[2];

		if (result == i)
		{
			printf("%d\n", i);
			break;
		}
	}

	return 0;
}