#include <stdio.h>
int main()
{
	int f;
	int x;

	printf("ÇëÊäÈëxµÄÖµ£º");
	scanf("%d", &x);

	if (x < 0) {
		f = -1;
	}
	else if (x == 0) {
		f = 0;
	}
	else {
		f = x * 2;
	}
	printf("%d", f);
	return 0;
}