#include <stdio.h>

int main()
{
	int n;
	printf("enter:");
	scanf_s("%d", &n);

	int i;
	for (i = 2; i < n; i++)
	{
		if (n%i == 0)
		{
			//printf("bushi\n");
			break;
		}

	}

	if (i < n)
	{
		printf("%d bushi\n", n);
	}
	else
	{
		printf("%d shi\n", n);
	}


	return 0;


}