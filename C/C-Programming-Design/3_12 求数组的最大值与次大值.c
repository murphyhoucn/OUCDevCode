#include <stdio.h>

#define N 10

int main(void)
{
	int scores[N];

	int i;

	printf("Input 10 score:");
	for (i = 0; i < N; i++)
	{
		scanf("%d", &scores[i]);
	}

	printf("========primary data========\n");
	for (i = 0; i < N; i++)
	{
		printf("%d ", scores[i]);
	}
	printf("\n");




	int max = scores[0];
	int flagmax = 0;
	int flagmax2 = 0;


	/////////////////////////////////////////////////////////
	for (i = 1; i < N; i++)
	{
		if (scores[i] > max)
		{
			max = scores[i];
			flagmax = i;
		}
	}

	int temp;

	{
		temp = scores[9];
		scores[9] = scores[flagmax];
		scores[flagmax] = temp;
	}



	/*
		printf("test:\n");
	for (i = 0; i < N; i++)
	{
		printf("%d ", scores[i]);
	}

	
	*/

	int max2 = scores[0];
	/////////////////////////////////////////////////
	for (i = 1; i < N-1; i++)
	{
		if (scores[i] > max2)
		{
			max2 = scores[i];
			flagmax2 = i;
		}
	}



	int temp2;
	{
		temp2 = scores[8];
		scores[8] = scores[flagmax2];
		scores[flagmax2] = temp2;

	}


//////////////////////////////////////////////////////
	printf("======== data exchange========\n");
	for (i = 0; i < N; i++)
	{
		printf("%d ", scores[i]);
	}

	return 0;

}