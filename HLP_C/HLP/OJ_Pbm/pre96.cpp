# include <cstdio>
# include <iostream>

int main()
{

    char s[80];

    fgets(s, 80, stdin);
    
    int na = 0, ne = 0, ni = 0, no = 0, nu = 0;

    int i;
    for (i = 0;s[i] != '\0'; i++)
    {
        if (s[i] == 'a' || s[i] == 'A'){na++;}
        else if (s[i] == 'e'|| s[i] == 'E'){ne++;}
        else if (s[i] == 'i'|| s[i] == 'I'){ni++;}
        else if (s[i] == 'o'|| s[i] == 'O'){no++;}
        else if (s[i] == 'u'|| s[i] == 'U'){nu++;}
    }

    printf("%d,%d,%d,%d,%d", na, ne, ni, no, nu);

    return 0;

}