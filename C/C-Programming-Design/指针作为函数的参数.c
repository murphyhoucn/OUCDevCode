#include <stdio.h>

void f(int *p);
void g(int k);

int main()
{
	int i = 6;
	printf("&i=%p\n", &i);
	f(&i);
	g(i);

	return 0;
}

void f(int *p)      //*:说明变量是指针变量
{
	printf("p=%p\n", p);
	printf("*p=%d\n", *p);     //*:取用这个指针指向的地址所储存的变量的值

	//*p = 26;     //*的意义发生了改变，*不再是指向地址，而是读取或者修改放在p中的数字，也就是**p=p。
}
void g(int k)
{
	printf("k=%d\n", k);
}