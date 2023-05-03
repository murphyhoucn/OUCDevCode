#include <iostream>
using namespace std;
int main()
{
	int number;
	cin >> number;
	double a = 0;

	if (number > 500)
		a = 0.15;
	else if (number > 300)
		a = 0.1;
	else if (number > 50)
		a = 0.05;
	else
		a = 0.0001;

	cout << a << endl;

	return 0;

}