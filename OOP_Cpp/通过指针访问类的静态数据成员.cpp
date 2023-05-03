#include <iostream>

using namespace std;

class Point
{
public:
	Point(int x = 0, int y = 0) :x(x), y(y) { count++; }  //构造函数

	Point(const Point& p) :x(p.x), y(p.y) { count++; }  //复制构造函数

	~Point() { count--; }

	int getX() { return x; }
	int getY() { return y; }

	static int count;
private:
	int x;
	int y;
};



int Point::count = 0;   //静态数据成员定义和初始化，使用类名限定


int main()
{
	int* ptr = &Point::count;
	Point a(4, 5);

	cout << "Point A: " << a.getX() << "," << a.getY();
	cout << "  object count=" << *ptr << endl;

	Point b(a);
	cout << "Point B: " << b.getX() << "," << b.getY();
	cout << "  object count= " << *ptr << endl;


	return 0;


}

