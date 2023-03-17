#include <iostream>
using namespace std;

int main()
{
	int x;
	cin >> x;
	int inv=0;
	do
	{
		int temp;
		temp = x % 10;
		inv = inv * 10 + temp;
		x /= 10;
	} while (x > 0);


	//cout << inv << endl;

	do
	{
		printf("%d", inv % 10);
		inv /= 10;
		if (inv > 0)
		{
			printf("\n");
		}
	} while (inv > 0);

	return 0;
}