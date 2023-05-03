#include <stdio.h>
int main()
{
	int b;
	scanf_s("%d", &b);
	int a = b;
	if (a >= 0) {
		a = a;
	}
	else {
		a = -1*a;
	}
	int t = 0;
	int x = 0;
	while (a > 0 ) {
		t = a % 10;
		x = x * 10 + t;
		a /= 10;
	}
	if (b >= 0) {
		x = x;
	}
	else {
		x = -1 * x;
	}
	printf("%d", x);
	return 0;


}