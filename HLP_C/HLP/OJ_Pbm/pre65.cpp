# include <iostream>
using namespace std;
// 给定一个row行col列的整数数组array，
// 要求从array[0][0]元素开始，
// 按从左上到右下的对角线顺序( 如图）遍历整个数组。
int main() 
{
	int row, col;
    int arr[1000][1000];
	cin >> row >> col;

	for (int i = 0; i < row; i++)
     {
		for (int j = 0; j < col; j++) 
        {
			cin >> arr[i][j];
		}	
	}
	for (int k = 0; k < row + col; k++)   // key point
    {
		for (int i = 0; i < row; i++)
        {
			for (int j = 0; j < col; j++) 
            {
				if (i + j == k)      // key point
                {
					cout << arr[i][j] << endl;; 
				} 
			}	
		}
	}
	return 0;
}