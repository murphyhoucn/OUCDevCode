// 输入三角形的三边长,求三角形的面积。
# include <iostream>
# include <cstdio>

using namespace std;

int main()
{
    int a, b, c;
    scanf("%d，%d，%d", &a, &b, &c);

    printf("%.2f", (float)(a + b + c) * 0.5);
    return 0;
}