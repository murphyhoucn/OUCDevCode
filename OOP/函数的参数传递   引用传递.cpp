#include <iostream>
using namespace std;

void swap(int& a, int& b)
{
	int t;
	//a = 6;   //因为a是x的引用，所以，对a进行修改时，x的值也会变化
	t = a;
	a = b;
	b = t;
}

int main()
{
	int x = 5, y = 10;
	cout << x << "  " << y << endl;
	swap(x, y);
	cout << x << "  " << y << endl;

	return 0;
	
}