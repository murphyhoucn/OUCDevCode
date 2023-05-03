#include <stdio.h>
int main()
{
	int x;
	int mask = 1;
	scanf("%d", &x);
	int t = x;

	while (x > 9) {
		x /= 10;
		mask *= 10;
	}
	x = t;
	printf("x=%d,mask=%d\n",x,mask);

	do {
		int d = x / mask;
		printf("%d", d);
		if(mask>=10){
			printf(" ");
		}
		x %= mask;
		mask /= 10;
	} while (mask > 0);

	printf("\n");
	return 0;

}