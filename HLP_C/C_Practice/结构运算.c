#include <stdio.h>

struct date {
	int month;
	int day;
	int year;
};

int main()
{
	struct date today;
	today = (struct date) { 07, 31, 2014 };

	struct date day;
	struct date *pdate = &today;
	day = today;

	day.year = 2015;  //day和today 是两个不同的变量

	printf("today's date is %i-%i-%i.\n", today.year, today.month, today.day);

	printf("day's date is %i-%i-%i.\n", day.year, day.month, day.day);

	printf("day's date is %p.\n", *pdate);

	return 0;
}