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
	cout << "���ø��ƹ��캯��" << endl;
}

point g()
{
	point a(3, 2);
	return a;
}
int main()
{
	point b;
	b = g();

	cout << b.getX() << endl;

	return 0;
}