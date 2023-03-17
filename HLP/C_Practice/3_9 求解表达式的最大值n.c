#include <stdio.h>

int main(void)
{
	int m;
	printf("m=");
	//scanf_s("%d", &m);
	scanf("%d", &m);
	int fun(int x);

	int sum = 0;

	int i;
	int j;


	for (i = 0; sum <= m; i++)
	{
		int temp = 0;
		for (j = 1; j <= i; j++)
		{
			temp+=j;
		}
		//printf("temp=%d\n", temp);
		sum += temp;
		//printf("sum=%d\n", sum);
	}

	printf("n=%d\n", i-2);

	return 0;
	
}