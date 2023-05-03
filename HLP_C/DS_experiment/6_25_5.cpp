//#include<stdio.h>
//#define MAX 50
//
//void InputData(int list[], int n)
//{
//	printf("input data:\n");
//	for (int i = 0; i < n; i++)
//		scanf_s("%d", &list[i]);
//}
//void OutputData(int list[], int n)
//{
//	printf("\nthe current soring is: ");
//	for (int k = 0; k < n; k++)
//		printf(" %d", list[k]);
//}
//
//void InsertSort(int list[], int n)
//{
//	int i, j;
//	int temp;
//	for (i = 0; i < n; i++)
//	{
//		temp = list[i];
//		j = i - 1;
//		while (temp < list[j])
//		{
//			list[j + 1] = list[j];
//			j--;
//		}
//		list[j + 1] = temp;
//		OutputData(list, n);
//	}
//}
//
//void main()
//{
//	int num;
//	int list[MAX];
//	printf("input length of the list(n<50):\n");
//	scanf_s("%d", &num);
//
//	InputData(list, num);
//	InsertSort(list, num);
//}