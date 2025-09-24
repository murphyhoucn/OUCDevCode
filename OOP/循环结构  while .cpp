#include <iostream>

using namespace std;

int main()
{
	int i = 1;
	int sum = 0;

	while (i < 11)
	{
		sum += i;
		i++;
	}

	cout << "sum=" << sum << endl;

	return 0;
}