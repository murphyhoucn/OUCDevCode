#include <stdio.h>

int main(void)
{

	int i;

	for (i = 0; i < 5; i++)
	{
		int score;
		printf("Enter grade: ");
		scanf("%d", &score);

		if (score >= 60) { printf("Pass\n"); }
		else
		{
			printf("Fail\n");
		}
	}
	return 0;
}
