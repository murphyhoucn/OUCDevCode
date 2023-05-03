#include <iostream>
using namespace std;

class point
{
public:
	void init(int x, int y)  //显性声明内联函数
	{
		X = x;
		Y = y;
	}
	int getX{ return X; }  //显性声明内联函数
	int getY{ return Y; } //显性声明内联函数
private:
	int X, Y;
};

int mian()
{
	return 0;
}