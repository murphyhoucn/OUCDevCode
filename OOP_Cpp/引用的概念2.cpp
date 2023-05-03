#include <iostream>
using namespace std;

int main()
{
	int a = 4;
	int b = 5;

	int& r1 = a;
	int& r2 = r1;   //r2也引用a

	r2 = 10;
	cout << a << endl;

	r1 = b;   //r1没有引用b
	//int& r3 = b;
	cout << a << endl;

	//cout << r3 << endl;


	return 0;
}