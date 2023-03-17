#include<stdio.h>

struct Student
{
	int num;
	float score;
	struct Student *next;
};

int main()
{
	struct Student a, b, c, *head, *p;

	a.num = 1;
	a.score = 89.5;
	b.num = 3;
	b.score = 90;
	c.num = 7;
	c.score = 85;


	head = &a;
	a.next = &b;
	b.next = &c;
	c.next = NULL;

	p = head;

	do
	{
		printf("%d %5.1f\n", p->num, p->score);

		p = p->next;

	} while (p != NULL);


	return 0;
}