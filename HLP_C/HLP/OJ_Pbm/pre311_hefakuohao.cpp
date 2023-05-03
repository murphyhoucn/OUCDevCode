// assignment 10
// 合法括号

# include <iostream>
# include <stack>
# include <cstring>
using namespace std;

# define N 50000
stack<int> S;
int judge(char *array);

int main()
{
    char array[N];
    fgets(array, N, stdin);
    // fputs(array, stdout);
    if(judge(array) == 1){ cout << '1';}
    else{ cout << '0';}
    return 0;
}
int judge(char *array)
{
    char *p;
    p = array;
    while(*p != '\0')
    {
        char left = '\0';
        char right = '\0';
        char ch = *p;
        // cout <<  "ceshi:" << ch << endl;
        switch(ch)
        {
            case '(': S.push(ch); break;
            case '{': S.push(ch); break;
            case '[': S.push(ch); break;
            case ')': left = '('; right = ch; break;
            case '}': left = '{'; right = ch; break;
            case ']': left = '['; right = ch; break;
            default: break;
        }
        // cout <<  "ceshi:" << S.size() << endl;
        if (right == ch)
        {
            if (S.empty()){return 0;}
            else
            {
                char t = S.top(); 
                S.pop();
                // 这里是C++ 栈的用法，pop()出栈不返回值，只删除栈顶元素。所以 t = S.pop()不行。
                // 合适的做法就是先用top取栈顶元素，然后使用pop删除栈顶元素。
                if (t != left){return 0;}
            }
        }
        p++;
    }
    if (S.empty()){return 1;}
    else { return 0;}
}