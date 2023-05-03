#include <stdio.h>
int main()
{
	int x;
	//scanf("%d", &x);
	scanf_s("%d", &x);
	int t = 0;

	//·´Ðò
	do {
		int d = x % 10;
		t = t * 10 + d;
		x /= 10;
	} while (x > 0);
	//printf("x=%d,t=%d\n", x, t);
	x = t;


	//·Ö½â
	do {
		int d = x % 10;
		printf("%d", d);
		
		x /= 10;
		if (x > 0) {
			printf("\n");
		}
	} while (x > 0);

	//printf("\n");
	return 0;
}