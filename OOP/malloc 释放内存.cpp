#include <iostream>
using namespace std;
int main()
{
	int* pn;
	pn = new int;
	*pn = 5;
	cout <<  *pn << endl;
	delete pn;

	return 0;
}