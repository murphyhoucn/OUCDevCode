#include <stdio.h>

#define N 100

int main(void)
{
	void fun1(int a);

	//void fun2(char b[]);  //两种声明方式等价
	void fun2(char *b);

	void fun3(int *x);

	//void fun4(char *p);


	int a = 10;
	char b[N] = { "hello" };

	//char p = b;



	fun1(a);
	printf("%d\n", a);

	fun2(b);
	printf("%s\n", b);

	fun3(&a);
	printf("%d\n", a);

	//fun4(p);
	//printf("%s\n", p);


	return 0;

}

void fun1(int a)
{
	a = 100;
}


//void fun2(char b[])
void fun2(char *b)
{
	b = "world";
}

void fun3(int *x)
{
	*x = 100;
}

/*
void fun4(int p)
{

	*p = "world";
}
*/
