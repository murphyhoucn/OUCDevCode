#include <stdio.h>

int main(void)
{
	struct Person
	{
		float weight;
		float height;
		int age;
	}myself;

	struct Person* p;
	p = &myself;

	scanf_s("%f", &p->weight);
	scanf_s("%f", &p->height);
	scanf_s("%d", &p->age);

	printf("%.2f\t%.2f\t%d\n", (*p).weight, (*p).height, (*p).age);

	return 0;


	
}