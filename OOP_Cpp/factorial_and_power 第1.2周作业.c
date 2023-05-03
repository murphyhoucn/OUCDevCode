#include <stdio.h>
int main()
{
	int n, k;
	scanf_s("%d %d", &n, &k);
	int i = n;
	int s=1;
	for (i; i >= 1; i--) {
		s *= i;
	}
	int p = 1;
	int j = 1;
	for (j; j <= k; j++) {
		p *= s;
	}
	printf("%d", p);
	return 0;


}