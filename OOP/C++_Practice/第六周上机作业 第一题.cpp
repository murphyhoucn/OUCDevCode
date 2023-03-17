#include <iostream>
#include <cstring>
using namespace std;

class Array2 {
    // 在此处补充你的代码

    int**ptr;
    int _x, _y;
public:
    Array2() :ptr(NULL), _x(0), _y(0) {}
    Array2(int x, int y)
    {
        _x = x; _y = y;
        ptr = new int* [x];
        for (int i = 0; i < x; i++)
        {
            ptr[i] = new int[y];
        }
    }
    int* operator[](int n)
    {
        return ptr[n];
    }
    int operator()(int x, int y)
    {
        return ptr[x][y];
    }
    Array2& operator=(const Array2& a)
    {
        if (ptr != NULL)
        {
            for (int i = 0; i < _x; i++)
            {
                delete[]ptr[i];
            }
            delete[]ptr;
        }
        ptr = new int* [a._x];
        for (int i = 0; i < a._x; i++)
        {
            ptr[i] = new int[a._y];
            memcpy(ptr[i], a.ptr[i], sizeof(int) * a._y);
        }
        _x = a._x;
        _y = a._y;
        return *this;
    }
    ~Array2()
    {
        for (int i = 0; i < _x; i++)
            delete[]ptr[i];
        delete[]ptr;
    }
};

int main() {
    Array2 a(3, 4);
    int i, j;
    for (i = 0; i < 3; ++i)
        for (j = 0; j < 4; j++)
            a[i][j] = i * 4 + j;
    for (i = 0; i < 3; ++i) {
        for (j = 0; j < 4; j++) {
            cout << a(i, j) << ",";
        }
        cout << endl;
    }
    cout << "next" << endl;
    Array2 b;     b = a;
    for (i = 0; i < 3; ++i) {
        for (j = 0; j < 4; j++) {
            cout << b[i][j] << ",";
        }
        cout << endl;
    }
    return 0;
}