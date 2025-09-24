
#include <stdio.h>

struct  date {
	int month;
	int day;
	int year;
}myday;



int main() 
{
	struct date *p = &myday;

	(*p).month = 2;
	p->day = 3;

	printf("%d\n", myday.month);
	printf("%d\n", myday.day);

	return 0;

}