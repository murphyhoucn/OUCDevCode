// 有两个字符串str和substr，str的字符个数不超过10，substr的字符个数为3。（字符个数不包括字符串结尾处的'\0'。）将substr插入到str中ASCII码最大的那个字符后面，若有多个最大则只考虑第一个。

# include <stdio.h>
# include <string.h>

int main()
{
    char str[10];
    char substr[10];
    
    // while (scanf("%s%s", str, substr) != EOF)
    while (~scanf("%s %s", str, substr))
    {
        // printf("cesshi:%s----%s\n", str, substr);

        int length = strlen(str);
        int max = 0;

        for(int i=0; i<length; i++){
            if(str[i]>str[max]) { max = i; }  // 最大数的下标。
        }

        for(int i=0; i<=max; i++) {printf("%c", str[i]);}
        printf("%s", substr);
        for(int i=max+1; i<length; i++){printf("%c", str[i]);}
        printf("\n");
    }
    return 0;
}
