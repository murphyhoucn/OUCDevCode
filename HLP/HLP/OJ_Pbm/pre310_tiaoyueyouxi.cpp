// assignment 10
// 跳跃游戏

# include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int array[n];

    for (int i = 0; i < n; i++)
    {
        cin >> array[i];
    }

    int count = 0; // 计数器
    int k = 0;

    while(count <= 20)
    {
        if (k > n - 1 || k < 0)
        {
            cout << "no";
            return 0;
        }
        else if(k == n - 1)
        {
            cout << k << ' ' << array[k] << endl;
            cout << "yes";
            return 0;
        }
        else
        {
            cout << k << ' ' << array[k] << endl;
            k += array[k];
            count++;
        }
    }

    cout << "no"; 
    return 0;
}