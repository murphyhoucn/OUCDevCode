#include <stdio.h>
int main()
{
	int n;
	int fact = 1;
	scanf("%d", &n);

	int i = 1;
	while (i <= n) {
		fact *= i;
		i++;
	}
	printf("%d!=%d", n, fact);
	return 0;
}