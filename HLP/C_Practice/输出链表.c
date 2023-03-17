#include <stdio.h>
#include<malloc.h>
#define LEN sizeof(struct Student)
struct Student
{
	long int num;
	float score;
	struct Student *next;
};

int n;

struct Student * creat()
{
	struct Student *head;
	struct Student *p1;
	struct Student *p2;

	n = 0;

	p1 = p2 = (struct Student *)malloc(LEN);
	scanf_s("%ld %f", &p1->num, &p1->score);
	head = NULL;

	while (p1->num != 0)
	{
		n++;
		if (n == 1)
		{
			head = p1;

		}
		else
		{
			p2->next = p1;
		}

		p2 = p1;
		p1 = (struct Student *)malloc(LEN);
		scanf_s("%ld %f", &p1->num, &p1->score);
	}

	p2->next = NULL;
	return (head);
}

void print(struct Student *head)
{
	struct Student *p;

	printf("\nnow,these %d records are:\n", n);

	p = head;

	if (head != NULL)
	{
		do
		{
			printf("%ld %5.1f\n", p->num, p->score);
			p = p->next;
		} while (p != NULL);
	}
 }


int main()
{
	struct Student *head;
	head = creat;
	print(head);
	return 0;
}