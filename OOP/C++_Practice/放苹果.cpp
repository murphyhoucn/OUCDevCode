//µÝ¹é

#include <iostream>
using namespace std;


int K(int m, int n)
{
	if (m == 0 || n == 1)    //    ||»òÕß
	{
		return 1;
	}

	if (n > m) 
	{
		return K(m, m);
	}

	return K(m, n - 1) + K(m - n, n);
}

int main()
{
	int t;
	cin >> t ;

	

	for (int i = 0; i < t; i++)
	{
		int M, N;
		cin >> M;
		cin >> N;
		cout << K(M, N) << endl;

	}

	return 0;
}
