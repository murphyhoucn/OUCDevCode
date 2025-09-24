#include <iostream>
using namespace std;

class Point
{
public:
	Point(int x = 0, int y = 0) :x(x), y(y) {}

	int getX() const { return x; }
	int getY() const { return y; }

private:
	int x, y;
};





int main()
{
	Point a(4, 5);
	Point* p1 = &a;  //定义对象指针并且初始化

	int (Point:: * funcptr)()const = &Point::getX;//定义成员函数指针并且初始化




	cout << (a.*funcptr)() << endl;//法一：使用成员函数指针和对象名访问成员函数

	cout << (p1->*funcptr)() << endl;//法二：使用成员函数指针和对象指针访问成员函数

	cout << a.getX() << endl;//法三：使用对象名访问成员函数

	cout << p1->getX() << endl;//法四：使用对象指针访问成员函数


	return 0;
}

