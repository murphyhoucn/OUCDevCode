#include <stdio.h>
typedef struct date {
	int month;
	int day;
	int year;                  
}A;       //A 代表了从struct date 到A 之前的所有东西

//struct date D = { 9,1,2005 };
A D = { 9,1,2005 };

int main() {
	printf("%d-%d-%d", D.year, D.month, D.day);
	return 0;
}