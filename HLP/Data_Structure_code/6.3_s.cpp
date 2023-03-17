//#include<stdio.h>
//
//typedef struct
//{
//	int data;
//	int parent;
//	int lchild, rchild;
//}HTNode;
//
//
//int Huffman(int* a, int n)
//{
//	int WPL = 0;
//	HTNode tree[200];
//	//typedef struct  (�ṹ�������)  tree[200];
//
//
//	int m = 2 * n - 1;  //�ڵ�����
//	int i;
//	for (i = 0; i < n; i++)
//	{
//		tree[i].data = a[i];
//	}
//
//
//	for (i = 0; i < m; i++) //��ʼ��ÿ���ڵ�
//	{
//		tree[i].parent = -1;
//		tree[i].lchild = -1;
//		tree[i].rchild = -1;
//	}
//	for (i = n; i < m; i++)//��Ҷ�ӽڵ�
//	{
//		int min1 = 1000, min2 = 1000;
//
//		int pos1 = 0, pos2 = 0; //��һС�͵ڶ�С
//
//		int j;
//		for (j = 0; j < i; j++) //Ҷ�ӽڵ�
//		{
//			if (tree[j].parent == -1)//��û���������Ľ��
//			{
//				if (tree[j].data < min1)
//				{
//					//swap();
//					pos2 = pos1;
//					pos1 = j;
//					min2 = min1;
//					min1 = tree[j].data;
//				}
//				else if (tree[j].data < min2)
//				{
//					min2 = tree[j].data;
//					pos2 = j;
//				}
//			}
//		}
//		tree[i].lchild = min(pos1, pos2);
//		tree[i].rchild = max(pos1, pos2);
//		tree[i].data = tree[pos1].data + tree[pos2].data;
//		tree[pos1].parent = i;
//		tree[pos2].parent = i;
//		WPL += tree[i].data;
//	}
//	return WPL;  //WPL
//}
//
//
//int main()
//{
//	int num[120];
//	int n;
//	printf("������Ԫ�ظ���\n");
//	scanf_s("%d", &n);
//	printf("�������Ԫ��ֵ\n");
//	for (int i = 0; i < n; i++)
//		scanf_s("%d", &num[i]);
//	printf("��Ȩ·������Ϊ��%d", Huffman(num, n));
//}
