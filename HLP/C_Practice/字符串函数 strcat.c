#include <stdio.h>
#include <string.h>

int main()
{
	char a[] = "hello ";
	char b[] = "world";
	int number = sizeof(a) + sizeof(b);
	strcat_s(a,number, b);
	

	printf("%s\n", a);

	return 0;


}