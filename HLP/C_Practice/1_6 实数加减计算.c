#include <stdio.h>

int main(void)
{
	double number1;
	double number2;

	printf("Enter num1:");
	scanf("%lf", &number1);
	printf("Enter num2:");
	scanf("%lf", &number2);


	printf("%.3lf+%.3lf=%.3lf\n", number1, number2, (number1 + number2));
	
	printf("%.3lf/%.3lf=%.3lf", number1, number2, (number1 / number2));

	return 0;

}