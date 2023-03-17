# include <stdio.h>
# define N 5
// 编写一个函数，输入参数是5*5的二维数组，和n，m两个行下标。
// 功能：判断n，m是否在数组范围内，如果不在，则返回0；如果在范围内，则将n行和m行交换，并返回1。

// 在main函数中， 生成一个5*5的矩阵，输入矩阵数据，并输入n，m的值。
// 调用前面的函数。如果返回值为0，输出error。如果返回值为1，输出交换n，m后的新矩阵。

int func(int (*array)[N], int n, int m);

int main()
{
    int array2D[N][N];
    int i, j;

    for(i=0;i<N;i++)
    {
        for(j=0;j<N;j++)
        {
            scanf("%d",&array2D[i][j]);
        }
    }

    int n, m;
    scanf("%d %d", &n, &m);


    // for(i=0;i<5;i++)
    // {
    //     printf("ceshi:%d\n",i);

    //     for(j=0;j<5;j++)
    //     {
    //         printf("%d\t",array2D[i][j]);
    //     }
    // }

    int ret = func(array2D, n, m);
    //printf("%d", ret);

    if (ret == 0)
    {
        printf("error\n");
    }
    else
    {
        for(i=0;i<N;i++)
        {
            //printf("ceshi:%d\n",i);
            for(j=0;j<N;j++)
            {
                printf("%4d",array2D[i][j]);
            }
            printf("\n");
        }
    }
    return 0;
}

int func(int (*array)[N], int n, int m)
{
    int i, j;

    // for(i=0;i<N;i++)
    // {
    //     //printf("ceshi:%d\n",i);
    //     for(j=0;j<N;j++)
    //     {
    //         printf("ceshi:%4d",array[i][j]);
    //     }
    //     printf("\n");
    // }

    if (n < N && m < N)
    {
        int tmp = 0;
        for (i = 0; i < N; i++)
        {
            tmp = array[n][i];
            // printf("ceshi:%d\n", tmp);
            array[n][i] = array[m][i];
            array[m][i] = tmp;
        }

        return 1;
    }
    else
    {
        return 0;
    }

}