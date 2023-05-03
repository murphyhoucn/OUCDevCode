# include <stdio.h>

int main()
{
    // 你买了一箱n个苹果，很不幸的是买完时箱子里混进了一条虫子。
    // 虫子每x小时能吃掉一个苹果，假设虫子在吃完一个苹果之前不会吃另一个，
    // 那么经过y小时你还有多少个完整的苹果？

    // 输入仅一行，包括n，x和y（均为整数）。输入数据保证y <= n * x。

    float n, x, y;
    float n1 = 0.0;
    int n2 = 0;
    scanf("%f %f %f", &n, &x, &y);

    n1 = y / x;
    // printf("n1 = %f\n",n1);

    if (n1 != (int)n1)
    {
        n2 = (int)n1 + 1;
        // printf("n2 = %d\n", n2);
    }
    else
    {
        n2 = (int)n1;
    }

    printf("%d", (int)(n - n2));

    return 0;



}