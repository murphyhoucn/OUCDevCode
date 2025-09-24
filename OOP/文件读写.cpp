#include<stdio.h>
#include<stdlib.h>
#include <time.h>
char file_name[10] = "num.txt";
int random_num(int num = 10)
{
	FILE* fp;
	char* number;
	int i = 0, n = 0;
	srand((unsigned)time(NULL));
	fp = fopen_s(&fp, file_name, "r");
	if (fp == NULL)
	{
		fp = fopen_s(&fp,file_name, "a");
		for (i = 0; i < num; i++)
		{
			n = rand() % num;
			printf("%d\n", (n));
			fprintf(fp, "%d\n", n);
		}
	}

	for (i = 0; i < num; i++)
	{
		printf("hhhh");
		printf(number);
	}
	fclose(fp);
}
int main()
{
	random_num();
	return 0;
}
