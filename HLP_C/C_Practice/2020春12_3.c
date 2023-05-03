#include <stdio.h>

int main(void)
{
	int a[15];
	int odd[15] = {0};
	int even[15] = { 0 };
	int odd_count=0;
	int even_count=0;


	int i;


	for (i = 0; i < 15; i++)
	{
		scanf_s("%d", &a[i]);
	}
	/*for (i = 0; i < 15; i++)
	{
		printf("%d\n", a[i]);
	}*/


	for (int j = 0; j < 15; j++)
	{
		if (a[j] % 2 != 0)
		{
			odd[j] = a[j];
			odd_count++;
		}
		else
		{
			even[j] = a[j];
			even_count++;
		}
	}
	//printf("%d\n", odd_count);
	//printf("%d\n", even_count);

	float odd_sum = 0;

	for (i = 0; i < 15; i++)
	{
		//printf("%d\n", odd[i]);

		odd_sum += odd[i];
		//printf("%f\n", odd_sum);
	}
	printf("%.2f\n", odd_sum / odd_count);

	float even_sum = 0;
	for (i = 0; i < 15; i++)
	{
		even_sum += even[i];
	}
	if (even_count == 0) { even_count = 1; }
	printf("%.2f\n", even_sum / even_count);

	return 0;

}