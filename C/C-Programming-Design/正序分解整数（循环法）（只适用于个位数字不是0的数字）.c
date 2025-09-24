#include <stdio.h>
int main()
{
	int x;
	scanf("%d", &x);
	int t=0;
	
	//ÄæÐò
	do {
		int d = x % 10;
		t = t * 10 + d;
		x /= 10;
	} while (x > 0);
	printf("x=%d,t=%d\n", x,t);
	x = t;
	
	//·Ö½â
	do {
		int d = x % 10;
		printf("%d", d);
		if (x >=10) {
			printf(" ");
		}
		x /= 10;
	} while (x > 0);
	printf("\n");

	return 0;
}