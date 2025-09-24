#include <stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
	//scanf_s("%d", &n);

    int i;
    int a;
    int b;

    for (i=10;i<n+1;i++)
    {
        int temp=i;
        a=temp%10;
        b=temp/10;
        if (i%(a+b)==0)
        {
            printf("%d\n",i);

        }
			
    }
	
    return 0;
}
