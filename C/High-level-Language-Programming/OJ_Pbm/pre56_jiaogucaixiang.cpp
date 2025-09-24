// assignment 7
// 角谷猜想

// 所谓角谷猜想，是指
// 对于任意一个正整数，如果是奇数，则乘 3 加 1，
// 如果是偶数，则除以2，
// 得到的结果再按照上述规则重复处理，最终总能够得到 1。

// 如，假定初始整数为 5，计算过程分别为 16、8、4、2、1。

// 程序要求输入一个整数，将经过处理得到 1 的过程输出来。

# include <iostream>
using namespace std;
int even(int xx);
int odd(int xx);

int main()
{
    int x;
    cin >> x;

    while (x != 1)
    {
        if (x % 2 == 0)
        {
            x = even(x);
        }
        else
        {
            x = odd(x);
        }
    }
    cout << "End";

    return 0;
}

int even(int xx)
{
    int ret = xx / 2;
    cout << xx << '/' << '2' << '=' << ret << endl;
    return ret;
}
int odd(int xx)
{
    int ret = xx * 3 + 1;
    cout << xx << '*' << "3+1" << '=' << ret << endl;
    return ret;
}

