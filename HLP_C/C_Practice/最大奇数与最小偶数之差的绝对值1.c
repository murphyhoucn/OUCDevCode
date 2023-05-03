#include <stdio.h>

int main()
{
	int a[6];
	int i ;
	int ou = 1000;
	int ji = 0;
	for (i = 0; i < 6; i++)
	{
		scanf_s("%d", &a[i]);
		//scanf("%d", &a[i]);
	}
	/*for (i = 0; i < 6; i++)
	{
		printf("%d\t", a[i]);
	}
	printf("\n");
	*/
	for (i = 0; i < 6; i++)
	{
		if (a[i] % 2 == 0)
		{
			if (a[i] < ou)
			{
				ou = a[i];
			}
		
		}
		else
		{
			if (a[i] > ji)
			{
				ji = a[i];
			}
		}
	}
	int x;
	x = ji - ou;

	//printf("%d\n", ji);
	//printf("%d\n", ou);
	if (x > 0)
	{
		printf("%d", x);
	}
	else
	{
		printf("%d", -x);
	}

	return 0;
}