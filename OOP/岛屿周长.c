#include<stdio.h>

int main()
{
    int n, m, i, j, sum = 0;
    scanf_s("%d %d", &n, &m);
    int squre[100][100] = { 0 };
    for (i = 1; i <= n; i++)
        for (j = 1; j <= m; j++)
            scanf_s("%d", &squre[i][j]);
    for (i = 1; i <= n; i++)
        for (j = 1; j < m; j++)
        {
            if (squre[i][j] == 1 && squre[i - 1][j] == 0)
                sum++;
            if (squre[i][j] == 1 && squre[i + 1][j] == 0)
                sum++;
            if (squre[i][j] == 1 && squre[i][j - 1] == 0)
                sum++;
            if (squre[i][j] == 1 && squre[i][j + 1] == 0)
                sum++;
        }
    printf("%d", sum);
    return 0;
}