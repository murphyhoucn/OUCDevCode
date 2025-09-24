// 可行

# include <stdio.h>
# include <string.h>

# define N 1000

int main()
{
    char s[1000];
    fgets(s, N, stdin);

    int sLen = strlen(s);
    // https://blog.csdn.net/st66688/article/details/108356361

    // printf("%s\n", s);

    int num = 0;
    int end = 0;

    char boy = s[0];  //获取符号
    int array[N];
    array[0] = 0;
    for (int i = 0; i < sLen - 1; i++)
    {
        if (boy == s[i])
        {
            end++;
            num++;
            array[end] = num;
        }
        else
        {
            num++;
            printf("%d %d\n", array[end] - 1, num - 1);
            end --;
        }
    }

    return 0;


}