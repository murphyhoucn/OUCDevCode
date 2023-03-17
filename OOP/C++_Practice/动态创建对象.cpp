#include <iostream>
using namespace std;

class Point
{
public:
	Point() :x(0), y(0)
	{
		cout << "default contrustor  called." << endl;
	}

	Point(int x, int y) :x(x), y(y)
	{
		cout << "contrustor  called." << endl;
	}

	~Point()
	{
		cout << "discontructor called." << endl;
	}

	int getX() { return x; }
	int getY() { return y; }

	void move(int newx, int newy)
	{
		x = newx;
		y = newy;
	}
private:
	int x, y;

};


int main()
{
	cout << "step one :" << endl;
	Point* ptr1 = new Point;  //动态创建对象，没有给出参数列表，调用默认构造函数
	delete ptr1;//删除对象，自动调用析构函数

	cout << "step two:" << endl; 
	ptr1 = new Point(1, 2);  //动态创建对象，并给出参数列表，因此调用有形参的构造函数
	delete ptr1;  //删除对象，自动调用析构函数

	return 0;

}