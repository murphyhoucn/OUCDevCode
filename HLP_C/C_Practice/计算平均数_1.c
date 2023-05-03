#include <stdio.h>
int main()
{
	int count = 0;
	int sum = 0;
	int number;
	scanf("%d", &number);

	while (number != -1) {
		sum += number;
		count++;
		scanf("%d", &number);
	}

	printf("%f\n", 1.0*sum / count);
	return 0;

}