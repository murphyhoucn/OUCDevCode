#include <stdio.h>
int main()
{
	int x;
	int i;
	scanf("%d", &x);

	int isPrime = 1;  //x������
	for (i = 2; i < x; i++) {
		if (x%i == 0) {
			isPrime = 0;
			break;
			//continue;
		}
		//printf("%d\n", i);
	}

	if (isPrime == 1) {
		printf("������");
	}
	else {
		printf("��������");
	}
	return 0;
}