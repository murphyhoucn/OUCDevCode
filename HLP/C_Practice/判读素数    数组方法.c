#include <stdio.h>

int isPrime(int x, int knownPrime[], int numberofKnownPrimes);// 函数头

int main()
{

	const int number = 10;
	int prime[10] = { 2 };
	int count = 1;
	int i = 3;

	//for test 
	{
		int i;
		printf("\t\t\t\t");
		for (i = 0; i < number; i++) {
			printf("%d\t", i);
		}
		printf("\n");
	}

	while (count < number) {
		if (isPrime(i, prime, count)) {
			prime[count++] = i;
		}


		//for test.
		{
			printf("i=%d\tcnt=%d\t", i, count);
			int i;
			for (i = 0; i < number; i++) {
				printf("%d\t", prime[i]);
			}
			printf("\n");
		}


		i++;
	}
	printf("\n");
	for (i = 0; i < number; i++) {
		printf("%d", prime[i]);
		if ((i + 1) % 5 ) {
			printf("\t");
		}
		else {
			printf("\n");
		}
	}
	return 0;
}
//函数部分
int isPrime(int x, int knownPrime[], int numberofKnownPrimes)
{
	int ret = 1;
	int i;
	for (i = 0; i < numberofKnownPrimes; i++) {
		if (x % knownPrime[i] == 0) {
			ret = 0;
			break;
		}
	}
	return ret;
}