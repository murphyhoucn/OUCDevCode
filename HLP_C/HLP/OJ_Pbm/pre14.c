# include <stdio.h>

int main()
{
    // 将一个数组中的值按逆序重新存放。例如，原来的顺序为8,6,5,4,1。要求改为1,4,5,6,8。

    int n;
    scanf("%d", &n);

    int array[100];
    int i;
    
    for (i = 0; i < n; i++)
    {
        scanf("%d", &array[i]);
    }
    for (i = 0; i < n / 2 + 1 ; i++)
    {
        int tmp;
        tmp = array[n - 1 - i];
        array[n - 1 - i] = array[i];
        array[i] = tmp;
    }
    for (i = 0; i < n; i++)
    {
        printf("%d", array[i]);

        if (i != n - 1){printf(" ");}
    }
    return 0;
}