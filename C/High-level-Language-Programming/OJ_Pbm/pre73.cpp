#include<iostream>
using namespace std;
int main() {
	int m, n;
	cin >> m >> n;
	int a[20][20] = { 0 };
	bool b[20][20] = { 0 };
	for (int i=0;i<m;i++)
		for (int j = 0; j < n; j++) {
			cin >> a[i][j];
		}
	for (int i=0;i<m;i++)
		for (int j = 0; j < n; j++) {
			if (i == 0) {
				if (j == 0) {
					if ((a[i][j] >= a[i][j+1]) && (a[i][j] >= a[i+1][j]))
						b[i][j] = 1;
				}//这个地块位于第一行第一列
				else if (j == n - 1) {
					if ((a[i][j] >= a[i][j-1]) && (a[i][j] >= a[i+1][j]))
						b[i][j] = 1;
				}//这个地块位于第一行最后一列
				else {
					if ((a[i][j] >= a[i][j - 1]) && (a[i][j] >= a[i][j + 1]) && (a[i][j] >= a[i + 1][j]))
						b[i][j] = 1;
				}//这个地块在第一行但他既不在第一列也不在最后一列
			}//这个地块位于第一行
			else if (i == m-1) {
				if (j == 0) {
					if ((a[i][j] >= a[i-1][j]) && (a[i][j] >= a[i][j+1]))
						b[i][j] = 1;
				}//这个地块位于最后一行的第一列
				else if (j == n - 1) {
					if ((a[i][j] >= a[i-1][j]) && (a[i][j] >= a[i][j-1]))
						b[i][j] = 1;
				}//这个地块位于最后一行的最后一列
				else {
					if ((a[i][j] >= a[i][j - 1]) && (a[i][j] >= a[i][j + 1]) && (a[i][j] >= a[i - 1][j]))
						b[i][j] = 1;
				}//这个地块在最后一行但他既不在第一列也不在最后一列
			}//这个地块位于最后一行
			else {
				if (j == 0) {
					if ((a[i][j] >= a[i - 1][j]) && (a[i][j] >= a[i + 1][j]) && (a[i][j] >= a[i][j + 1])) {
						b[i][j] = 1;
					}
				}//这个地块既不在第一行也不在最后一行但在第一列
				else if (j == n - 1) {
					if ((a[i][j] >= a[i - 1][j]) && (a[i][j] >= a[i + 1][j]) && (a[i][j] >= a[i][j -1])) {
						b[i][j] = 1;
					}
				}//这个地块既不在第一行也不在最后一行但在最后一列
				else{
					if ((a[i][j] >= a[i - 1][j]) && (a[i][j] >= a[i + 1][j]) && (a[i][j] >= a[i][j - 1]) && (a[i][j] >= a[i][j + 1]))
						b[i][j] = 1;
				}
			}//这个地块既不在第一行也不在最后一行也不在第一列也不在最后一列
		}
	for (int i=0;i<m;i++)
		for (int j = 0; j < n; j++) {
			if (b[i][j])
				cout << i << " " << j << endl;

		}
	return 0;
}
