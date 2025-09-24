# include <stdio.h>

int main()
{
    // 从键盘输入一个任意的9位以内的整数，要求正确地分离出它的每一位数，
    // 并分别在屏幕上输出，输出采用每行输出一个数的方式，不带其它符号。

    int n;
    scanf("%d", &n);

    int array[20];
    int d = 10;
    int i = 0;
    int j;
    while(n > 0)
    {
        array[i] = n % d;
        // printf("======%d\n", array[i]);
        n /= d;
        i ++;
    }

    // for (j = 0; j < i; j++)
    // {
    //     printf("%d\n", array[j]);
    // }

    // printf("\n======================%d\n", i);


    for (j = 0; j < i / 2 + 1 ; j++)
    {
        int tmp;
        tmp = array[i - 1 - j];
        array[i - 1 - j] = array[j];
        array[j] = tmp;
    }

    for (j = 0; j < i; j++)
    {
        printf("%d\n", array[j]);
    }
    return 0;

}