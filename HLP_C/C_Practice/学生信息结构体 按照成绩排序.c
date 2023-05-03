#include <stdio.h>

struct Student 
{
	int num;
	char name[20];
	float score;
};
int main()
{
	struct Student inf[5] = 
	{ {10101,"zhang",78},{10103,"wang",98.5},
	{10106,"li",86},{10108,"ling",73.5},{10110,"sun",100} };

	struct Student temp;

	const int n = 5;
	int i, j, k;

	for (i = 0; i < n - 1; i++)
	{
		k = i;
		for (j = +1; j < n; j++)
		{
			if (inf[j].score > inf[k].score)
			{
				k = j;
			}
		}

		temp = inf[k];
		inf[k] = inf[i];
		inf[i] = temp;
	}

	for (i = 0; i < n; i++)
	{
		printf("%6d %8s %6.2f\n", inf[i].num, inf[i].name, inf[i].score);
	}

	printf("\n");
	return 0;


}