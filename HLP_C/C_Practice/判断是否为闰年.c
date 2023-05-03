#include <stdio.h>

int main()
{
	int year, leap;

	printf("enter year:");
	scanf_s("%d", &year);

	if (year % 4 == 0)
	{
		if (year % 100 == 0)
		{
			if (year % 400 == 0) { leap = 1; }
			else { leap = 0; }
		}
		else { leap = 0; }
	}
	else { leap = 0; }


	if (leap) { printf("%d is \n", year); }
	else { printf("%d is not\n", year); }

	return 0;
}