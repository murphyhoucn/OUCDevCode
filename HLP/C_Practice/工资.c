#include <stdio.h>

int main()
{
	float s;
	scanf_s("%f", &s);
	//scanf("%f", &s);

	if (s < 1000)
	{
		printf("%.2f", s);
	}
	else if (1000 <= s && s < 2000)
	{
		printf("%.2f", s*0.9);
	}
	else if (2000 <= s && s < 3000)
	{
		printf("%.2f", s*0.85);
	}
	else if (3000 <= s && s < 4000)
	{
		printf("%.2f", s*0.8);
	}
	else if (4000 <= s)
	{
		printf("%.2f", s*0.75);
	}
	else
	{
		printf("error");
	}

	return 0;

}