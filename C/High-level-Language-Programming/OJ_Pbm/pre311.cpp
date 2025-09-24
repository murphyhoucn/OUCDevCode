/*
给出一个字符串仅仅包含'(', ')', '{', '}', '[' 和']', 判断该字符串是否合法.

要求括号必须按照指定顺序才能被断定为合法，所有括号必须能够配对，允许括号内有其他括号。合法返回1，不合法返回0。

*/

// 答案错误

#include <cstdio>
#include <cstring>
#include <iostream>
using namespace std;



#define STACKLENGTH 5000

char stack[STACKLENGTH];
int top = STACKLENGTH;

/*判断栈是否为空*/
int empty()
{
    if(top == STACKLENGTH)
        return 1;  // kong
    return 0; // fei kong
}

/*进栈*/
void push(char ch)
{
    top--; // ru zhan hou, zhan ding zhi zhen shang yi
    stack[top] = ch;
}

/*出栈*/
char pop()
{
    char ch = stack[top];
    top++;  // ru zhan hou, zhan ding zhi zhen xiayi yi
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
            // zuo kuo hao jiu jin zhan
            case '(':
            case '[':
            case '{':
                push(ch);
                break;
            // you kuo hao jiu zhun bei pan duan
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
            if(empty())  // kongzhan, youkuohao zhi qian mei you fu hao , bupipei
            {
                return 0;
            }
            else // feikongzhan, youkuohao zhiqian you zuokuohao, jinxing panduan
            {
                char t = pop();
                if(t != Left){
                    return 0;  // zuoyoukuohao bupipei
                }
            }
        }

        str++;   // bian li zi fu chuan
    }

    
    if(empty()) // bianliwancheng, ruguo kongzhan ,shuoming pipei
    {
        return 1;
    }
    return 0;
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