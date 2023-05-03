#include <stdio.h>
int main()
{
    int x;
    //scanf_s("%d",&x);
	scanf("%d", &x);
    if (95<=x&&x<=100){printf("1");}
    else if (90<=x && x <95){printf("2");}
    else if (85<=x && x <90){printf("3");}
    else if(80<=x && x <85){printf("4");}
    else if (70<=x && x <80){printf("5");}
    else if (60<=x && x <70){printf("6");}
    else {printf("7");}

    return 0;
}