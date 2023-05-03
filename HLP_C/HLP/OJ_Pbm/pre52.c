# include <stdio.h>
    
// 中位数定义：一组数据按从小到大的顺序依次排列，
// 处在中间位置的一个数或最中间两个数据的平均值
// （如果这组数的个数为奇数，则中位数为位于中间位置的那个数；
// 如果这组数的个数为偶数，则中位数是位于中间位置的两个数的平均值）.

// 给出一组无序整数，求出中位数，如果求最中间两个数的平均数，向下取整即可（不需要使用浮点数）

// 该程序包含多组测试数据，每一组测试数据的第一行为N，代表该组测试数据包含的数据个数，1 <= N <= 15000.
// 接着N行为N个数据的输入，N=0时结束输入

int zhongweishu(int arrayTmp[], int num);
int bubble(int arrayTmp[], int num);

int main()
{
    int ret;
    int N;
    scanf("%d", &N);
    while (N != 0)
    {
        int array[15000];
        int i;

        for (i = 0;i < N; i++)
        {
            scanf("%d", &array[i]);
        }

        bubble(array, N);
        // for (i = 0;i < N; i++)
        // {
        //     printf("ceshi:%d\n", array[i]);
        // }

        ret = zhongweishu(array, N);
        printf("%d\n", ret);

        scanf("%d", &N);
    }
    return 0;

}

int zhongweishu(int arrayTmp[], int num)
{

    int i;

    int ret;

    // for (i = 0;i < num; i++)
    // {
    //     printf("ceshi:%d\n", arrayTmp[i]);
    // }

    if (num % 2 == 0) // 偶数个
    {
        ret = (arrayTmp[num / 2] + arrayTmp[(num / 2) - 1]) / 2;
    }
    else
    {
        ret = arrayTmp[num / 2];
    }

    return ret;
}

int bubble(int arrayTmp[], int num)
{
    int i, j;
    int tmp;
    for (i = 0; i < num - 1; i++)
    {
        for (j = 1; j < num - i; j++)
        {
            if (arrayTmp[j - 1] > arrayTmp[j])
            {
                tmp = arrayTmp[j];
                arrayTmp[j] = arrayTmp[j - 1];
                arrayTmp[j - 1] = tmp;
            }
        }
    }

}