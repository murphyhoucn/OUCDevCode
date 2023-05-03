#include <stdio.h>

int main()
{
	putchar('A'); //输出字符
	putchar('\n');
	putchar(65);   //ASCII
	printf("\n");
	putchar('\101');    //后面加三位八进制数
	putchar('\n');  
	putchar('\x41');  //x后面加两位十六进制数

	return 0;
}