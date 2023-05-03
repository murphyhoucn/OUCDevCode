#include <iostream>
#include<cmath>
using namespace std;

class point
{
private:
	int x, y;
public:
	point(int xx = 0, int yy = 0) { x = xx; y = yy; } //���캯��
	point(point& p) 
	{
		x = p.x;
		y = p.y;
		cout << "����point��ĸ��ƹ��캯��" << endl;
	}  //���ƹ��캯��

	int  getx() { return x; }  //��Ա����
	int  gety() { return y; }
};


class line
{
private:
	point p1, p2;  //point ��Ķ���
	double len;
public:
	line(point xp1, point xp2);//���캯��   a,b ������Ƕ����
	line(line& l); //���ƹ��캯��

	double getlen() { return len; } //��Ա����
};


//�����Ĺ��캯��
line::line(point xp1, point xp2) :p1(xp1), p2(xp2)  //p1,p1����Ƕ����
{
	cout << "����line �Ĺ��캯��" << endl;
	double x = static_cast<double>(p1.getx() - p2.getx());
	double y = static_cast<double>(p1.gety() - p2.gety());
	len = sqrt(x * x + y * y);
}


//�����ĸ��ƹ��캯��
line::line(line & l) :p1(l.p1), p2(l.p2)
{
	cout << "����line��ĸ��ƹ��캯��" << endl;
	len = l.len;
}

int main()
{
	point myp1(1, 1), myp2(4, 5);// point�Ķ���
	line  line(myp1, myp2);  //line �Ķ���
	line line2(line); //���ø��ƹ��캯������һ���µĶ���

	cout << "�߶εĳ����ǣ�";
	cout << line.getlen() << endl;

	cout << "�߶�2�ĳ����ǣ�";
	cout << line2.getlen() << endl;

	return 0;
}