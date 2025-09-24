// 请编写一个程序，程序的功能是：
// 将输入的一个整数上各位上为偶数的数去除,剩余的数按原来从高位到低位的顺序组成一个新的数。
# include <iostream>
using namespace std;

int main()
{
    int x;
    cin >> x;

    int array[1000];
    int i = 0;
    while(x > 0)
    {
        array[i] = x % 10;
        x /= 10;
        i++;
    }

    // cout << i;

    for (int j = i - 1; j > -1; j--)
    {
        if (array[j] % 2 != 0)
        {
            cout<<array[j];
        }
    }
    return 0;
}