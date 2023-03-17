// assignment 6
// 寻找下标
// 已知一个整数数组 x[], 其中的元素彼此都不相同。
// 找出给定的数组中是否有一个元素满足x[i] = i 的关系，数组下标从 0 开始。
// 举例而言，如果 x[] = −2, −1, 7, 3, 0, 8, 则 x[3] = 3, 因此 3 就是答案。


# include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int array[n];

    int flag = 1000;

    for (int i = 0; i < n; i++)
    {
        cin >> array[i];
    }

    for (int i = 0; i < n; i++)
    {
        if (i == array[i])
        {
            flag = i;
            break;
        }
    }

    if (flag == 1000)
    {
        cout << 'N';
    }
    else
    {
        cout << flag;
    }

    return 0;
}