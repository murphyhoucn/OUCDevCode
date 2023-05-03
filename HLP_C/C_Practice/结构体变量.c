#include <stdio.h>

#define N 100

int main(void)
{
	struct F
	{
		char c_n[N];
		char t_t[N];
		int score;

	};

	struct F a;

	scanf_s("%s", a.c_n,sizeof(a.c_n));
	scanf_s("%s",a.t_t,sizeof (a.t_t));
	scanf_s("%d", &a.score);

	printf("%s\t%s\t%d\n", a.c_n, a.t_t, a.score);

	return 0;
}