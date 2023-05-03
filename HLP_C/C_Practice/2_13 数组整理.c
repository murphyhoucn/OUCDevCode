#include <stdio.h>

#define N 30

int main(void)
{
	int array[N];

	int array_even[N];
	int array_odd[N];


	int n;
	printf("Enter n:");
	scanf_s("%d", &n);

	int i;
	int j;
	int k;

	printf("Enter %d number:", n);

	for (i = 0; i <n ; i++)
	{
		scanf_s("%d", &array[i]);
	}

	for (i = 0,j=0,k=0; i < n; i++)
	{
		if (array[i] % 2 == 0)
		{
			array_even[j] = array[i];
			j++;
		}
		else
		{
			array_odd[k] = array[i];
			k++;
		}
	}
	printf("result num:");
	for (i = 0; i < k; i++)
	{
		printf("%d ", array_odd[i]);
	}
	
	for (i = 0; i < j; i++)
	{
		printf("%d ", array_even[i]);
	}
	
	return 0;
}