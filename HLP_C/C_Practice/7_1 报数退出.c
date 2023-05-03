# include<stdio.h>
#define M 1000

int main()
{
	int * fun(int m, int array[]);

	int m;
	int i;

	printf("Input numbe:");
	scanf("%d", &m);

	int *pointer;
	int array[M];

	pointer = fun(m, array);

	printf("Last exit person is %d\n", *(pointer + m - 1));
	printf("Exit order:");

	for (i = 0; i < m; i++)
	{
		if (i % 10 == 0)
			printf("\n");
		printf("%d ", *(pointer + i));
	}

	return 0;
}


int * fun(int m, int *p)
{
	int a[M];

	int i, po = 0;

	for (i = 0; i < m; i++)
	{
		a[i] = i + 1;
	}
		
	int count = 0;

	int num_ans = 0;

	while (1)
	{
		int pp = po % m;
		po++;

		if (a[pp] == 0)
		{
			continue;
		}

		count++;

		if (count == 3)
		{
			count = 0;
			p[num_ans] = a[pp];
			num_ans++;
			a[pp] = 0;
		}

		if (num_ans == m)
		{
			break;
		}
			
	}
	return p;
}