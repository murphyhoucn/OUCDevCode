#include <stdio.h>
int main()
{
	int x;
	scanf("%d", &x);
	double amount = x * (1 + 0.033)*(1 + 0.033)*(1 + 0.033);
	printf("%f", amount);
	return 0;
}