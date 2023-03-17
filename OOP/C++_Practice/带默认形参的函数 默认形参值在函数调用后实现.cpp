#include <iostream>
using namespace std;

int add(int x = 5, int y = 6)
{
	return x + y;
}

int main()
{
	int a = add();
	cout << a << endl;

	return 0;
}
