//������������ͬ��ִ�еĹ������ƣ���ͬ��ʱ�βε����ͻ���������
//���βε������޹أ��뺯������ֵ�������޹�
#include <iostream>
using namespace std;

int sumofquare(int a, int b)
{
	return a * a + b * b;
}

double sumofquare(double a, double b)
{
	return a * a + b * b;
}


int main()
{
	int m, n;
	cout << "enter two integer: ";
	cin >> m >> n;
	cout << "theie sum of quare: " << sumofquare(m, n) << endl;

	double x, y;
	cout << "enter two integer: ";
	cin >> x >> y;
	cout << "theie sum of quare: " << sumofquare(x,y) << endl;

	return 0;

}