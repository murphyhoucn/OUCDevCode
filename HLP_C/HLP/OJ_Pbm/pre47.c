# include <stdio.h>
# include <string.h>


int main()
{
    // 一般我们用strcmp可比较两个字符串的大小，
    // 比较方法为对两个字符串从前往后逐个字符相比较（按ASCII码值大小比较），
    // 直到出现不同的字符或遇到'\0'为止。
    // 如果全部字符都相同，则认为相同；
    // 如果出现不相同的字符，则以第一个不相同的字符的比较结果为准。
    // 但在有些时候，我们比较字符串的大小时，希望忽略字母的大小，
    // 例如"Hello"和"hello"在忽略字母大小写时是相等的。
    // 请写一个程序，实现对两个字符串进行忽略字母大小写的大小比较。

    char s1[80];
    char s2[80];

    // fgets(s1, 80, stdin);
    // fgets(s2, 80, stdin);

    // OJ上需要用gets才行，用fgets不行
    gets(s1);
    gets(s2);
    
    int i;

    for (i = 0; s1[i] != '\0'; i++)
    {
        if (s1[i] > 'A' - 1 && s1[i] < 'Z' + 1)
        {
            s1[i] += 32; 
        }
    }

    for (i = 0; s2[i] != '\0'; i++)
    {
        if (s2[i] > 'A' - 1 && s2[i] < 'Z' + 1)
        {
            s2[i] += 32; 
        }
    }

    // printf("%s", s1);
    // printf("%s", s2);

    int ret = strcmp(s1, s2);

   if(ret < 0)
   {
      printf("<");
   }
   else if(ret > 0) 
   {
      printf(">");
   }
   else 
   {
      printf("=");
   }
    return 0;
}