# include <stdio.h>
int main()
{
    // 给定一个十进制整数N，求其对应2进制数中1的个数
    // 第一个整数表示有N组测试数据，其后N行是对应的测试数据，每行为一个整数。
    int n;
    int i = 0;
    scanf("%d", &n);
    for (i = 0; i < n; i ++) {
        int x, num1 = 0;
        scanf("%d", &x);

        while (x > 0) {
            num1 += x % 2;
            x /= 2;
        }
        printf("%d\n", num1);
    }
    return 0;
}
