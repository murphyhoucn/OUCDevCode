# include <iostream>
using namespace std;

// OJ已接受

int main()
{
    int n;
    cin >> n;
    int a[100][100];
    int k, x, y, m = 1;

    for(k = 1; k <= n; k++) 
    { 
        for(x = 0, y = k - 1; y >= 0; x++, y--)
        { 
            if(k % 2 == 0) 
            { 
                a[x][y] = m; 
                m++; 
            } 
            else 
            { 
                a[y][x] = m; 
                m++; 
            } 
        }
        
    }



    for(k = n + 1; k<2*n;k++)
    {
        for(x=n-1,y=k-1-x;y<=n-1;x--,y++)
        {
            if(k%2==0)
            {
                a[y][x]=m;
                m++;
            }
            else
            {
                a[x][y]=m;
                m++;
            }
        }
    }


    for (int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            cout << a[i][j];
            if (j < n - 1) 
            {
                cout << " ";
            }
        }
        cout << endl;
    }

    return 0;

}