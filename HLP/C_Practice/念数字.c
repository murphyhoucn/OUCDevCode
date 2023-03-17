//输入一个整数，输出每个数字对应的拼音
//当输入负数时，应先输出‘fu’
#include <stdio.h>
int main()
{
	int x;
	scanf("%d", &x);
	if (x < 0) {
		x = -x;
		printf("fu ");
	}
	int t = x;
	int f = 1;
	int d;
	while (t >= 10) {
		t /= 10;
		f *= 10;
	}
	//printf("%d\n", f);
	

	while (x >0) {
		d=x / f;
		
		switch (d) {

		case 0:
			printf("ling");
			break;
		case 1:
			printf("yi");
			break;
		case 2:
			printf("er");
			break;
		case 3:
			printf("san");
			break;
		case 4:
			printf("si");
			break;
		case 5:
			printf("wu");
			break;
		case 6:
			printf("liu");
			break;
		case 7:
			printf("qi");
			break;
		case 8:
			printf("ba");
			break;
		case 9:
			printf("jiu");
			break;

		}
		if (f >= 10) {
			printf(" ");
		}
		x = x % f;
		f /= 10;

		
	}

	return 0;
}