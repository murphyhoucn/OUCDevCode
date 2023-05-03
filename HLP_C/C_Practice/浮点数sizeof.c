#include <stdio.h>
int main()
{
	float a = 1.0;
	double b = 1.0;

	printf("%f\n", a);
	printf("sizeof(float)=%d\n", sizeof(a));
	printf("%f\n", b);
	printf("sizeof(doubel)=%d\n", sizeof(b));

	return 0;
}