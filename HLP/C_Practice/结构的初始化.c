#include <stdio.h>

struct  date {
	int month;
	int day;
	int year;

};

int main()
{
	struct date today = { 07,31,2014 };     //��ʼ���ķ�ʽ1
	struct date thismonth = { .month = 7,.year = 2014 };  //��ʼ���ķ�ʽ2     dayû�и�ֵ����������ֵ��0

	printf("today's date is %i-%i-%i.\n", today.year, today.month, today.day);
	printf("this month is %i-%i-%i.\n", thismonth.month, thismonth.year,thismonth.day);

	return 0;
}