#include <iostream>
using namespace std;

int main()
{
	int line1[] = { 1,0,0 };
	int line2[] = { 0,1,0 };
	int line3[] = { 0,1,1 };

	int* pline[3] = { line1,line2,line3 };

	cout << "matrix test:" << endl;

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			cout << pline[i][j] << "   ";
		}

		cout << endl;
	}


	return 0;
}