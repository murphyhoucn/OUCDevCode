#include <iostream>
#include<cmath>
using namespace std;

class point
{
private:
	int x, y;
public:
	point(int xx = 0, int yy = 0) { x = xx; y = yy; } //构造函数
	point(point& p) 
	{
		x = p.x;
		y = p.y;
		cout << "调用point类的复制构造函数" << endl;
	}  //复制构造函数

	int  getx() { return x; }  //成员函数
	int  gety() { return y; }
};


class line
{
private:
	point p1, p2;  //point 类的对象
	double len;
public:
	line(point xp1, point xp2);//构造函数   a,b 叫做内嵌对象
	line(line& l); //复制构造函数

	double getlen() { return len; } //成员函数
};


//组合类的构造函数
line::line(point xp1, point xp2) :p1(xp1), p2(xp2)  //p1,p1是内嵌对象
{
	cout << "调用line 的构造函数" << endl;
	double x = static_cast<double>(p1.getx() - p2.getx());
	double y = static_cast<double>(p1.gety() - p2.gety());
	len = sqrt(x * x + y * y);
}


//组合类的复制构造函数
line::line(line & l) :p1(l.p1), p2(l.p2)
{
	cout << "调用line类的复制构造函数" << endl;
	len = l.len;
}

int main()
{
	point myp1(1, 1), myp2(4, 5);// point的对象
	line  line(myp1, myp2);  //line 的对象
	line line2(line); //利用复制构造函数建立一个新的对象

	cout << "线段的长度是：";
	cout << line.getlen() << endl;

	cout << "线段2的长度是：";
	cout << line2.getlen() << endl;

	return 0;
}