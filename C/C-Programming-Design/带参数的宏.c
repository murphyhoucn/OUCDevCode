#include <stdio.h>

//#define cube(x) ((x)*(x)*(x))

#define r1(x) (x*57.29578)  // ´íÎó
#define r2(x) (x)*57.29578 //´íÎó

#define r3(x) ((x)*57.29578) //ÕıÈ·Ğ´·¨

int main()
{
	/*int i;
	scanf_s("%d", &i);
	printf("%d\n", cube(i+2));*/
	printf("%d\n", r1(5 + 2));
	printf("%d\n", 180 / r2(1));
	printf("%d\n", r3(5 + 7));

	return 0;
}