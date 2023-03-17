# include <stdio.h>

int main()
{
    // 给定k（1 < k < 100）个正整数，其中每个数都是大于等于1，小于等于10的数。
    // 写程序计算给定的k个正整数中，1，5和10出现的次数。

    int k;
    int i;
    scanf("%d", &k);
    int n1 = 0, n5 = 0, n10 = 0;
    for (i = 0; i < k; i++)
    {
        int n;
        scanf("%d", &n);

        if (n == 1){n1++;}
        if (n == 5){n5++;}
        if (n == 10){n10++;}
    }

    printf("%d\n",n1);
    printf("%d\n",n5);
    printf("%d\n",n10);

    return 0;
}