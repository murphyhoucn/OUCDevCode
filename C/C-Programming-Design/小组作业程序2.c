#include <stdio.h>

int main()
{
	float data1, data2;
	char op;
	float data3;

	scanf_s("%f %f %c", &data1, &data2, &op);

	if (op == '+')
	{
		data3 = data1 + data2;
		printf("%d", (int)data3);
	}
	else if (op=='-')
	{

		data3 = data1 - data2;
		printf("%d", (int)data3);
	}
	else if (op == '*')
	{

		data3 = data1 * data2;
		printf("%d", (int)data3);
	}
	else
	{
		data3 = data1 / data2;
		if (data3 == (int)data3)
		{
			printf("%d", (int)data3);
		}
		else
		{
			printf("%.2f", data3);
		}
	}
	return 0;
}