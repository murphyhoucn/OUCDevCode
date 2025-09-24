#include <stdio.h>

enum COLOR { RED, YELLOW, GREEN };
void f(enum color c)
{
	printf("%d\n", c);
}

int main()
{
	enum color t = RED;
	scanf_s("%d", &t);
	f(t);
	return 0;
}