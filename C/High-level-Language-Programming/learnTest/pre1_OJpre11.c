# include <stdio.h>

int main()
{
    // 奇数求和
    //计算正整数 m 到 n（包括 m 和 n）之间的所有奇数的和，其中，m 不大于 n，且 n 不大于300。例如 m = 3，n = 12，其和则为：3 + 5 + 7 + 9 + 11 = 35。

    int m, n;
    scanf("%d %d", &m, &n);

    int sum = 0;
    int i;
    for (i = m; i < n + 1; i++)
    {
        if (i %2 == 1)
        {
            // printf("jishu: %d\n", i);
            sum += i;
        }
    }

    printf("%d\n", sum);

    return 0;

}
