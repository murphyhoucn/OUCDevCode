#include <iostream>
using namespace std;

int add(int x = 5, int y = 6);

int main()
{
	int a=add();
	cout << a << endl;

	return 0;
}

int add(int x, int y)
{
	return x + y;
}