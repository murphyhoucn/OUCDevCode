#include <iostream>
using namespace std;

int fun2(int m) { return m * m; }

int fun1(int x, int y) { return fun2(x) + fun2(y); }    //Ç¶Ì×

int main()
{
	int a, b;
	cout << "please enter two integers (a and b):";
	cin >> a >> b;
	cout << "the sum of square of a and b: " << fun1(a, b) << endl;
	return 0;
}