#include <stdio.h>

int main(void)
{
	int m;
	printf("Input m:");
	scanf_s("%d", &m);
	//scanf("%d", &m);
	int sum = 0;
	int i=1;
	int j = 0;
	int a[10000];

	while (sum <= m)
	{
		sum += i;
		//printf("%d\t", sum);
		a[j] = i;
		i++;
		j++;
	} 


	for (int k = 0; k < j; k++)
	{
		printf("%d\n", a[k]);
	}


	if (j > 2)
	{
		for (j = 0; j < i - 1; j++)
		{
			if (j == 0 || j == 1)
			{
				printf("%d", a[j]);
				printf("+");
			}
			else if (j == 2)
			{
				printf("...");
			}
			else if (j == i - 3)
			{
				printf("+");
				printf("%d", a[j + 1]);
			}
			else if (j == i - 2)
			{
				printf(">%d", m);
			}
		}
	}
	else
	{
		for (j = 0; j < i - 1; j++)
		{
			printf("%d", a[j]);
			if (j < i - 2)
			{
				printf("+");
			}
			else
			{ 
				printf(">%d", m);
			}
		}
	}
	
	return 0;
}