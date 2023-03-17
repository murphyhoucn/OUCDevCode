#include<stdio.h>


int main()
{
	struct Student
	{
		long int num;
		char name[20];
		char sex;
		char address[20];
	};

	struct Student a = { 1010,"xioaming",'M',"123 beijing road" };

	printf("NO.%ld\nname:%s\nsex:%c\naddress:%s\n", a.num, a.name, a.sex, a.address);

	return 0;
}