// assignment4
// 循环移动


# include <iostream>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;

    int array[n];
    
    for (int i = 0; i < n; i++)
    {
        cin >> array[i];
    }

    for (int i = 0; i < m; i++)
    {
        int *p;
        p = array + n - 1;
        int tmp = *p;

        for (int j = 1; j <n; j++)
        {
            *p = *(p - 1);
            p--;
        }
        *p = tmp;
    }

    for(int i = 0; i < n; i++)
    {
        cout << array[i] << ' ';
    }
    cout << endl;

    return 0;
}