//��������Ϸ
#include <stdio.h>
int mian()
{
	const int size = 3;
	int board[3][3];
	int numofo;
	int numofx;
	int result = -1;  //-1:û��Ӯ   1��xӮ    0��oӮ


	//�������
	for (i = 0; i < size; i++) {
		for (j = 0; j < size; j++) {
			scanf_s("%d", &board[i][j]);
		}
	}


	return 0;
}