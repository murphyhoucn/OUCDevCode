#include <stdio.h>

int main()
{
	float data1, data2;
	char op;
	float data3;

	scanf_s("%f %f %c", &data1, &data2, &op);
	//scanf("%f %f %c", &data1, &data2, &op);

	//printf("%f %f %c", data1, data2, op);

	switch (op)
	{
	case '+':
		data3 = data1 + data2;
		printf("%d", (int)data3);
		break;
	case '-':
		data3 = data1 - data2;
		printf("%d", (int)data3);
		break;
	case '*':
		data3 = data1 * data2;
		printf("%d", (int)data3);
		break;
	case '/':
		data3 = data1 / data2;
		if (data3 == (int)data3)
		{
			printf("%d", (int)data3);
		}
		else
		{
			printf("%.2f", data3);
		}
		break;

	}

	return 0;
}