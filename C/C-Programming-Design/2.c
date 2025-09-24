#include <stdio.h>

int main(void)
{
	unsigned long long int n;
	//scanf_s("%lld", &n);
	scanf("%lld", &n);
	int i;
	static unsigned long long int s[100000][2];
	
	for (i = 0; i < n; i++)
	{
		//scanf_s("%lld %lld", &s[i][0], &s[i][1]);
		scanf("%lld %lld", &s[i][0], &s[i][1]);
	}

	for (i = 0; i < n; i++)
	{
		printf("%lld", s[i][0] + s[i][1]);
		if (i < n - 1)
		{
			printf("\n");
		}
	}

	return 0;

}