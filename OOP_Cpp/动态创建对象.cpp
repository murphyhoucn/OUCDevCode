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
	Point* ptr1 = new Point;  //��̬��������û�и��������б�����Ĭ�Ϲ��캯��
	delete ptr1;//ɾ�������Զ�������������

	cout << "step two:" << endl; 
	ptr1 = new Point(1, 2);  //��̬�������󣬲����������б���˵������βεĹ��캯��
	delete ptr1;  //ɾ�������Զ�������������

	return 0;

}