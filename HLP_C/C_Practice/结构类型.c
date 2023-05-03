#include <stdio.h>

int main()
{
	//在main函数内部声明的结构类型只能在main内部使用，
	//如果想要在外部使用的话，因该把该结构声明放在main函数的外面
	struct date {      //声明结构类型
		int month;
		int day;
		int year;
	};

	struct date today;    //today 是变量，它的类型是struct date
	today.month = 07;
	today.day = 31;
	today.year = 2014;

	printf("today's date is %i-%i-%i.\n", today.year, today.month, today.day);


	return 0;
}