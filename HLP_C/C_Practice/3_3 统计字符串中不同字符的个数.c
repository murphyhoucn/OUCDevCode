#include<stdio.h>
#include<string.h>

#define M 128
#define N 1000

int main()
{
	char str[N] = { '\0' };
	int num[M] = { 0 };
	int count = 0;
	int len;
	int i;

	//gets_s(str,N);
	gets(str);
	len = strlen(str);

	for (i = 0; i < len ; i++)
	{
		if (str[i] >= 0 && str[i] <= 127)
		{
			num[str[i]]++;
		}
	}

	for (i = 0; i < M-1 ; i++)
	{
		if (num[i] != 0)
		{
			count++;
		}

	}
	printf("%d\n", count);
}