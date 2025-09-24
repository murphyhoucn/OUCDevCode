#include <stdio.h>

int main(void)
{
	int m;
	int n;
	printf("Input m: ");
	scanf("%d", &m);
	printf("Input n: ");
	scanf("%d", &n);

	int i;
	int j;
	int count = 0;

	for (i = m+1; i < n; i++)
	{
		int flag = 0;

		for (j = 2; j < i; j++)
		{
			if (i%j == 0) { flag = 1; }
		}

		if (flag == 0)
		{
			count++;
			printf("%4d", i);


			if (count % 6 == 0)
			{
				printf("\n");
				//printf(" ");
			}
			/*else
			{
				printf(" ");
			}*/
		}
	}

	return 0;
}