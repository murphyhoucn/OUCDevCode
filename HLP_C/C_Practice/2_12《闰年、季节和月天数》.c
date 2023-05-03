#include <stdio.h>

int main(void)
{
	int year1[12] = { 31,28,31,30,31,30,31,31,30,31,30,31 };
	int year2[12] = { 31,29,31,30,31,30,31,31,30,31,30,31 };

	int year;
	int month;

	scanf("%d %d", &year, &month);

	int flag = 0;

	if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
	{
		printf("Leap year,");
		flag = 1;

	}
	else
	{
		printf("Common year,");
		
	}

	

	if (month >=3  && month <= 5)
	{
		printf("Spring,");
	}
	else if (month >=6 && month <= 8)
	{
		printf("Summer,");
	}
	else if (month >= 9 && month <= 11)
	{
		printf("Fall,");
	}
	else
	{
		printf("Winter,");
	}

	if (flag == 1)
	{
		printf("%d", year2[month - 1]);
	}
	else
	{
		printf("%d", year1[month - 1]);
	}
	
	return 0;
}