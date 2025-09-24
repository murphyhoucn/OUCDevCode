#include <iostream>
using namespace std;

int main()
{
	int n = 4;
	int& r = n;

	//r = 4;
	cout << r << endl;
	cout << n << endl;
	cout << &r << endl;
	cout << &n << endl;

	n = 5;
	cout << r << endl;
	cout << n << endl;
	cout << &r << endl;
	cout << &n << endl;


	return 0;

}