#include <stdio.h>

#define N 100

int main(void)
{
	struct Student
	{
		char name[N];
		int num;
		float scores;
	};

	struct Student stu;

	int n;
	printf("Input n:");

	scanf("%d", &n);
	//scanf_s("%d", &n);

	int i;

	double sum = 0;

	for (i = 0; i < n; i++)
	{
		printf("Input the number,name,score of the %d student:",i+1);
		//scanf_s("%d", &stu.num);
		scanf("%d", &stu.num);

		//gets_s(stu.name,N);
		//scanf_s("%s", stu.name,N);
		scanf("%s", stu.name);


		//scanf_s("%f", &stu.scores);
		scanf("%f", &stu.scores);
		sum += stu.scores;
	}

	//printf("%f/n", sum);

	printf("The average score is:");
	printf("%.2f", sum / n);

	return 0;

}