# include <stdio.h>

int main()
{
    // 在一个字符串中找出元音字母a,e,i,o,u出现的次数。

    char s[80];

    // 注意！！！
    // gets(s);
    // c11下去除了gets函数，用fgets函数来代替。
    // 见"C Primer Plus" p112

    // char cmdInputStream[MAXLINES] ;
    // fgets(cmdInputStream,MAXLINES,stdin) ;

    fgets(s, 80, stdin);
    // printf("%s\n", s);
    // printf("%s", s);

    // printf("ASCII = %d\n",s[-1]);  // ASCII = 0 -> NULL
    // 注意！！！
    // C Language 中， s[-1]代表的是'\0',与python不同！！！！
    
    int na = 0, ne = 0, ni = 0, no = 0, nu = 0;

    int i;
    for (i = 0;s[i] != '\n'; i++)
    {
        if (s[i] == 'a'){na++;}
        else if (s[i] == 'e'){ne++;}
        else if (s[i] == 'i'){ni++;}
        else if (s[i] == 'o'){no++;}
        else if (s[i] == 'u'){nu++;}
    }

    printf("%d %d %d %d %d\n", na, ne, ni, no, nu);

    return 0;

}