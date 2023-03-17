#include <stdio.h>
int main()
{
	int n;   //n：n组测试数据
	int m, x;    //m:m个小孩  x:x步
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