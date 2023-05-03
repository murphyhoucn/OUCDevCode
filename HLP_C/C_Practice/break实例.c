#include <stdio.h>


#define sum 100000
//const int sum = 100000;

int main()
{
	float amount, aver, total;
	total = 0;
	int i;
	for (i = 1; i <= 100000; i++)
	{
		printf("please enter amount:");
		scanf_s("%f", &amount);
		total += amount;
		if (total >= sum ) { break; }

	}

	aver = total / i;
	printf("num=%d\naver=%10.2f\n", i, aver);

	return 0;
}