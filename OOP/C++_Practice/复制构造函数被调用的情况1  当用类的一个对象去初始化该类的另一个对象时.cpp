#include<iostream>
using namespace std;
class point
{
public:
	point(int xx = 0, int yy = 0) { x = xx; y = yy; } //���캯����������
	point(point& p); //���ƹ��캯�����β��Ǳ�����������
	int getX() { return x; }
	int getY() { return y; }
private:
	int x, y;
};
  //���ƹ��캯����ʵ��
point::point(point& p)
{
	x = p.x;
	y = p.y;
	cout << "���ƹ��캯��" << endl;
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