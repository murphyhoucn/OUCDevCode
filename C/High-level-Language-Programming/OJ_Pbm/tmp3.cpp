# include <iostream>
using namespace std;

int main()
{
    // 以后这样使用指针，简单明了，没有歧义。
    int a = 10;
    int *p;  // 定义了一个指针变量
    p = &a;  // 指针变量存储的内容是变量a的地址

    cout << p << endl;  // 输出指针变量p 存储的内容，a的地址
    cout << *p << endl;  //使用指针变量，输出的是指针变量指向的存储单元所存储的内容。

    return 0;
}



// int main()
// {
//     int a = 5;
//     int *p = &a;   //这个方法也可以，就是把两步变成了一步，但是不容易直观理解。

//     cout << p << endl;
//     cout << *p << endl;

//     return 0;
// }
