#include <stdio.h>
int main()
{
	int a, b;
	int t;
	scanf("%d %d", &a, &b);
	int x = a;
	int y = b;
	
	while (b != 0) {
		t = a % b;
		a = b;
		b = t;
		printf("a=%d,b=%d,t=%d\n", a, b, t);

	}

	printf("%d��%d�����Լ����%d\n", x, y, a);

	return 0;
}