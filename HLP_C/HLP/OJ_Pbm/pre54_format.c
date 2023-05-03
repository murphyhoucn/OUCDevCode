// 不可行

# include <stdio.h>
# include <math.h>

// 给定一组点 (x, y)（第一象限），求距离最远的两个点之间的距离。
// 第一行是点数 n（n 大于等于 2）；接着每一行代表一个点，由两个浮点数x y组成。
// 输出一行是最远两点之间的距离。

// 使用printf("%.4f", dis);精确到小数点后4位，



double distance(double *x, double *y, int n);
void output(double x);

int main()
{
    int n;
    scanf("%d", &n);
    double x[n];
    double y[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%lf %lf", &x[i], &y[i]);
    }

    // 6
    // 34.0 23.0
    // 28.1 21.6
    // 14.7 17.1
    // 17.0 27.2
    // 34.7 67.1
    // 29.3 65.1

    // for (int i = 0; i < n; i++)
    // {
    //     printf("ceshi:%lf-%lf\n", x[i], y[i]);
    // }

    double ret = distance(x, y, n);

    // printf("%.4f", ret);


    // tips：小数点后不足四位不需补0
    
    // double ret = 53.8516;  // 53.8516
    // double ret = 53.8510;  // 53.851
    // double ret = 53.8500;  // 53.85
    // double ret = 53.8000;  // 53.8
    // double ret = 53.0000;  // 53

    output(ret);

    return 0;
}

double distance(double *x, double *y, int n)
{
    double maxDis = 0.0;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            double dis = sqrt(((x[i]-x[j]) * (x[i]-x[j])) + ((y[i]-y[j]) * (y[i]-y[j])));
            if (dis > maxDis)
            {
                maxDis = dis;
            }
        }
    }

    return maxDis;
}

void output(double x)
{
    // 53.8516
    int xTmp = x * 10000;  // 53 8516
    // printf("ceshi:%d\n", xTmp);

    if ((int)(xTmp/10000.0) == xTmp/10000.0) //53 0000
    {
        printf("%d", xTmp / 10000);
    }

    else if ((int)(xTmp/1000.0) == xTmp/1000.0) //53 8000
    {
        printf("%.1f", xTmp / 10000.0);
    }
    
    else if ((int)(xTmp/100.0) == xTmp/100.0) //53 8500
    {
        printf("%.2f", xTmp / 10000.0);
    }

    else if ((int)(xTmp/10.0) == xTmp/10.0) //53 8510
    {
        printf("%.3f", xTmp / 10000.0);
    }

    else
    {
        printf("%.4f", x);
    }
}