# include <stdio.h>
# define N 10

int main()
{
    // 输入十个整数，将十个整数按升序排列输出，并且奇数在前，偶数在后。

    int array[N];
    int i, j;
    int tmp;
    
    for (i = 0; i < N; i ++)
    {
        scanf("%d", &array[i]);
    }


        for (i = 0; i < N - 1; i++)
    {
        for (j = 1; j < N - i; j++)
        {
            if (array[j - 1] > array[j])
            {
                tmp = array[j];
                array[j] = array[j - 1];
                array[j - 1] = tmp;
            }

        }
    }

    for (i = 0; i < N; i ++)
    {
        if (array[i] % 2 != 0)
        {
            printf("%d ", array[i]);
        }
    }


    for (i = 0; i < N; i ++)
    {
        if (array[i] % 2 == 0)
        {
            printf("%d ", array[i]);
        }
    }

    return 0;

}