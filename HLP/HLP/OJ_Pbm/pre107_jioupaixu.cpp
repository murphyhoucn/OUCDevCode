// 输入十个整数，将十个整数按升序排列输出，并且奇数在前，偶数在后。
// 奇偶排序

# include <iostream>
using namespace std;

int main()
{
    int n = 10;
    int array[n];
    
    for (int i = 0; i < n; i++)
    {
        cin >> array[i];
    }

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 1; j < n - i; j++)
        {
            if(array[j] < array[j - 1])
            {
                int tmp = array[j - 1];
                array[j - 1] = array[j];
                array[j] = tmp;
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        if (array[i] % 2 == 1)
        {
            cout << array[i] << ' ';
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (array[i] % 2 == 0)
        {
            cout << array[i] << ' ';
        }
    }

    return 0;
}