#include <stdio.h>

int main(int argc, const char *argv[])
{
	//flags
	int a = 123;
	printf("%9d\n", a);      //9：代表输出占据的字符空间（默认右对齐）
	printf("%+9d\n", a);      //+：在前面放上“+”
	printf("%-9d\n", a);      //-：左对齐
	printf("%-+9d\n", a);      //
	printf("%09d\n", a);  //填充0
	printf("%9d\n", a);
	printf("\n");

	//width
	double b = 12.35644;
	printf("%9.2f\n", b);  //9：占据9个位置        .2f：保留两位小数
	int len = 10;
	printf("%*d\n",len, a);   //*:参数   *相当于后面的len
	printf("\n");

	//hlL
	printf("%hhd\n", 12345);


	//%n
	int num;
	printf("%d%n\n", 12345, &num);
	printf("%d\n", num);
	
	


	return 0;
}