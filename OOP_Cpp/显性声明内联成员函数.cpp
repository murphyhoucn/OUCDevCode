#include <iostream>
using namespace std;

class point
{
public:
	void init(int x, int y)  //����������������
	{
		X = x;
		Y = y;
	}
	int getX{ return X; }  //����������������
	int getY{ return Y; } //����������������
private:
	int X, Y;
};

int mian()
{
	return 0;
}