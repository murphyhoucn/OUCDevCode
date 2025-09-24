// https://blog.csdn.net/KLFTESPACE/article/details/79347544

#include <stdio.h>

int main(void)
{
    int n;

    // while(~scanf("%d", &n))
    while(scanf("%d", &n)!=EOF)
    {
        int flag = 1;
        if(n%3 && n%7 && n%5)
            printf("n");

        if(n%3 == 0)
        {     
            printf("3");
            flag = 0; 
        }
        if(n%5 == 0)
        {
            if(flag == 0)
            printf(" ");
            flag = -1;
            printf("5");
        }
        if(n%7 == 0)
        {
            if(flag == 0||flag == -1)
                printf(" ");
                printf("7");
        }
        printf("\n");
    }

    return 0;
}