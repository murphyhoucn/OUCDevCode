#include <stdio.h>

int main()
{
	int data1, data2;
	char op;
	int data3;

	scanf_s("%d %d %c", &data1, &data2, &op);

	switch (op)
	{
	case '+':
		data3 = data1 + data2;
		printf("%d", data3);
		break;
	case '-':
		data3 = data1 - data2;
		printf("%d", data3);
		break;
	case '*':
		data3 = data1 * data2;
		printf("%d", data3);
		break;
	case '/':
		if ((double)data1 / (double)data2 == data1/data2)
		{
			printf("%d", data1 / data2);
		}
		else
		{
			printf("%.2f", (double)data1 / (double)data2);
		}
		break;

	}

	return 0;
}