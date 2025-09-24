#include <stdio.h>

#define SIZE 10

int sum(int *start, int *end);

int main(void)
{
	int marbel[SIZE] = { 11,5,44,7,9,5,9,7,9,1 };

	long int answer;

	answer = sum(marbel, marbel + SIZE);

	printf("answer=%ld", answer);

	return 0;
}

int sum(int*start, int*end)
{
	int total = 0;

	while (start < end)
	{
		total += *start;
		start++;

		//total+=*(start++);
	}

	return total;
}