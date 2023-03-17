#include <stdio.h>
int main()
{
	int cm = 0;
	scanf("%d", &cm);
	int foot = cm / 30.48;
	int inch = ((cm / 30.48) - foot) * 12;
	printf("%d %d", foot, inch);
	return 0;
}