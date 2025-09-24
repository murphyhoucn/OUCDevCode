#include<iostream>
using namespace std;
int arr[207][207];
int main( )
{
    int row,col;
    int num;  // 旋转次数
    cin>> row >> col >> num;


    for(int a = 0; a < row; a++){
        for(int b = 0; b < col; b++){
            cin>>arr[a][b];
        }
    }

    if (num % 4 == 1)
    {
        // 90
        // cout<< "===90===" << endl;
        for(int a = 0; a < col; a++)
        {
            for(int b = row - 1; b >= 0; b--)
            {
                if(b == 0)
                    cout<<arr[b][a]<<endl;
                else
                    cout<<arr[b][a]<<" ";
            }
        }
    }
    else if (num % 4 == 2)
    {
        // 180
        // cout<< "===180===" << endl;
        for(int a = row - 1; a >= 0; a--)
        {
            for(int b = col - 1; b >= 0; b--)
            {
                if(b == 0)
                    cout<<arr[a][b]<<endl;
                else
                    cout<<arr[a][b]<<" ";
            }
        }
    }
    else if (num % 4 == 3)
    {
        // 270
        // cout<< "===270===" << endl;
        for(int a = col - 1; a >= 0; a--)
        {
            for(int b = 0; b < row; b++)
            {
                if(b == row - 1)
                    cout<<arr[b][a]<<endl;
                else
                    cout<<arr[b][a]<<" ";
            }
        }
    }
    else
    {
        // 360
        // cout<< "===360===" << endl;
        for(int a = 0; a < row; a++)
        {
            for(int b = 0; b < col; b++)
            {
                if(b == col - 1)
                    cout<<arr[a][b]<<endl;
                else
                    cout<<arr[a][b]<<" ";
            }
        }
    }
    return 0;
}
