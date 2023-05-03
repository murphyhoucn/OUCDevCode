#include <iostream>
using namespace std;

void swap(int *a, int *b){
    int t = *a;
    *a = *b;
    *b = t;
}


//顺时针
void clockwise(int a[][4],int n){
     for(int i=0; i<n; ++i)
        for(int j=0; j<n-i; ++j)
            swap(a[i][j], a[n-1-j][n-1-i]);

    for(int i=0; i<n/2; ++i)
        for(int j=0; j<n; ++j)
            swap(a[i][j], a[n-1-i][j]);
}

int main()
{
    int row, col;
    int n;
    cin >> row >> col >> n;

    int a[row][col];
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cin >> a[i][j];
        }
    }

    // cout << "ceshi 原来的矩阵" << endl;
    // for(int i=0; i<row; ++i){
    //     for(int j=0; j<col; ++j)
    //         cout<<a[i][j]<<" ";
    //     cout<<endl;
    // }
    // cout<<endl;

    // clockwise(a,col);
    // cout<<endl;
    // cout<<"顺时针转90度"<<endl;
    // for(int i=0; i<row; ++i){
    //     for(int j=0; j<col; ++j)
    //         cout<<a[i][j]<<" ";
    //     cout<<endl;
    // }
    return 0;
}
