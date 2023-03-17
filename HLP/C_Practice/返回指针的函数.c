#include <stdio.h>

int* f(void);
void g(void);

int main(int argc, char const *argv[])
{
	int *p = f();
	printf("*p=%d\n", *p);
	g();
	printf("*p=%d\n", *p);

	return 0;
}

int *f(void)
{
	int i = 12;
	printf("&i=%p\n", &i);
	return &i;      //���ر��ر����ĵ�ַ��Σ�յġ� ���ĵ�ַ�ᱻ��һ�������ٴ�ʹ��
}

void g(void)
{
	int k = 24;
	printf("&k=%p\n", &k);
	printf("k=%d\n", k);
}
