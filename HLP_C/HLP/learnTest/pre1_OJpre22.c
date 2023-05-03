# include <stdio.h>

// 孙老师讲授的《计算概论》这门课期中考试刚刚结束，
// 他想知道考试中取得的最高分数。因为人数比较多，他觉得这件事情交给计算机来做比较方便。你能帮孙老师解决这个问题吗？


//输入两行，第一行为整数n（1 <= n < 100），
// 表示参加这次考试的人数.
// 第二行是这n个学生的成绩，相邻两个数之间用单个空格隔开。

// 所有成绩均为0到100之间的整数。


int main()
{
    int n;
    int score;
    int Max = 0;
    int i;

    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &score);
        if (score > Max) 
        {
            Max = score;
        }
    }

    printf("%d", Max);
    
    return 0;
}