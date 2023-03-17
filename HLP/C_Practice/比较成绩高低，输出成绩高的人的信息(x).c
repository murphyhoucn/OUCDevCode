#include <stdio.h>

int main()
{
	struct Stuinf
	{
		int num;
		char name[20];
		float score;
	}student1,student2;

	scanf_s("%d %s %f", &student1.num, student1.name, &student1.score);
	scanf_s("%d %s %f", &student2.num, student2.name, &student2.score);

	if (student1.score > student2.score)
	{
		printf("num:%d\nname:%s\nscore:%f\n", student1.num, student1.name, student1.score);
	}
	else if (student1.score = student2.score)
	{
		printf("num:%d and %d\nname:%s and %s\nscore:%f\n", student1.num,student2.num, student1.name,student2.name, student1.score);
	}
	else
	{
		printf("num:%d\nname:%s\nscore:%f\n", student2.num, student2.name, student2.score);
	}

	return 0;
}