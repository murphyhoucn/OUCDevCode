#include "stdio.h"

// 经典 DP 爬楼梯   也像是 斐波那契数列
int main() {
    int n;
    while (scanf("%d", &n)!=EOF) {
        int ways_total[n + 1];
        ways_total[0] = 1;
        for (int i = 1; i <= n; ++i) {
            if (i == 1)
                ways_total[i] = 1;
            else
                ways_total[i] = ways_total[i - 1] + ways_total[i - 2];
        }
        printf("%d\n",ways_total[n]);
    }
}