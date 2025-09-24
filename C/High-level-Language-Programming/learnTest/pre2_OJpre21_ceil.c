# include <stdio.h>
# include <math.h>

int main()
{
    double n;
    double h;
    double r;
    double v;
    scanf("%lf %lf", &h, &r);

    v = 3.14159 * r * r * h;

    n = 20000 / v; 

    // double ceil(double x)

    printf("%d", (int)ceil(n));

    return 0;

}