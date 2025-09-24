# include <stdio.h>

int main()
{
    // 对一个整数n,如果其各个位数的数字相加得到的数m能整除n,则称n为自整除数.
    // 例如21,21%(2+1)==0,所以21是自整除数.现求出从10到n(n < 100)之间的所有自整除数.

    // 10 ~ 99 所有的两位数
    // 10 ~ n

    int n;
    scanf("%d", &n);

    int i;
    for (i = 10; i < n + 1; i++)
    {
        int fenzi = i%10;
        int fenmu = i/10;

        if (i % (fenzi + fenmu)  == 0)
        {
            printf("%d\n", i);
        }
    }

    return 0;

}