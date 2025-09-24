/*
两个整数 a 和 b 运算后得到结果 c。表示为：a ? b = c，
其中，？可能是加法 +，减法 -，乘法 *，整除 / 或 取余 %。请根据输入的 a,b,c 的值，确定运算符。
如果某种运算成立，则输出相应的运算符，如果任何运算都不成立，则输出 error.
*/

# include <iostream>
# include <cstdio>

using namespace std;

int main()
{
    int a, b, c;
    scanf("%d,%d,%d", &a, &b, &c);
    // printf("%d %d %d\n", a,b,c);

    if (b != 0)
    {
        if (a + b == c)
        {
            printf("+");
        }
        else if (a - b == c)
        {
            printf("-");
        }
        else if (a * b == c)
        {
            printf("*");
        }
        else if (a / b == c)
        {
            printf("/");
        }
        else if (a % b == c)
        {
            printf("%%");
        }
        else
        {
            printf("error");
        }
    }
    else
    {
        if (a + b == c)
        {
            printf("+");
        }
        else if (a - b == c)
        {
            printf("-");
        }
        else if (a * b == c)
        {
            printf("*");
        }
        else
        {
            printf("error");
        }
    }
    return 0;
}