# include <iostream>
using namespace std;
// 给定一个row行col列的整数数组array，要求从array[0][0]元素开始，按回形从外向内顺时针顺序遍历整个数组。如图所示： 
int main()
{
    int m, n;
    int i, j;
    int temp;
    int array[101][101];
    int flag = 1;//层数（最外层为0层）
    cin >> m >> n;
    temp = m * n;

    for(int i = 0; i < m; i++)
    {
        for(j =0;j<n;j++)
        {
            cin >> array[i][j];
        }
    }


    while(1)
    {
        for(j=flag-1;j<=n-flag-1;j++)//上
        {
            cout << array[flag-1][j] << endl;
            temp--;
            if(temp==0) return 0;
        }

        for(i=flag-1;i<=m-flag;i++)//右
        {
            cout << array[i][n-flag] << endl;
            temp--;
            if(temp==0) return 0;
        }

        for(j=n-flag-1;j>=flag-1;j--)//下
        {
            cout << array[m-flag][j] << endl;
            temp--;
            if(temp==0) return 0;
        }

        for(i=m-flag-1;i>=flag;i--)//左
        {
            cout << array[i][flag-1] << endl;
            temp--;
            if(temp==0) return 0;
        }
        flag++;
    }
}