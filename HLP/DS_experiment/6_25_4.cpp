//#include<stdio.h>
//#define MAX 50
//
//void InputData(int list[], int n)
//{
//	printf("input data : \n");
//	for (int i = 0; i < n; i++)
//		scanf_s("%d", &list[i]);
//}
//void OutputData(int list[], int n)
//{
//	printf("\nthe current soring is:");
//	for (int k = 0; k < n; k++)
//		printf(" %d", list[k]);
//}
//
//void ShellSort(int list[], int n)
//{
//	int i, pos, length, temp;
//	int change;
//	length = n / 2;
//	while (length != 0)
//	{
//		for (i = length; i < n; i++)
//		{
//			change = 0;
//			temp = list[i];
//			pos = i - length;
//			while (temp < list[pos] && pos >= 0 && i <= n)
//			{
//				list[pos + length] = list[pos];
//				pos = pos - length;
//				change = 1;
//			}
//			list[pos + length] = temp;
//			if (change != 0) OutputData(list, n);
//
//		}
//		length = length / 2;
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
//	ShellSort(list, num);
//}