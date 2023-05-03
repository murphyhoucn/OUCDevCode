// 输入一个整数矩阵，计算位于矩阵边缘的元素之和。
// 所谓矩阵边缘的元素，就是第一行和最后一行的元素以及第一列和最后一列的元素。

# include <iostream>
using namespace std;

int main()
{
    int k;
    int m, n;
    cin >> k;
    // cout << "ceshi: k = " << k << endl;

    while (k != 0)
    {   cin >> m >> n;
        // cout << "ceshi: m,n = " << m << n << endl;
        int array[m][n];
        int sum = 0;
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cin >> array[i][j];
                if(i == 0 || j == 0 || i == (m - 1) || j == (n - 1))
                {
				    sum += array[i][j];
                }
			}
        }
        cout << sum << endl;

        k--;
    }
}