#include <iostream>
using namespace std;


void pfmax(int a, int b)
{
	if (a > b) { cout << a << endl; }
	else { cout << b << endl; }
}
int main()
{
	void (*p)(int, int);
	//数据类型（* 函数指针名）（形参表）

	int x = 4, y = 5;
	p = pfmax;  //函数指针在使用前要进行赋值，使指针指向一个已经存在的函数代码的起始地址
	//函数指针名=函数名

	p(x, y);

	return 0;
}