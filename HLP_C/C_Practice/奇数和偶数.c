#include <stdio.h>

int main(void)
{
	int i;
	int odd_sum = 0;
	int even_sum = 0;
	int odd_count = 0;
	int even_count = 0;
	for (i = 0; i < 16; i++)
	{
		int temp;
		//scanf_s("%d", &temp);
		scanf("%d", &temp);
		if (temp % 2 == 0)
		{
			even_sum += temp;
			even_count++;
		}
		else
		{
			odd_sum += temp;
			odd_count++;
		}


	}
	printf("odd:%d,", odd_sum / odd_count);

	printf("even:%d", even_sum / even_count);
	return 0;
}