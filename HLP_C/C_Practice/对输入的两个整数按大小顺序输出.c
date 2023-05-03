#include <stdio.h>

int main()
{
	void swap(int *p1, int *p2);

	int a, b;
	int *pointer1;
	int *pointer2;

	printf("plaese enter two integer numbers:");

	scanf_s("%d %d", &a, &b);

	pointer1 = &a;
	pointer2 = &b;

	if (a < b)
	{
		swap(pointer1, pointer2);
	}

	printf("max=%d\tmin=%d\n", a, b);

	return 0;

}

void swap(int *p1, int *p2)
{
	int *p;
	p = p1;
	p1 = p2;
	p2 = p;
}