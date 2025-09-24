#include<stdio.h>
#define M 8
char queen[M + 1][M + 1];
int stack[M + 2];
int top = 1;
void Display()
{
	int i, j;
	for (i = 1; i <= top; i++)
		printf("(%d,%d)", stack[i], i);
	printf("\n");
	for (i = 1; i <= M; i++)
		for (j = 1; j <= M; j++)
			queen[i][j] = '0';
	for (i = 1; i <= top; i++)
		queen[stack[i]][i] = '*';
	for (i = 1; i <= M; i++)
	{
		printf(" ");
		for (j = 1; j <= M; j++)
			printf("%c", queen[i][j]);
		printf("\n");
	}
}
int CheckPos(int x, int y)
{
	int i, flag = 1;
	for (i = 1; flag && i <= top; i++)
		if (stack[i] == x)
			flag = 0;
	for (i = 1; flag && i <= top; i++)
		if ((x - stack[i] == y - i) || (stack[i] - x == y - i))
			flag = 0;
	return flag;
}
void main()
{
	int pos, flag = 1;
	stack[top] = 1;
	pos = 1;
	while (flag)
	{
		while (pos <= M)
		{
			if (CheckPos(pos, top + 1))
				break;
			else
				pos++;
		}
		if (pos <= M)
		{
			stack[++top] = pos;
			if (top == M)
			{
				Display();
				pos = stack[top--] + 1;
			}
			else
				pos = 1;
		}
		else
		{
			pos = stack[top--] + 1;
			if (top == 0 && pos > M)
				flag = 0;
		}
	}
}
