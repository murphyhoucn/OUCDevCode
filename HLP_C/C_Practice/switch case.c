#include <stdio.h>
int main()
{
	int a;
	scanf_s("%d", &a);

	switch (a)
	{
	case 1:
		printf("1");
		break;
	case 2:
		printf("2");
		break;
	default:
		printf("0000");
		break;
	}



	return 0;
}