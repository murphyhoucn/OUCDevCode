#include <stdio.h>
#include <string.h>

int main()
{
	struct Student
	{
		long int num;
		char name[20];
		char sex;
		float score;
	};

	struct Student stu1;
	struct Student *p;
	p = &stu1;
	stu1.num = 100;
	strcpy_s(stu1.name, 10,"lili");
	stu1.sex = 'M';
	stu1.score = 89.5;

	printf("NO.%d\nname:%s\nsex:%c\nscore:%.2f\n\n", stu1.num, stu1.name, stu1.sex, stu1.score);
	printf("NO.%d\nname:%s\nsex:%c\nscore:%.2f\n\n", (*p).num, (*p).name, (*p).sex, (*p).score);
	printf("NO.%d\nname:%s\nsex:%c\nscore:%f\n", p->num, p->name, p->sex, p->score);


	return 0;
}