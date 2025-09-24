# include <stdio.h>

int main()
{
    // 某程序员开始工作，年薪N万，他希望在中关村公馆买一套60平米的房子，现在价格是200万，
    // 假设房子价格以每年百分之K增长，并且该程序员未来年薪不变，且不吃不喝，不用交税，
    // 每年所得N万全都积攒起来，问第几年能够买下这套房子？（第一年年薪N万，房价200万）

    // 一行，包含两个正整数N（10 <= N <= 50）, K（1 <= K <= 20），中间用单个空格隔开。

    int N, K;
    scanf("%d %d", &N, &K);

    int money = N;
    int perice = 200;
    int year = 1;

    while (money < perice)
    {
        money += N;
        perice = perice * (1 + 0.01 * K);
        year ++;
    }

    if (year < 20)
    {
        printf("%d", year);
    }
    else
    {
        printf("Impossible");
    }

    return 0;

}