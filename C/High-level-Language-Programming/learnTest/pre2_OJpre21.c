# include <stdio.h>
# include <math.h>

#define PI acos(-1)
# define N 20000.0 

int main()
{
    // 一只大象口渴了，要喝20升水才能解渴，
    // 但现在只有一个深h厘米，底面半径为r厘米的小圆桶(h和r都是整数)。
    // 问大象至少要喝多少桶水才会解渴。

    // 输入有一行：包行两个整数，以一个空格分开，分别表示小圆桶的深h和底面半径r，单位都是厘米。


    // 20L = 20dm^3 = 20000cm^3

    float v;
    int h, r;
    float n1;
    int n2;

    scanf("%d %d", &h,&r);

    v = PI * r * r * h;

    n1 = N / v;



    /*

    ceil(x)对x向上取整，头文件：cmath (c++)或math.h（c语言）
    
    */

    
    if (n1 != (int)n1)
    {
        n2 = (int)n1 + 1;
        // printf("n2 = %d\n", n2);
    }
    else
    {
        n2 = (int)n1;
    }

    printf("%d", n2);

}