#include <stdio.h>
#include <string.h>

#define M 100
#define N 10

struct
{
	char book[M];
	double price;

}s1[N];



int main(void)
{
	int n;
	printf("Input n:");
	scanf("%d", &n);

	int i;
	for (i = 0; i < n; i++)
	{
		printf("Input the name,price of the %d book:", i + 1);
		//scanf_s("%s",&s1[i].book[0],sizeof(s1[i].book));
		scanf("%s", &s1[i].book[0]);
		scanf("%lf", &s1[i].price);
		//scanf_s("%lf", &s1[i].price);
	}

	/*
		for (i = 0; i < n; i++)
	{
		printf("test:%s\t", s1[i].book);
		printf("test:%lf\n", s1[i].price);
	}
	*/



	float max = s1[0].price;
	int maxnum=0;

	for (i = 1; i < n; i++)
	{
		//printf("test:%d\n", s1[i].price);
		if (s1[i].price > max)
		{
			max = s1[i].price;
			maxnum = i;
		}
	}

	printf("The book with the max price:%s,price is:%0.1lf\n", s1[maxnum].book, s1[maxnum].price);
	
	float min = s1[0].price;
	int minnum=0;

	for (i = 1; i < n; i++)
	{
		if (s1[i].price < min)
		{
			min = s1[i].price;
			minnum = i;
		}
	}
	printf("The book with the min price:%s,price is:%0.1lf\n", s1[minnum].book, s1[minnum].price);

	return 0;



}











	

	