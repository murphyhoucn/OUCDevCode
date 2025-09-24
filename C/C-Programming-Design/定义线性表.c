#include <stdio.h>
#define MAX 100

int main(void)
{
	struct stu
	{
		int num;
		char name[10];
		char sex;
		int age;
		float scores;
	};

	typedef struct
	{
		struct stu S[MAX];
		int n;
	}sqlist;

	return 0;
}