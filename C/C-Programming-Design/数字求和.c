#include <stdio.h>

int main()
{
    int a[6];
    int i;
    int sum=0;
    for (i-0;i<6;i++)
    {
        scanf("%d",&a[i]);
    }

    for (i=1;i<6;i++)
    {
        if (a[i]<a[0])
        {
            sum+=a[i];
        }
    }

    printf("%d",sum);

    return 0;
}