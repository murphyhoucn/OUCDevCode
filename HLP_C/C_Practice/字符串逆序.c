#include <stdio.h>
#include <string.h>

#define N 100

int main(void)
{
	//void inv(char x[]);
	void inv(char *x);

	char a[N];
	gets_s(a, N);
	//gets(a);
	
	inv(a);

	return 0;

}

//void inv(char x[])
void inv(char *x)
{
	char b[N] = { '\0' };

	int len = strlen(x);

	int i;
	for (i = 0; x[i] != '\0'; i++)
	{
		b[len-1 - i] = x[i];
	}
	printf("Input a string:");
	puts(b);
}