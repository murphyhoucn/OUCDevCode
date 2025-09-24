# include <stdio.h>
# include <string.h>
# define STACKLENGTH 1000

// 这样的方法居然过来，这不合理？？？？？？？

int main(void)
{

    char array[STACKLENGTH];
    char *p = array;

    fgets(array, STACKLENGTH,stdin);

    array[strlen(array) - 1] = '\0';

    int l1 = 0;
    int l2 = 0;
    int l3 = 0;
    
    int r1 = 0;
    int r2 = 0;
    int r3 = 0;

    while(*p != '\0')
    {
        char ch = *p;

        switch(ch)
        {
            case '(': l1++; break;
            case '[': l2++; break;
            case '{': l3++; break;

            case ')': r1++; break;
            case ']': r2++; break;
            case '}': r3++; break;
            default: break;
        }
        p++;
    }
    // printf("%d %d %d %d %d %d\n", l1, l2, l3, r1, r2, r3);
    if (l1 == r1 && l2 == r2 && l3 == r3){printf("1");}
    else{printf("0");}

    return 0;
}