/*
合并数列:有两个长度分别为n、m的数列，均由大到小排列，现要求将数列合并，合并后的数列仍由大到小排列。

输入
第一行：空格分隔的两个整数n和m 第二行：n个用空格分隔的整数 第三行：m个用空格分隔的整数

输出
一行：n+m个用空格分隔的整数
*/

# include <iostream>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    int array1[n];
    int array2[m];
    int array3[n + m];
    
    for (int i = 0; i < n; i++)
    {
        cin >> array1[i];
    }

    for (int i = 0; i < m; i++)
    {
        cin >> array2[i];
    }

    for (int i = 0; i < n; i++)
    {
        array3[i] = array1[i];
    }

    for (int i = n; i < m + n; i++)
    {
        array3[i] = array2[i - n];
    }

    for (int i = 0; i < m + n - 1; i++)
    {
        for (int j = 1; j < m + n - i; j++)
        {
            if(array3[j] > array3[j - 1])
            {
                int tmp = array3[j - 1];
                array3[j - 1] = array3[j];
                array3[j] = tmp;
            }
        }
    }

    for (int i = 0; i < m + n; i++)
    {
        cout << array3[i] << ' ';
    }

    return 0;
}
