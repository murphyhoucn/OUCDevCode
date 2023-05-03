#include <stdio.h>

//const double PI = 3.14159;

#define PI 3.14159    //宏
//PI 是这个宏的名字，3.14159 是这个宏的值

#define format "%f\n"   //宏
#define format1 %f\n  

#define PI2 2*PI     //注释不会被误认为是宏的值

#define prt printf("%f\n",PI);\
            printf("%f\n",PI2)

int main()
{
	printf(format, PI);
	printf(format, PI2);
	printf("format1\n", PI);    //引号里面不会被替换
	printf("\n");
	prt;
	printf("\n");
\
	printf("%s\n", __FILE__);
	printf("%d\n", __LINE__);
	printf("%s\n", __DATE__);
	printf("%s\n", __TIME__);
	printf("\n");



	return 0;
}