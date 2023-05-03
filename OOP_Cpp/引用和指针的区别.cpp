#include <iostream>
using namespace std;

void swap(int* a, int* b)
{
	int tmp;
	tmp = *a;
	*a = *b;
	*b = tmp;
}

void swap1(int &a, int &b)
{
	int tmp;
	tmp = a;
	a = b;
	b = tmp;

}

int main()
{
	int n1=1, n2=2;
	swap(&n1, &n2);
	cout << n1 << "   " << n2 << endl;

	swap1(n1, n2);
	cout << n1 << "   " << n2 << endl;

	return 0;
	
}