#include <stdio.h>
#include <stdlib.h>


typedef struct Node
{
	int data;
	int parent;
	int lchild, rchild;
}HTNode, * HuffmanTree;    //��̬��������洢�շ�����
//typedef struct Node HTNode;
//typedef struct Node* HuffmanTree;


int main()
{

	int Huffman(int* a, int n);


	int array[100];
	int number;

	printf("������Ԫ�ظ���\n");
	scanf_s("%d", &number);     //Ҷ�ӽ���ֵ

	printf("�������Ԫ��ֵ\n");
	for (int i = 0; i < number; i++)
	{
		scanf_s("%d", &array[i]);
	}

	printf("WPL:%d\n", Huffman(array, number));
}

int Huffman(int* arr, int n)
{

	int max(int a, int b);
	int min(int a, int b);


	int WPL = 0;
	HTNode tree[200];
	//typedef struct  (�ṹ�������)  tree[200];

	int m = 2 * n - 1;  //�ڵ�����

	int i;
	for (i = 0; i < n; i++)        //��0��n-1��һ��n�� ΪҶ�ӽ�㣬���ǵ���ֵ��������array��ֵ
	{
		tree[i].data = arr[i];
	}


	for (i = 0; i < m; i++) //��ʼ��ÿ���ڵ�
	{
		tree[i].parent = -1;
		tree[i].lchild = -1;
		tree[i].rchild = -1;
	}

	for (i = n; i < m; i++)//��Ҷ�ӽڵ�  ����
	{
		int min1 = 1000, min2 = 1000;

		int pos1 = 0, pos2 = 0; //��һС�͵ڶ�С

		int j;
		for (j = 0; j < i; j++) //Ҷ�ӽڵ�
		{
			if (tree[j].parent == -1)  //��û���������Ľ��
			{
				if (tree[j].data < min1)
				{
					//swap();
					pos2 = pos1;
					pos1 = j;
					min2 = min1;
					min1 = tree[j].data;
				}
				else if (tree[j].data < min2)
				{
					min2 = tree[j].data;
					pos2 = j;
				}
			}
		}
		tree[i].lchild = min(pos1, pos2);
		tree[i].rchild = max(pos1, pos2);
		tree[i].data = tree[pos1].data + tree[pos2].data;
		tree[pos1].parent = i;
		tree[pos2].parent = i;
		WPL += tree[i].data;
	}
	return WPL;  //WPL
}

int min(int a, int b)
{
	return a < b ? a : b;
}
int max(int a, int b)
{
	return a > b ? a : b;
}