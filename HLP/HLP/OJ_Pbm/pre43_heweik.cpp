// assignment3
// 找和为K的两个元素

# include <iostream>
using namespace std;

int main()
{
    int n;
    int k;
    cin >> n >> k;

    int array[n];
    int flag = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> array[i];
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 1; j < n; j++)
        {
            // if (i != j)
            // {
            // }

            if (array[i] + array[j] == k)
            {
                flag = 1;
                break;
            }

        }
    }

    if (flag == 1){cout << "yes" << endl;}
    else {cout << "no" << endl;}

    return 0;
}