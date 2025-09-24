/*
给出一个字符串仅仅包含'(', ')', '{', '}', '[' 和']', 判断该字符串是否合法.

要求括号必须按照指定顺序才能被断定为合法，所有括号必须能够配对，允许括号内有其他括号。合法返回1，不合法返回0。

*/

// 答案错误 

// 2023.03.05 答案正确，应该是系统改了BUG

#include <stdio.h>
#include <string.h>

#define STACKLENGTH 50000

char stack[STACKLENGTH];
int top = STACKLENGTH;

/*判断栈是否为空*/
int empty()
{
    if(top == STACKLENGTH)
        return 1;  // 空
    return 0; // 非空
}

/*进栈*/
void push(char ch)
{
    top--; // 入栈。栈顶指针
    stack[top] = ch;
}

/*出栈*/
char pop()
{
    char ch = stack[top];
    top++;  // 出栈。栈顶指针
    return ch;
}

int judge(char *str)
{
    while(*str != '\0')
    {
        char Left = '\0';
        char Right = '\0';

        char ch = *str;

        switch(ch)
        {
            // 左括号进栈
            case '(':
            case '[':
            case '{':
                push(ch);
                break;

            // 右括号就准备判断
            case ')':
                Left = '(';
                Right = ch;
                break;
            case ']':
                Left = '[';
                Right = ch;
                break;
            case '}':
                Left = '{';
                Right = ch;
                break;
            
            default:
                break;
        }
        
        if(Right == ch)   // 找到右括号 
        {
            if(empty())  // 空栈，右括号之前没有符号，不匹配
            {
                return 0;
            }
            else // 非空栈，右括号之前有左括号，进行判断
            {
                char t = pop();
                if(t != Left){
                    return 0;  // 左右括号不匹配
                }
            }
        }
        str++;   // 遍历字符串
    }

    // while 结束，遍历完成。

    if(empty()) 
    {
        return 1; // 如果空栈，说明匹配
    }
    else
    {
        return 0;
    }
    
}

int main(void)
{
    char array[STACKLENGTH];

    fgets(array, STACKLENGTH,stdin);
    // 测试：()
    // printf("%s", array); // arr最后一位有换行
    // printf("%ld\n", strlen(array));  // ()\n\0  = 3
    array[strlen(array) - 1] = '\0';
    // printf("%ld\n", strlen(array));  // ()\0  = 2

    // gets(array);

    int ret = judge(array);

    if(ret == 1)
    {
        printf("1");
    }else
    {
        printf("0");
    }

    return 0;
}