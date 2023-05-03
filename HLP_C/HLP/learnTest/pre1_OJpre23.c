# include <stdio.h>

int main()
{
    // 输入6个正整数，且这6个正整数中至少存在一个奇数和一个偶数。 

    // 设这6个正整数中最大的奇数为a，最小的偶数为b，求出|a-b|的值

    int a[6];
    int i;

    for (i = 0; i < 6; i++)
    {
        scanf("%d", &a[i]);
    }
    // for (i = 0; i < 6; i++)
    // {
    //     printf("%d\t", a[i]);
    // }

    int emin = 100;
    int omax = 0;

    for (i = 0; i < 6; i++)
    {
        if (a[i] % 2 == 0) // ou shu
        {
            if (emin > a[i])
            {
                emin = a[i];
            }
        }
        else
        {
            if (omax < a[i])
            {
                omax = a[i];
            }
        }
    }


    if (omax > emin)
    {
        printf("%d", omax - emin);
    }
    else
    {
        printf("%d", emin - omax);
    }
    return 0;
}