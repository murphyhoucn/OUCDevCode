#include <stdio.h>
int main() 
//ö��
{
	int a, b;
	int min;

	scanf("%d %d", &a, &b);

	if (a < b) {
		min = a;
	}
	else {
		min = b;
	}

	int ret = 0;
	int i;
	for (i = 1; i < min; i++) {
		if (a%i == 0) {
			if (b%i == 0) {
				ret = i;
			}
		}
	}
	printf("%d��%d�����Լ����%d\n", a, b, ret);

	return 0;
}