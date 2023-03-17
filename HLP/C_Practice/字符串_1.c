#include <stdio.h>
int main()
{
	char *s = "hello world";
	char*s2 = "hello world";
	char s3[] = "hello world";
	printf("s=%p\n", s);
	printf("s2=%p\n", s2);
	printf("s3=%p\n", s3);
	printf("\n");
	//s2[0] = "a";    //指针定义的字符串只能读，不能改
	s3[0] = "b";      //数组定义的字符串可以修改
	//printf("s2[0]=%d\n", s2[0]);
	printf("s3[0]=%d\n", s3[0]);
	return 0;
}