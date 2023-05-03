//¾®×ÖÆåÓÎÏ·
#include <stdio.h>
int mian()
{
	const int size = 3;
	int board[3][3];
	int numofo;
	int numofx;
	int result = -1;  //-1:Ã»ÈËÓ®   1£ºxÓ®    0£ºoÓ®


	//¶ÁÈë¾ØÕó
	for (i = 0; i < size; i++) {
		for (j = 0; j < size; j++) {
			scanf_s("%d", &board[i][j]);
		}
	}


	return 0;
}