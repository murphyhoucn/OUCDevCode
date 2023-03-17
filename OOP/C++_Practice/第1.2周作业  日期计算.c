#include <stdio.h>
int main()
{
	int a;
	char b;
	int m, d;
	scanf_s("%d\n", &a);
	b = getchar();
	//putchar(b);
	scanf_s("%d %d", &m, &d);
	

	int p[13] = { 0,31,28,31,30,31,30,31,31,30,31,30,31 };
	int r[13] = { 0,31,29,31,30,31,30,31,31,30,31,30,31 };

	int days = 0;
	if (b == 'p') {
		int i = 0;
		for (i; i <= m-1; i++) {
			days += p[i];
		}
	}
	else if(b == 'r') {
		int i = 0;
		for (i; i <= m - 1; i++) {
			days += r[i];
		}
	}
	days = days + d;
	//printf("%d", days);
	int x;
	x = (days-1) % 7 + a;
	if (x >= 7) {
		x = x % 7;
	}
	else {
		x = x;
	}
	switch (x) 
	{
	case 1:
		printf("MON\n");
		break;
	case 2:
		printf("TUE\n");
		break;
	case 3:
		printf("WED\n");
		break;
	case 4:
		printf("THU\n");
		break;
	case 5:
		printf("FRI\n");
		break;
	case 6:
		printf("SAT\n");
		break;
	case 0:
		printf("SUN\n");
		break;


	}
	
	return 0;
}