#include <stdio.h>
#include <stdlib.h>

int main()
{
	FILE *in;
	FILE *out;

	char ch;
	char infile[10];
	char outfile[10];

	printf("please enter the infile's name:\n");
	scanf_s("%s", infile, 10);
	printf("please enter the outfile's name:\n");
	scanf_s("%s", outfile, 10);

	if ((in = fopen_s(&in, infile, 'r')) == NULL)
	{
		printf("can not open the file");
		exit(0);
	}
	if ((out = fopen_s(&out, outfile, 'w')) == NULL)
	{
		printf("can not open the file");
		exit(0);
	}

	ch = fgetc(in);

	while (!feof(in))
	{
		fputc(ch, out);
		putchar(ch);
		ch = fgetc(in);
	}

	putchar(10);
	fclose(in);
	fclose(out);

	return 0;


}