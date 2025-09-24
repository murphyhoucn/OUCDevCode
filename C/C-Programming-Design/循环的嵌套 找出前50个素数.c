#include <stdio.h>
int main()
{
	int x=1;
	int cnt = 0;

	while(cnt<50){
		int i;
		int isPrime = 1;
		for (i = 2; i < x; i++) {
			if (x%i == 0) {
				isPrime = 0;
				break;
			}
		}
		if (isPrime == 1) {
			printf("%d\t", x);
			cnt++;
			if (cnt % 5 == 0) {
				printf("\n");
			}
		}
		x++;
	}
}