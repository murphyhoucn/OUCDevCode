//#include<stdio.h>
//#include<stdlib.h>
//#define N 10
//
//typedef struct
//{
//	int* elem;
//	int length;
//}SSTable;
//
//int Search_Bin(SSTable& ST, int key)
//{
//	int counter = 1;
//	int low = 1;
//	int mid;
//	int high = ST.length;
//	while (low <= high)
//	{
//		mid = (low + high) / 2;
//		if (key == ST.elem[mid])
//			return mid;
//		else
//		{
//			if (key < ST.elem[mid])
//				high = mid - 1;
//			else
//				low = mid + 1;
//		}
//		counter++;
//	}
//	printf("Search times = %d\n", counter);
//	return 0;
//}
//
//void main()
//{
//	int kvalue;
//	SSTable L;
//	L.elem = (int*)malloc(N * sizeof(int));
//	L.length = N;
//	for (int i = 0; i < N; i++)
//		scanf_s("%d", &L.elem[i]);
//	printf("input a key value:\n");
//	scanf_s("%d", &kvalue);
//	int pos = Search_Bin(L, kvalue);
//	if (pos) printf("position is %d,the value is %d\n", pos + 1, L.elem[pos]);
//	else printf("not found!\n");
//}