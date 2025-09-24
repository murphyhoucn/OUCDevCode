// 不可行

# include <stdio.h>
# include <math.h>


// 给定一组点 (x, y)（第一象限），求距离最远的两个点之间的距离。
// 第一行是点数 n（n 大于等于 2）；接着每一行代表一个点，由两个浮点数x y组成。
// 输出一行是最远两点之间的距离。

// 使用printf("%.4f", dis);精确到小数点后4位，

double distance(double *x, double *y, int n);

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

    // for (int i = 0; i < n; i++)
    // {
    //     printf("ceshi:%lf-%lf\n", x[i], y[i]);
    // }

    double ret = distance(x, y, n);

    printf("%.4f\n", ret);

    return 0;
}

double distance(double *x, double *y, int n)
{
    double maxDis = 0.0;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            double dis = sqrt((x[i] - x[j]) * (x[i] - x[j]) + (y[i] - y[j]) * (y[i] - y[j]));
            if (dis > maxDis)
            {
                maxDis = dis;
            }
        }
    }

    return maxDis;
}