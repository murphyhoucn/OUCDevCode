#include <stdio.h>

int main()
{
	//char *string = "i love china";
	//两种等价的写法
	char *string;
	string = "i love china";

	string = "i am a student";//字符指针变量可以再赋值

	printf("%s\n", string);  //通过字符指针变量输出它所指向的字符串

	return 0;

}