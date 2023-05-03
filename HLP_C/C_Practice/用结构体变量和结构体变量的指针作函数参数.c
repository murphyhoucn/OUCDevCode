#include <stdio.h>
#define N 3

struct Student
{
	int num;
	char name[20];
	float score[3];
	float aver;
};

int main()
{
	void input(struct Student stu[]);
	struct Student max(struct Student std[]);
	void print(struct Student stu);

	struct Student stu[N];
	struct Student *p;
	p = stu;

	input(p);
	print(max(p));

	return 0;

}


void intput(struct Student stu[])
{
	int i;
	printf("please input the information of the students:\n");

	for (i = 0; i < 3; i++)
	{
		scanf_s("%d %s %f %f %f", 
			&stu[i].num, stu[i].name,20, 
			&stu[i].score[0], &stu[i].score[1], &stu[i].score[2]);

		stu[i].aver = (stu[i].score[0] + stu[i].score[1], +stu[i].score[2]) / N;
	}
}

struct Student max(struct Student stu[])
{
	int i;
	int m = 0;

	for (i = 0; i < N; i++)
	{
		if (stu[i].aver > stu[m].aver)
		{
			m = i;
		}
	}

	return stu[m];
}

void print(struct Student stu)
{
	printf("\n the top1 is:\n ");

	printf("num:%d\nname:%s\n%f\n%f\n%f\naver:%f\n", 
		stu.num, stu.name, stu.score[0], stu.score[1], stu.score[2], stu.aver);

	
}