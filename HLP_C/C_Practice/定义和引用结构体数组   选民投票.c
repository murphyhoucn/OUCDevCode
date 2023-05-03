#include <stdio.h>
#include <string.h>

struct Person
{
	char name[20];
	int count;
}leader[3] = { "li",0,"zhang",0,"sun",0 };

int main()
{
	int i, j;
	char leader_name[20];
	for (i = 1; i <= 10; i++)
	{
		scanf_s("%s", leader_name,20);

		for (j = 0; j < 3; j++)
		{
			if (strcmp(leader_name, leader[j].name) == 0)
			{
				leader[j].count++;
			}
		}
	}

	printf("result:\n");

	for (i = 0; i < 3; i++)
	{
		printf("%5s:%d\n", leader[i].name, leader[i].count);
	}

	return 0;
}