#include <stdio.h>
int main()
{
	int x;
	int i;
	scanf("%d", &x);

	int isPrime = 1;  //x是素数
	for (i = 2; i < x; i++) {
		if (x%i == 0) {
			isPrime = 0;
			break;
			//continue;
		}
		//printf("%d\n", i);
	}

	if (isPrime == 1) {
		printf("是素数");
	}
	else {
		printf("不是素数");
	}
	return 0;
}