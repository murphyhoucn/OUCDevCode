#include <iostream>
using namespace std;

double power(double x, int n);

int main()
{
	double x= power(5, 2);

	cout << x << endl;
	return 0;
}

double power(double x, int n)
{
	double tem = 1.0;
	while (n--)
	{
		tem *= x;
	}
	return tem;
}