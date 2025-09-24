#include <stdio.h>

int main(void)
{
	
	void add(int* q);

	int a;
	scanf_s("%d", &a);

	int* p;
	p = &a;

	add(p);

	//(*p)++;

	printf("%d", a);
}

void add(int* q)
{
	(*q)++;
}