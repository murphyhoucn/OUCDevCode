#include <stdio.h>
#include <math.h>

int main(void)
{
	unsigned long long int a;
	unsigned long long int b;

	scanf_s("%lld", &a);
	scanf_s("%lld", &b);
	//scanf("%lld", &a);
	//scanf("%lld", &b);
	unsigned long long int x;
	x=(int)pow(a, b) % 1000000007;
	printf("%lld", x);

}