#include <iostream>

using namespace std;

int main()
{
	int n;
	cin >> n;
	int x;
	int tem;

	do {
		tem = n % 10;
		cout << tem;
		n /= 10;
	} while (n != 0);

	cout << endl;

	return 0;
}