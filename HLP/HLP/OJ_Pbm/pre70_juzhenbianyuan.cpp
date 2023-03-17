// assignment 8
// 输入一个整数矩阵，计算位于矩阵边缘的元素之和。
// 所谓矩阵边缘的元素，就是第一行和最后一行的元素以及第一列和最后一列的元素。

# include <iostream>
using namespace std;

int main()
{
    int k;

    int m, n;

    cin >> k;

    while (k != 0) // 关键部分
    {
        cin >> m >> n;
        int array[m][n];

        int sum = 0;

        for (int i = 0; i < m; i++)
        {
            for(int j = 0; j < n; j++)
            {
                cin >> array[i][j];
                if(i == 0 || j == 0 || i == (m - 1) || j == (n - 1)) // 关键部分
                {
                    sum += array[i][j];
                }
            }
        }

        cout << sum << endl;

        k--;
    }
    return 0;
}