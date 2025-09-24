# include <stdio.h>
# include <stdlib.h>

int main()
{
    void *p;
    int cnt = 0;

    
    // p = malloc(100*1024*1024);
    
    // printf("%ld \n", sizeof(p)) ;
    
    // while (1)
    while ((p = malloc(100*1024*1024)))
    {
        cnt ++;
    }

    printf("memmory: %d \n", cnt);

    free(p);

    return 0;
}
