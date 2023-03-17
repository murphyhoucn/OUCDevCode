//#include<stdio.h>
//#define MAX 50
//
//void InputData(int list[], int n)
//{
//	int i;
//	printf("input data : \n");
//	for (int i = 1; i <= n; i++)
//		scanf_s("%d", &list[i]);
//}
//void OutputData(int list[], int n)
//{
//	int i;
//	printf("the sorted list is:\n");
//	for (int i = 1; i <= n; i++)
//		printf(" %d", list[i]);
//	printf("\n");
//}
//
//void HeapAdjust(int list[], int s, int m)
//{
//	int j, temp;
//	temp = list[s];
//	for (j = 2 * s; j <= m; j *= 2)
//	{
//		if (j < m && list[j] < list[j + 1]) ++j;
//		if (temp >= list[j]) break;
//		list[s] = list[j];
//		s = j;
//	}
//	list[s] = temp;
//}
//
//void HeapSort(int list[], int n)
//{
//	int i, t;
//	for (i = n / 2; i > 0; i--)
//		HeapAdjust(list, i, n);
//	for (i = n; i > 1; i--)
//	{
//		t = list[1];
//		list[1] = list[i];
//		list[i] = t;
//		HeapAdjust(list, 1, i - 1);
//	}
//}
//
//void main()
//{
//	int list[MAX];
//	int num;
//	printf("input length of the list(n<50):\n");
//	scanf_s("%d", &num);
//
//	InputData(list, num);
//	HeapSort(list, num);
//	OutputData(list, num);
//}