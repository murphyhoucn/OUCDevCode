#include <stdio.h>

#define N 100

int main(void)
{
	char path[N];
	gets_s(path, N);
	puts(path);
	//gets(path);

	FILE *fp;
	fp=fopen_s(&fp, path, "r");

	if (fp) 
	{
		int num;
		fscanf_s(fp, "%d", &num);
		printf("%d\n", num);
		fclose(fp);
	}
	else 
	{
		printf("无法打开文件\n");
	}

	return 0;
}