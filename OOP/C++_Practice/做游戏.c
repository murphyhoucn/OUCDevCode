#include <stdio.h>
int main()
{
	int n;   //n��n���������
	int m, x;    //m:m��С��  x:x��
	scanf_s("%d", &n);
	scanf_s("%d %d", &m, &x);
	int i = 0;
	int a = 0;
	for (i = 0; i < m; i++) {
		scanf_s("%d", &a);
		a[i] = a;
		a = 0;
	}

	return 0;
}