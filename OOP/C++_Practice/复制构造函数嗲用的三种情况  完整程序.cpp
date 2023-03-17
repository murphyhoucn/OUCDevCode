#include <iostream>
using namespace std;

class point
{
public:
	point(int xx = 0, int yy = 0)  //构造函数
	{
		x = xx;
		y = yy;
	}

	point(point& p);  //复制构造函数

	int getX() { return x; } //成员函数
	int getY() { return y; }  //成员函数

private:
	int x, y;
};

point::point(point &p)  //复制构造函数的实现
{
	x = p.x;
	y = p.y;
	cout << "复制构造函数已调用" << endl;
}


//1. 形参为类的对象
void fun1(point p)  //只有把对象用值传递，才会调用复制构造函数，
                    //如果传递引用（&p），则不会调用复制构造函数
{
	cout << p.getX() << endl;
}

//2.返回值为类的对象的函数
point fun2()
{
	point a(1, 2);
	return a;
}

int main()
{
	point a(4, 5);
	point b = a; //情况1，用对象a初始化b，第一次调用复制构造函数
	cout << b.getX() << endl;

	fun1(b);  //情况2，对象b作为fun1的实参，第二次调用复制构造函数

	b = fun2();  //情况3，函数的返回值是类的对象，函数返回时，调用复制构造函数
	cout << b.getX() << endl; 

	return 0;
}

