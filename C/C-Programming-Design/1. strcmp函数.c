#include <stdio.h>
#include <string.h>

#define N 100

int main(void)
{
	int strcmp_fun(char *p1, char *p2);

	char a1[N];
	char a2[N];

	gets(a1);
	gets(a2);

	printf("%d\n", strcmp_fun(a1, a2));

	return 0;
}

int strcmp_fun(char *p1, char *p2)
{
	int result;
	int i = 0;

	int max = 0;

	if (strlen(p1) > strlen(p2)) { max = strlen(p1); }
	else { max = strlen(p2); }

	for (i = 0; i < max; i++)
	{
		if (p1[i] > p2[i])
		{
			result = 1;
			break;
		}
		else if (p1[i] < p2[i])
		{
			result = -1;
			break;
		}
		else
		{
			result = 0;
		}
		
	}


	return result;
}
