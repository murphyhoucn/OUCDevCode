#include <stdio.h>
#define N 100
int main(void)
{
	long int x;
	scanf("%ld", &x);

	int array[N] = {0};

	int i=0;
	int x1 = x;

	while (x1 > 0)
	{
		int temp = x1 % 10;
		//printf("%d\n", temp);
		if (temp % 2 == 0)
		{
			array[i] = temp;
			i++;
		}
		x1 /= 10;
		
	}
	//printf("i=%d\n", i);

	int j;

	for (j = i-1; j >= 0; j--)
	{
		printf("%d", array[j]);
	}
	return 0;


}