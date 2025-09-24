#include <stdio.h>

#define SIZE 10

int sum(int ar[], int n);

int main(void)
{
	int marbles[SIZE] = { 20,10,5,39,4,16,19,26,31,20 };

	long answer;

	answer = sum(marbles, SIZE);

	printf("the total number of the marbles is %d\n", answer);
	printf("the size of the marble is %zd bytes\n", sizeof(marbles));

	return 0;
}

int sum(int ar[], int n)
{
	int i;
	int calu = 0;

	for (i = 0; i < n; i++)
	{
		calu += ar[i];
	}

	return calu;
}