#include <stdio.h>
int main()
{
	int x;
	int n = 0;
	scanf("%d", &x);

	x /= 10;
	n++;
	while (x > 0) {          //Ñ­»·Ìå
		x /= 10;
		n++;
	}
	
	printf("%d\n", n);
	return 0;
}