// 可行


/*
输入一个整数，判断它能否被3，5，7整除，并输出以下信息：
1、能同时被3，5，7整除（直接输出3 5 7，每个数中间一个空格）；
2、能被其中两个数整除（输出两个数，小的在前，大的在后。例如：3 5或者 3 7或者5 7,中间用空格分隔）
3、能被其中一个数整除（输出这个除数）
4、不能被任何数整除；（输出小写字符'n',不包括单引号)
*/
# include <stdio.h>
void count(int n);
int main()
{
    int n;

    while(scanf("%d", &n)!=EOF)
    {
        // scanf("%d", &n);
        count(n);       
    }

    return 0;
}
void count(int n)
{
    int flag1 = 0;
    int flag2 = 0;
    int flag3 = 0;
    
    if (n % 3 == 0)
    {
        flag1 = 1;
        printf("3");
    }
    if (n % 5 == 0)
    {
        if (flag1 == 1)
        {
            printf(" ");
        }
        flag2 = 1;
        printf("5");
    }
    if (n % 7 == 0)
    {
        if (flag2 == 1 || flag1 == 1)
        {
            printf(" ");
        }
        flag3 = 1;
        printf("7");
    }

    if (flag1 == 0 && flag2 == 0 && flag3 == 0)
    {
        printf("n");
    }
    
    printf("\n");

}
