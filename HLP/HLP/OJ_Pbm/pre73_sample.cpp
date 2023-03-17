// xunzhaoshanding
#include<iostream>
using namespace std;
 
int main()
{
    int hill[20][20];//存储所有的值
    //int peak[20][20];
    int m, n;//分别为长和宽
    cin >> m >> n;
    /*
    先将数组的值填充好，然后再找相对应的最大值。
    */
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cin >> hill[i][j];
        }
    }
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            if (((hill[i][j] >= hill[i - 1][j] && i - 1 >= 0) || (i - 1 < 0)) &&
                ((hill[i][j] >= hill[i + 1][j] && i + 1 <= m - 1) || (i + 1 > m - 1)) &&
                ((hill[i][j] >= hill[i][j + 1] && j + 1 <= n - 1) || (j + 1 > n - 1)) &&
                ((hill[i][j] >= hill[i][j - 1] && j - 1 >= 0) || (j - 1 < 0)))
                { 
                cout << i << ' ' << j << endl;
                }
 
        }
    }
    return 0;
}