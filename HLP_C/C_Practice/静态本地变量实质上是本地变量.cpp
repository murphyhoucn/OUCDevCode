#include <stdio.h>

int f(void);

int a = 12;

int main(int argc, char const *argv[])
{
	f();
	return 0;
}

int f(void)
{
	
	static int b = 1;
	int c = 0;
	printf("&a=%p\n", &a);   
	printf("&b=%p\n", &b);
	//ȫ�ֱ����;�̬���ر�����λ�ý����ţ����ԣ���̬���ر�����ȫ�ֱ���

	printf("&c=%p\n", &c);
	return 0;
}