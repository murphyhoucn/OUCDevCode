//约分最简分式
#include <stdio.h>
int main()
{
	int m, n;
	scanf("%d/%d", &m, &n);
	int  i = 1;
	int min;

	if (m > n) {
		min = n;
	}
	else {
		min = m;
	}
	int ret = 1;
	for (i = 1; i <= min; i++) {
		if (m%i == 0) {
			if (n%i == 0) {
				ret = i;
			}
			
		}
	}
	//printf("gcd=%d\n", ret);

	if (ret!=1) {
		printf("%d/%d", m / ret, n / ret);
	}
	else {
		printf("%d/%d", m, n);
	}
	return 0;
}