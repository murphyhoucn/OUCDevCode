# include <stdio.h>
# define N 6
// 给定一个正整数a，以及另外的5个正整数，问题是：这5个整数中，小于a的整数的和是多少？

int main()
{
    int a;
    int array[N];
    
    int i;
    for (i = 0; i < N; i++)
    {
        scanf("%d", &array[i]);
    }

    int sum = 0;

    for (i = 1; i < N; i++)
    {
        if (array[i] < array[0]){sum += array[i];}
    }

    printf("%d", sum);


    return 0;
}