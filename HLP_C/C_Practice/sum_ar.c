//@Author  : MurphyHou 

//    Here We Go!     

//数组元素之和

#include <stdio.h>

#define N 10

int sum(int ar[], int n);

int main(void)
{
	int marbles[N] = { 20,10,5,51,84,4,87,864,68,684 };

	long int answer;

	answer = sum(marbles, N);

	printf("total:%ld\n", answer);

	printf("the size of marbales is %zd bytes,\n", sizeof(marbles));

	return 0;
}

int sum(int ar[], int n)
{
	int i;
	int total = 0;

	for (i = 0; i < n; i++)
	{
		total += ar[i];
	}

	printf("the size of ar is %zd bytes.\n", sizeof(ar));

	return total;
}