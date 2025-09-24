//函数的名字相同，执行的功能类似，不同的时形参的类型或者数量，
//与形参的名字无关，与函数返回值的类型无关
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