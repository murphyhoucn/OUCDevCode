#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	srand(time(0));
	int number = rand() % 100 + 1;
	int a = 0;
	int count = 0;
	printf("���Ѿ������һ��1��100������");
	do {
		printf("������1��100������");
		scanf("%d", &a);
		count++;
		if (a > number) {
			printf("����\n");
		}
		else if (a < number) {
			printf("С��\n");
		}
	} while (a != number);
	
	printf("������%d�β¶��ˣ�\n", count);

	return 0;
}