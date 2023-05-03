#include <iostream>
using namespace std;


class point
{
public:
	point() :x(0), y(0)
	{
		cout << "default constructor called" << endl;
	}

	point(int x, int y) :x(x), y(y)
	{
		cout << "constructor called" << endl;
	}

	~point()
	{
		cout << "disconstructor called" << endl;
	}

private:
	int x, y;
};


int main()
{
	point* ptr = new point[2];  //创建对象数组

	ptr[0].move(5, 10);
	ptr[1].move(15, 20);
	cout << "deleting..." << endl;
	delete[] ptr;    //删除整个数组
	return 0;


}