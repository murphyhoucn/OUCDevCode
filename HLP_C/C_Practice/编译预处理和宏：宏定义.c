#include <stdio.h>

//const double PI = 3.14159;

#define PI 3.14159    //��
//PI �����������֣�3.14159 ��������ֵ

#define format "%f\n"   //��
#define format1 %f\n  

#define PI2 2*PI     //ע�Ͳ��ᱻ����Ϊ�Ǻ��ֵ

#define prt printf("%f\n",PI);\
            printf("%f\n",PI2)

int main()
{
	printf(format, PI);
	printf(format, PI2);
	printf("format1\n", PI);    //�������治�ᱻ�滻
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