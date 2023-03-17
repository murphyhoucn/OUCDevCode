//该方法不能实现数值的交换
//因为采用值传递，函数调用时传递的是实参的值，是单向传递过程
//形参互换，但是实参不变

#include <iostream>
using namespace std;

void swap(int a, int b)
{
	int t = a;
	a = b;
	b = t;
}
int main()
{
	int x = 5, y = 0;
	cout << "x=" << x << "  y=" << y << endl;
	swap(x, y);
	cout << "x=" << x << "  y=" << y << endl;

	return 0;
	
}