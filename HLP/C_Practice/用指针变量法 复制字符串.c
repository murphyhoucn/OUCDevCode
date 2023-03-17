#include <stdio.h>

int main()
{
	char a[] = "i am a boy";
	char b[20];
	char *p1;
	char *p2;

	p1 = a;
	//p1 = &a[0];
	p2 = b;
	//p2 = &b[0];

	for (; *p1 != '\0'; p1++, p2++)
	{
		*p2 = *p1;
	}
	*p2 = '\0';

	printf("string a is : %s\n", a);
	printf("string b is : %s\n", b);

	return 0;

}