#include <stdio.h>

int main()
{
	int maxnum(int x, int y);
	int minnum(int x, int y);

	int(*p)(int, int);

	int a, b;
	int c;

	printf("enter two integer numbers:\n");
	scanf_s("%d %d", &a, &b);

	int choice;
	printf("enter your choice:\n");
	scanf_s("%d", &choice);


	if (choice == 1) { p = maxnum; }
	else if (choice == 2) { p = minnum; }
	else { printf("your choice has an error\n"); }
	
	c = (*p)(a, b);

	if (choice==1){ printf("a=%d\nb=%d\nmax=%d\n", a, b, c); }
	else if(choice==2){ printf("a=%d\nb=%d\nmin=%d\n", a, b, c); }
	
	return 0;
}

int maxnum(int x, int y)
{
	return x > y ? x : y;
}

int minnum(int x, int y)
{
	return x < y ? x : y;
}