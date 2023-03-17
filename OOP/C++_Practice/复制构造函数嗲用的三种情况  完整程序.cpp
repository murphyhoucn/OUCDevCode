#include <iostream>
using namespace std;

class point
{
public:
	point(int xx = 0, int yy = 0)  //���캯��
	{
		x = xx;
		y = yy;
	}

	point(point& p);  //���ƹ��캯��

	int getX() { return x; } //��Ա����
	int getY() { return y; }  //��Ա����

private:
	int x, y;
};

point::point(point &p)  //���ƹ��캯����ʵ��
{
	x = p.x;
	y = p.y;
	cout << "���ƹ��캯���ѵ���" << endl;
}


//1. �β�Ϊ��Ķ���
void fun1(point p)  //ֻ�аѶ�����ֵ���ݣ��Ż���ø��ƹ��캯����
                    //����������ã�&p�����򲻻���ø��ƹ��캯��
{
	cout << p.getX() << endl;
}

//2.����ֵΪ��Ķ���ĺ���
point fun2()
{
	point a(1, 2);
	return a;
}

int main()
{
	point a(4, 5);
	point b = a; //���1���ö���a��ʼ��b����һ�ε��ø��ƹ��캯��
	cout << b.getX() << endl;

	fun1(b);  //���2������b��Ϊfun1��ʵ�Σ��ڶ��ε��ø��ƹ��캯��

	b = fun2();  //���3�������ķ���ֵ����Ķ��󣬺�������ʱ�����ø��ƹ��캯��
	cout << b.getX() << endl; 

	return 0;
}

