#include <stdio.h>

int main()
{
	float s;
	//scanf_s("%f", &s);
	scanf("%f", &s);
	int a = (int)s / 1000;

	switch (a)
	{
	case 0:printf("%.2f", s); break;
	case 1:printf("%.2f", s*0.9); break;
	case 2:printf("%.2f", s*0.85); break;
	case 3:printf("%.2f", s*0.8); break;
	default:printf("%.2f", s*0.75); break;
	}
	return 0;
}



