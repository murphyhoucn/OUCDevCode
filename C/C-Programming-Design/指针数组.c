#include <stdio.h>
#define N 5
#define M 100

int main(void)
{
	char str[N][M] = { "aa","bb","cc","dd","ee" };

	char* p[N];
	p[0] = &str[0][0];
	p[1] = &str[1][0];
	p[2] = &str[2][0];
	p[3] = &str[3][0];
	p[4] = &str[4][0];
	
	int i;
	for (i = 0; i < N; i++)
	{
		printf("%s\n", p[i]);
	}

	return 0;

}