# include <stdio.h>

int main()
{
    // 在一个长度为n(n < 1000)的整数序列中，判断是否存在某两个元素之和为k。

    int n;
    int k;
    scanf("%d %d", &n, &k);

    int array[n];
    int i;
    for (i = 0; i < n; i++)
    {
        scanf("%d", &array[i]);
    }

    int j;
    int sum;
    int flag = 0;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            if (i != j)
            {
                sum =array[i] + array[j];
                if (sum == k)
                {
                    flag = 1;
                    break;
                }
            }
        }
    }

    if (flag == 1)
    {
        printf("yes\n");
    }
    else
    {
        printf("no\n");
    }

    return 0;


}