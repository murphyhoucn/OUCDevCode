#include <stdio.h>
int main()
{
	int t1 = 0;
	int t2 = 0;
	scanf("%d %d", &t1, &t2);

	int t1h = t1 / 100;
	int t1m = t1 % 100;
	int t1mm = t1h * 60 + t1m;

	int tm = t1mm + t2;
	//printf("%d\n", tm);

	int t3h = tm / 60;
	int t3m = tm % 60;

	printf("%d%d\n", t3h, t3m);
	return 0;
}