//������������a��n��a�ķ�Χ�ǡ�0��9����n�ķ�Χ�ǡ�1��8������s=a+aa+aaa+aaaa+������������
#include <stdio.h>
int main()
{
	int a, n;
	scanf("%d %d", &a, &n);
	int sum = 0;
	int i = 1;

	int f=0;
	for (i = 1; i <= n; i++) {
		f = f * 10 + 2;
		sum += f;
	 }
	printf("%d", sum);
	return 0;
}