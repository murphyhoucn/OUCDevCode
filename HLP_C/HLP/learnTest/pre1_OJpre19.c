# include <stdio.h>

int main()
{
    // 冒泡排序
    int num;
    scanf("%d", &num);

    int i, j, tmp;
    int array[100];
    for(i = 0; i < num ; i++)
    {
        scanf("%d", &array[i]);
    }

    for (i = 0; i < num - 1; i++)
    {
        for (j = 1; j < num - i; j++)
        {
            if (array[j - 1] > array[j])
            {
                tmp = array[j];
                array[j] = array[j - 1];
                array[j - 1] = tmp;
            }

        }
    }

    for (i = 0; i < num; i++)
    {
        printf("%d\n", array[i]);
    }

    return 0;

}
