#include <stdio.h>

int main()
{
	float a, b;
	char op;
	float c;

	scanf_s("%f %f %c", &a, &b, &op);
	//scanf("%f %f %c", &a, &b, &op);

	//printf("%f %f %c", a, b, op);
	

	switch (op)
	{
	case '+':
		c = a + b;
		printf("%d", (int)c);
		break;
	case '-':
		c = a - b;
		printf("%d", (int)c);
		break;
	case '*':
		c = a * b;
		printf("%d", (int)c);
		break;
	case '/':
		c = a / b;
		if (c == (int)c)
		{
			printf("%d", (int)c);
		}
		else
		{
			printf("%.2f", c);
		}
		break;

	}

	return 0;
}