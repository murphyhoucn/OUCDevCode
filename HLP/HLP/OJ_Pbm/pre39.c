# include <stdio.h>
# include <math.h>
# include <stdlib.h>

int main()
{
    // 给定包含N个元素的数组a[1],a[2],a[3],...,a[N]；

    // 对于数组中一对元素a[i]、a[j]，它们的距离定义为：abs(a[i]-a[j])，这里abs()表示取绝对值。

    // 求数组中元素的最小距离。

    int num;
    scanf("%d", &num);
    int array[num];

    int i,j;

    int minabs = 100000;

    for (i = 0; i < num; i ++)
    {
        scanf("%d", &array[i]);
    }


    for (i = 0; i < num - 1; i ++)
    {
        for (j = i + 1; j < num - i; j ++)
        {
            if (minabs > abs(array[i] - array[j]))
            {
                minabs = abs(array[i] - array[j]);
            }
        }
    }

    printf("%d\n", minabs);
    return 0;
}