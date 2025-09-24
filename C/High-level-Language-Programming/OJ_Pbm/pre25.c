// 输入一个0--100的分数，判断分数代表什么等级。

// 95<=分数<=100, 输出1

// 90<=分数<95,输出2

// 85<=分数<90,输出3

// 80<=分数<85,输出4

// 70<=分数<80,输出5

// 60<=分数<70输出6

// 分数 < 60;输出7.

# include <stdio.h>

void sp(int sc);
int main()
{
    int num;
    scanf("%d", &num);

    sp(num);

    return 0;
}

void sp(int sc)
{
    if (sc > 95 - 1 && sc < 100 + 1){printf("1");}
    else if (sc > 90 - 1 && sc < 95){printf("2");}
    else if (sc > 85 - 1 && sc < 90){printf("3");}
    else if (sc > 80 - 1 && sc < 85){printf("4");}
    else if (sc > 70 - 1 && sc < 80){printf("5");}
    else if (sc > 60 - 1 && sc < 70){printf("6");}
    else{printf("7");}
}