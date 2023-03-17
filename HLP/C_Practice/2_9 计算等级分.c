#include <stdio.h>

int main(void)
{
	printf("Input Grade: ");
	char c;
	//scanf_s("%c", &c,sizeof(c));
	scanf("%c", &c);

	switch (c)
	{
	case 'A':
		printf("A is 90~100");
		break;
	case 'B':
		printf("B is 80~89");
		break;
	case 'C':
		printf("C is 70~79");
		break;
	case 'D':
		printf("D is 60~69");
		break;
	case 'E':
		printf("E is 0~59");
		break;
	default:
		printf("error!");

	}

	return 0;
}