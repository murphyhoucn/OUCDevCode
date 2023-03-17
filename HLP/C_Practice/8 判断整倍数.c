#include <stdio.h>

int main(void)
{
	int n;
	scanf("%d", &n);

	if (n % 7 == 0 && n % 5 == 0)
	{
		printf("yes");
	}
	else
	{
		printf("no");
	}

	return 0;
}