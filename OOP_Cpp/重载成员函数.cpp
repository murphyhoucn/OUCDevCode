#include <iostream>
using namespace std;

class c
{
public:
	int cal(int x, int y) { return x - y; }
	double cal(double x, double y) { return x + y; }

};

int main()
{
	c a;
	cout << a.cal(1, 2) << endl;

	cout << a.cal(1.0, 2.0) << endl;

	return 0;
}