# include <stdio.h>

// 所谓角谷猜想，是指
// 对于任意一个正整数，如果是奇数，则乘 3 加 1，
// 如果是偶数，则除以2，
// 得到的结果再按照上述规则重复处理，最终总能够得到 1。

// 如，假定初始整数为 5，计算过程分别为 16、8、4、2、1。

// 程序要求输入一个整数，将经过处理得到 1 的过程输出来。
int odd(int n);
int even(int n);

int main()
{
    int num;
    scanf("%d", &num);

    while (num != 1)
    {
        if (num % 2 == 0)
        {
            num = even(num);
        }
        else
        {
            num = odd(num);
        }
    }

    printf("End");

}

int odd(int n)
{
    int ret = n * 3 + 1;
    printf("%d*3+1=%d\n", n ,ret);
    return ret;
}

int even(int n)
{
    int ret = n / 2;
    printf("%d/2=%d\n", n ,ret);
    return ret;
}