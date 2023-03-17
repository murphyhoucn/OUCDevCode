#include <stdio.h>

int main(void)
{
	int n;
	//scanf_s("%d", &n);
	scanf("%d", &n);
	int i;
	int s[100000][2];


	for (i = 0; i < n; i++)
	{
		//scanf_s("%d %d", &s[i][0], &s[i][1]);
		scanf("%d %d", &s[i][0], &s[i][1]);
	}

	for (i = 0; i < n; i++)
	{
		printf("%d", s[i][0] + s[i][1]);
		if (i < n - 1)
		{
			printf("\n");
		}
		
	}
	

	return 0;

}