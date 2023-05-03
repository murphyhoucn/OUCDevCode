#include <stdio.h>

int main()
{
	float s;
	scanf_s("%f", &s);
	//scanf("%f", &s);
	int a = 0;

	if (s < 1000)
	{
		a = 1;
	}
	else if (1000 <= s && s < 2000)
	{
		a = 2;
	}
	else if (2000 <= s && s < 3000)
	{
		a = 3;
	}
	else if (3000 <= s && s < 4000)
	{
		a = 4;
	}
	else if (4000 <= s)
	{
		a = 5;
	}
	else
	{
		a = 6;
	}

	//printf("%d\n", a);

	switch (a)
	{
	case 1:
		printf("%.2f", s); break;
	case 2:
		printf("%.2f", s*0.9); break;
	case 3:
		printf("%.2f", s*0.85); break;
	case 4:
		printf("%.2f", s*0.8); break;
	case 5:
		printf("%.2f", s*0.75); break;
	default:
		printf("error"); break;
	}

	return 0;

}