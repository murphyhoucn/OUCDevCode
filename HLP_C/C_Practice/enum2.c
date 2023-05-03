#include <stdio.h>

int main() 
{
	enum week { Mon , Tues, Wed, Thurs, Fri, Sat, Sun } day;
	scanf_s("%d", &day);
	switch (day) 
	{
	case Mon: puts("Monday"); break;
	case Tues: puts("Tuesday"); break;
	case Wed: puts("Wednesday"); break;
	case Thurs: puts("Thursday"); break;
	case Fri: puts("Friday"); break;
	case Sat: puts("Saturday"); break;
	case Sun: puts("Sunday"); break;
	default: puts("Error!");
	}
	printf("sizeof:%zd\n", sizeof(enum week));
	printf("sizeof:%zd\n", sizeof(Mon));

	return 0;
}