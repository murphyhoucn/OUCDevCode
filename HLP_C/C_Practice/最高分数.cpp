#include<iostream>
using namespace std;

int main()
{
	int n;
	cin >> n;
	int i, j, temp;
	int a[100];
	for (i = 0; i < n; i++)
	{
		cin >> a[i];
	}

	for (i = 0; i < n - 1; i++)
	{
		for (j = 1; j < n - i; j++)
		{
			if (a[j] > a[j - 1])
			{
				temp = a[j - 1];
				a[j - 1] = a[j];
				a[j] = temp;
			}
		}
	}

	cout << a[0];

	return 0;
}