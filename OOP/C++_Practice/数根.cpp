#include <iostream>
using namespace std;

int numroot(int x)
{
	int D = 0;
	do {
		int d = x % 10;
		D += d;
		x /= 10;
	} while (x > 0);

	if (D > 9)
	{
		numroot(D);
	}

	else 
	{
		return D;
	}

	
}


int main()
{
	int X;
	cin >> X;
	cout << numroot(X);

	return 0;
}