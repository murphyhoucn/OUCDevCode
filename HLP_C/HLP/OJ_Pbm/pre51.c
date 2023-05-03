# include <stdio.h>

// 给定一组整数，要求利用数组把这组数保存起来，再利用指针实现对数组中的数循环移动。
// 假定共有n个整数，则要使前面各数顺序向后移m个位置，并使最后m各数变为最前面的m各数。

//注意，不要用先输出后m个数，再输出前n-m个数的方法实现，也不要用两个数组的方式实现。
//要求只用一个数组的方式实现，一定要保证在输出结果时，输出的顺序和数组中数的顺序是一致的。

/*
n  m
11 4

15 3 76 67 84 87 13 67 45 34 45
0  1 2  3  4  5  6  7  8  9  10

67 45 34 45 15 3 76 67 84 87 13
*/

int main()
{
    int n;
    int m;
    scanf("%d%d", &n, &m);

    int i;
    int j;
    int array[n];

    for (i = 0; i < n; i++)
    {
        scanf("%d", &array[i]);
    }

    // printf("ceshi:paixuqian:");
    // for (i = 0; i < n; i++)
    // {
    //     printf("%d ", array[i]);
    // }
    // printf("\n");


    int *p;


    for (i = 0; i < m; i++)
    {
        p = array + n - 1;
        int tmp = *p;
        // printf("ceshi:tmp = %d\n", tmp);
        for (j = 1; j < n; j++)
        {
            *p = *(p - 1);
            p--;
        }
        *p = tmp;
    }


    // printf("ceshi:paixuhou:");
    for (i = 0; i < n; i++)
    {
        printf("%d ", array[i]);
    }
    printf("\n");

    return 0;

}