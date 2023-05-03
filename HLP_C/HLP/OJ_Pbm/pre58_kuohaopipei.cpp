// assignment 7
// 在某个字符串（长度不超过 100）中有左括号、右括号和大小写字母；
// 规定（与常见的算数式子一样）任何一个左括号都从内到外与在它右边且距离最近的右括号匹配。
// 写一个程序，找到无法匹配的左括号和右括号，输出原来字符串，并在下一行标出不能匹配的括号。
// 不能匹配的左括号用”$”标注, 不能匹配的右括号用”?” 标注.

# include <iostream>
# include <stack>
using namespace std;

stack<int> S; // 定义堆栈

int main()
{
    char instr[1000] = {'\0'};
    char outstr[1000] = {'\0'};
    
    while(scanf("%s", instr) != EOF)
    {
        int i;
        for(i = 0; instr[i] != '\0'; i++)
        {
            if(instr[i] == '(')
            {
                S.push(i); // 把左括号的需要压入栈
                outstr[i] = ' ';
            }
            else if (instr[i] == ')')
            {
                if (S.empty() == false) // 栈非空，也就是有左括号。
                {
                    S.pop();// 左括号出栈。
                    outstr[i] = ' ';
                }
                else
                {
                    outstr[i] = '?';
                }
            }
            else
            {
                outstr[i] = ' ';
            }
        }
        outstr[i] = '\0';

        int k;
        while(!S.empty())
        {
            k = S.top();
            outstr[k] = '$';
            S.pop();
        }
        fputs(instr, stdout);
        cout << endl;
        fputs(outstr, stdout);
        cout << endl;
    }
    return 0;
}
