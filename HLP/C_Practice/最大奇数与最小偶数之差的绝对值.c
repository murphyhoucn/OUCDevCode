#include <stdio.h>
int main()
{
	int a[6];
	int i, j, temp;
	int ji[6] = { 0 };
	int ou[6] = { 0 };
	int c_o = 0;
	int c_j = 0;
	for (i = 0; i < 6; i++)
	{
		//scanf_s("%d", &a[i]);
		scanf("%d", &a[i]);
	}

	for (i = 0; i < 6; i++)
	{
		if (a[i] % 2 == 0)
		{
			ou[i] = a[i];
			c_o++;
		}
		else
		{
			ji[i] = a[i];
			c_j++;
		}
	}

	for (i = 0; i < 5; i++)
	{
		for (j = 1; j < 6 - i; j++)
		{
			if (ou[j] < ou[j-1])
			{
				temp = ou[j - 1];
				ou[j - 1] = ou[j];
				ou[j] = temp;
			}
		}
	}
	for (i = 0; i < 5; i++)
	{
		for (j = 1; j < 6 - i; j++)
		{
			if (ji[j] > ji[j - 1])
			{
				temp = ji[j - 1];
				ji[j - 1] = ji[j];
				ji[j] = temp;
			}
		}
	}

	/*for (i = 0; i < 6; i++)
	{
		printf("jishu:%d\n", ji[i]);
	}
	for (i = 0; i < 6; i++)
	{
		printf("oushu:%d\n", ou[i]);
	}
	*/


	int x = 0;
	x = ji[0] - ou[6-c_o];
	//printf("%d\n", ji[0]);
	//printf("%d\n", ou[6-c_o]);
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