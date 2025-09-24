#include <iostream>
using namespace std;

int main()
{
	int n, m, s;
	int i, j, k;

	cin >> n >> m >> s;

	int*** a = (int***)malloc(sizeof(int**) * n);
	for (i = 0; i < n; i++)
	{
		a[i] = (int**)malloc(sizeof(int*) * m);
		for (int j = 0; j < m; j++)
		{
			a[i][j] = (int*)malloc(sizeof(int) * k);
				for (k = 0; k < s; k++)
				{
					a[i][j][k] = i * m * s + j * s * k;
				}
		}
	}


	return 0;
}