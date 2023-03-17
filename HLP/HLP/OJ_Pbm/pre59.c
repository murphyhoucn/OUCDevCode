// 判断闰年

// 描述
//     判断某年是否是闰年。
// 输入
//     输入只有一行，包含一个整数 a（0 < a < 3000）。
// 输出
//     一行，如果公元 a 年是闰年输出Y，否则输出N。
# include <stdio.h>
int judge(int year);
int main()
{
    int year;
    scanf("%d", &year);

    int ret = judge(year);
    if (ret == 0)
    {
        printf("Y");
    }
    else
    {
        printf("N");
    }

}

int judge(int year)
{
    int Flag;
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
	{
		Flag = 0;
	}
	else
	{
		Flag = 1;
	}

    return Flag;
}