// exp6 assignment2
// 分离整数的各位数

# include <iostream>
using namespace std;

int main()
{
    int x;
    cin >> x;

    int array[10];
    int d = 10;
    int i = 0;
    
    while (x > 0)
    {
        array[i] = x % d;
        x /= d;
        i++;
    }

    // x的位数:i

    for (int j = i - 1; j > -1; j--)
    {
        cout << array[j] << endl;
    }

    return 0;
}