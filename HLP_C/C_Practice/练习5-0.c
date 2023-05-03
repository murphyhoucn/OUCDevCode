//求序列的前n项和
#include <stdio.h>
int main()
{
	int n;
	scanf("%d", &n);
	double fenzi = 2.0;
	double fenmu = 1.0;
	int i = 1;
	double sum = 0.0;
	double t;
	for (i = 1; i <= n; i++) {
		sum += fenzi / fenmu;
		t = fenzi;
		fenzi = fenmu + fenzi;
		fenmu = t;

	}
	printf("%.2f", sum);    //保留两位小数
	return 0;
}