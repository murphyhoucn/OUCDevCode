#include <stdio.h>
int main()
{
	int i;
	int* p = &i;    //p是指针，*：p是指针，指向的是int。&取得i的地址，把i的地址交给p
	               //p指向i：p的值是i的地址

	int* p, q;    // p是指针，*：p是指针，指向的是int。  q只是一个普通的int变量
	int *p, q;    //同上

	return 0;
}