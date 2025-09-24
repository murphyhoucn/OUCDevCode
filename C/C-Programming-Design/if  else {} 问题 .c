#include <stdio.h>
int main()
{
	int age = 0;
	double salary = 4000;

	age=65;
	if (age > 60) {
		salary = salary * 1.2;
	}
	printf("%f",salary);
	return 0;
}