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
	Point* p1 = &a;  //�������ָ�벢�ҳ�ʼ��

	int (Point:: * funcptr)()const = &Point::getX;//�����Ա����ָ�벢�ҳ�ʼ��




	cout << (a.*funcptr)() << endl;//��һ��ʹ�ó�Ա����ָ��Ͷ��������ʳ�Ա����

	cout << (p1->*funcptr)() << endl;//������ʹ�ó�Ա����ָ��Ͷ���ָ����ʳ�Ա����

	cout << a.getX() << endl;//������ʹ�ö��������ʳ�Ա����

	cout << p1->getX() << endl;//���ģ�ʹ�ö���ָ����ʳ�Ա����


	return 0;
}

