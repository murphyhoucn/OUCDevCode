#include <stdio.h>

int main(void)
{
	int n;
	char c;


	//scanf_s("%c", &c);
	scanf("%c", &c);
	printf("ch=%c\n", c);


	//scanf_s("%d", &n);

	scanf("%d", &n);
	printf("n=%d\n", n);

	int i;
	int j;
	int k;

	for (i = 1; i < n + 1; i++)
	{
		for (j = n; j >i; j--)
		{
			printf(" ");
		}

		for (k = 0; k < 2 * i-1; k++)
		{
			printf("%c",c);
		}
		printf("\n");
	}
	return 0;
}