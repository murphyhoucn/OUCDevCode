#include <stdio.h>
#include <stdlib.h>

int main()
{
	FILE *fp;
	//errno_t err;

	char ch;
	char filename[10];

	printf("please input the name of the file:\n");
	scanf_s("%s", filename, 10);
	getchar();

	//printf("%s\n", filename);

	if ((fp = fopen_s(&fp, filename, "w")) == NULL)
	{
		printf("cann't open the file!");
		exit(0);
	}

	printf("please input the content to save in the disk:\n");
	ch = getchar();
	while (ch != '#')
	{
		fputc(ch, fp);
		putchar(ch);
		ch = getchar();
	}

	fclose(fp);

	putchar(10);
	printf("\n");
	return 0;
}