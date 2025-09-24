#include <stdio.h>

int main()
{
	void action1(int  , int  );
	void action2(int  , int  );

	char ch;
	ch = getchar();

	int a = 10;
	int b = 15;

	switch (ch)
	{
	case 'A':
	case 'a':
		action1(a, b);
		break;

	case 'B':
	case 'b':
		action2(a, b);
		break;

	default:
		printf("a=%d\tb=%d\n", a, b);
	}

	return 0;
}

void action1(int x, int y)
{
	printf("%d+%d=%d\n", x, y, x+y);
}

void action2(int x, int y)
{
	printf("%d-%d=%d\n", x, y, x-y);
}