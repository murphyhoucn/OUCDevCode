# include <stdio.h>


// 输入
// 共2行，第一行为过往病人的数目n（0 < n <= 100)，第二行为每个病人患病时的年龄。


// 输出
// 每个年龄段（分四段：18以下，19-35，36-60，61-）的患病人数占总患病人数的比例，
// 以百分比的形式输出，精确到小数点后两位（double）。

/*

10
1 11 21 31 41 51 61 71 81 91

1-18: 20.00%
19-35: 20.00%
36-60: 20.00%
61-: 40.00%
*/

int main()
{
    int n;
    scanf("%d", &n);

    int age;

    int i;
    int n1 = 0;
    int n2 = 0;
    int n3 = 0;
    int n4 = 0;

    for(i = 0; i < n; i++)
    {
        scanf("%d", &age);

        if (age > 0 && age < 19){n1++;}
        else if (age > 18 && age < 36){n2++;}
        else if (age > 35 && age < 61){n3++;}
        else {n4++;}
    }

    printf("1-18: %.2lf%%\n", ((double)n1 / n) * 100);
    printf("19-35: %.2lf%%\n", ((double)n2 / n) * 100);
    printf("36-60: %.2lf%%\n", ((double)n3 / n) * 100);
    printf("61-: %.2lf%%", ((double)n4 / n) * 100);

    return 0;

}