#include <stdio.h>
typedef struct date {
	int month;
	int day;
	int year;                  
}A;       //A �����˴�struct date ��A ֮ǰ�����ж���

//struct date D = { 9,1,2005 };
A D = { 9,1,2005 };

int main() {
	printf("%d-%d-%d", D.year, D.month, D.day);
	return 0;
}