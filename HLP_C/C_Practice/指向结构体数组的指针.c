#include <stdio.h>

struct Student
{
	int num;
	char name[20];
	char sex;
	float score;
};

struct Student inf[3] = { {5,"li",'M',89.5} ,{9,"sun",'F',36} ,{6,"wnag",'M',59} };

int main()
{
	struct Student *p;

	//printf("ceshi:%f\n", inf[0].score);

	for (p = inf; p < inf + 3; p++)
	{
		printf("No.%d\nname:%s\nsex:%c\nscore:%.2f\n\n", p->num, p->name, p->sex, p->score);
	}

	printf("\n");

	return 0;

}