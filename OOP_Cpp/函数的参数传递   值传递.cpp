//�÷�������ʵ����ֵ�Ľ���
//��Ϊ����ֵ���ݣ���������ʱ���ݵ���ʵ�ε�ֵ���ǵ��򴫵ݹ���
//�βλ���������ʵ�β���

#include <iostream>
using namespace std;

void swap(int a, int b)
{
	int t = a;
	a = b;
	b = t;
}
int main()
{
	int x = 5, y = 0;
	cout << "x=" << x << "  y=" << y << endl;
	swap(x, y);
	cout << "x=" << x << "  y=" << y << endl;

	return 0;
	
}