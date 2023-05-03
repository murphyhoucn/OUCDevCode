// 可行
# include <stdio.h>
# define N 3

int count(int n);

int main()
{
    int i;
    int n;

    // for (i = 0; i < N; i++)
    // {
    //     scanf("%d", &n);
    //     printf("%d\n",count(n));
    // }

// 原文链接：https://blog.csdn.net/diviner_s/article/details/109502597

// 多组输入输出
// 我们在做题中会有出现以下的情况，
// 情况一：题中要求在输入数据第一行给出固定数据量比如4，代表接下来需要输入有4行数据。
// 情况二：没有说固定的数据量，只给出以某一特定标识符作为结束标志，结束输入数据。常见是以输入0作为结束标志。
// 情况三：与情况二大致一样，但是结束没有固定标识符，以手动结束输入循环。（这种情况我们以EOF（文件结束）作为结束）

    while(scanf("%d", &n)!=EOF)
    {
        // scanf("%d", &n);
        printf("%d\n",count(n));        
    }

    return 0;
}

int count(int n)
{
    if (n <= 0){
        return -1;
    }
    if (n == 1){
        return 1;
    }
    if(n == 2){
        return 2;
    }
    else{
        return count(n-1) + count(n-2);
    }
}