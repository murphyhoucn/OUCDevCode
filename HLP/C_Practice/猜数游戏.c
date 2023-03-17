#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	srand(time(0));
	int number = rand() % 100 + 1;
	int a = 0;
	int count = 0;
	printf("我已经想好了一个1到100的数。");
	do {
		printf("请猜这个1到100的数：");
		scanf("%d", &a);
		count++;
		if (a > number) {
			printf("大了\n");
		}
		else if (a < number) {
			printf("小了\n");
		}
	} while (a != number);
	
	printf("你用了%d次猜对了！\n", count);

	return 0;
}