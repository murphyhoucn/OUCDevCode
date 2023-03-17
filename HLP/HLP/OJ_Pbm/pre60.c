/*
已知一个整数数组 x[], 其中的元素彼此都不相同。
找出给定的数组中是否有一个元素满足x[i] = i 的关系，数组下标从 0 开始。
举例而言，如果 x[] = −2, −1, 7, 3, 0, 8, 则 x[3] = 3, 因此 3 就是答案。
输入
• 第一行包含一个整数 n（0 < n < 100），表示数组中元素的个数。
• 第二行包含 n 个整数，依次表示数组中的元素。
输出
输出为一个整数，即满足 x[i] = i 的元素，若有多个元素满足，输出第一个满足的元素。若没有元素满足，则输出“N”。
*/


# include <stdio.h>


int main()
{
    int n;
    scanf("%d", &n);
    int array[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &array[i]);
    }

    int ret = -1;

    for (int i = 0; i < n; i++)
    {
        if (array[i] == i)
        {
            ret = i;
            break;
        }
    }

    if (ret == -1)
    {
        printf("N");
    }
    else
    {
        printf("%d", ret);
    }

    return 0;

}