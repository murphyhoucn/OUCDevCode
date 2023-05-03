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
//	//typedef struct  (结构体的名字)  tree[200];
//
//
//	int m = 2 * n - 1;  //节点总数
//	int i;
//	for (i = 0; i < n; i++)
//	{
//		tree[i].data = a[i];
//	}
//
//
//	for (i = 0; i < m; i++) //初始化每个节点
//	{
//		tree[i].parent = -1;
//		tree[i].lchild = -1;
//		tree[i].rchild = -1;
//	}
//	for (i = n; i < m; i++)//非叶子节点
//	{
//		int min1 = 1000, min2 = 1000;
//
//		int pos1 = 0, pos2 = 0; //第一小和第二小
//
//		int j;
//		for (j = 0; j < i; j++) //叶子节点
//		{
//			if (tree[j].parent == -1)//还没进构成树的结点
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
//	printf("请输入元素个数\n");
//	scanf_s("%d", &n);
//	printf("请输入各元素值\n");
//	for (int i = 0; i < n; i++)
//		scanf_s("%d", &num[i]);
//	printf("带权路径长度为：%d", Huffman(num, n));
//}
