#include<iostream>
using namespace std;
class point
{
public:
	point(int xx = 0, int yy = 0) { x = xx; y = yy; } //构造函数和其声明
	point(point& p); //复制构造函数，形参是本类对象的引用
	int getX() { return x; }
	int getY() { return y; }
private:
	int x, y;
};
  //复制构造函数的实现
point::point(point& p)
{
	x = p.x;
	y = p.y;
	cout << "复制构造函数" << endl;
}

int main()
{
	point a(1,2);
	point b(a);
	point c = a;

	cout << a.getX() << endl;
	cout << a.getY() << endl;
	cout << b.getX() << endl;
	cout << c.getY() << endl;

	return 0;
}