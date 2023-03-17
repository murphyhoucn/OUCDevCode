#include <iostream>.
using namespace std;
int main()
{
	int* pn;
	int n = 10;
	pn = new int[10 * n];
	pn[11] = 1;

	cout << pn[11] << endl;

	delete[] pn;

	return 0;
}