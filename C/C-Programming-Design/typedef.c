#include <stdio.h>

int main(void)
{
	struct stu
	{
		char name[10];
		char sex;
		int age;
	};

	struct stu stu1 = { "aaa",'m',38 };

	printf("%s,%c,%d\n", stu1.name, stu1.sex, stu1.age);


	typedef struct stu S;

	S stu2 = {"bbb",'w',20};
	printf("%s,%c,%d\n", stu2.name, stu2.sex, stu2.age);


	return 0;
}