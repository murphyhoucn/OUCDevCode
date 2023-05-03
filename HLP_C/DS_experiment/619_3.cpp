//#include<stdio.h>
//#include<stdlib.h>
//#define N 10
//
//typedef struct bstnode
//{
//	int key;
//	struct bstnode* lchild, * rchild;
//}BSTNode, * BSTree;
//
//BSTNode* Search(BSTree& bt, int key)
//{
//	int counter = 0;
//	BSTree p;
//	p = bt;
//	while (p != NULL)
//	{
//		counter++;
//		if (p->key == key) {
//			printf("Search times = %d\n", counter);
//			return p;
//		}
//		else
//		{
//			if (key < p->key) p = p->lchild;
//			else p = p->rchild;
//		}
//	}
//	printf("Search times = %d\n", counter);
//	return 0;
//}
//
//void CreateTree(BSTree& root, int data[])
//{
//	BSTree p;
//	BSTree current;
//	BSTree father;
//	int i;
//	father = (BSTree)malloc(sizeof(BSTNode));
//	for (i = 0; i < N; i++)
//	{
//		p = (BSTree)malloc(sizeof(BSTNode));
//		p->key = data[i];
//		p->lchild = NULL;
//		p->rchild = NULL;
//
//		if (root == NULL) root = p;
//		else
//		{
//			current = root;
//			while (current != NULL)
//			{
//				father = current;
//
//				if (current->key >= data[i])
//					current = current->lchild;
//				else
//					current = current->rchild;
//			}
//			if (father->key > data[i])
//				father->lchild = p;
//			else
//				father->rchild = p;
//		}
//	}
//}
//
//int main()
//{
//	BSTree root = NULL;
//	BSTree p;
//	int data[N];
//	int key;
//	printf("input the data of the tree:\n");
//	for (int i = 0; i < N; i++)
//	{
//		scanf_s("%d", &data[i]);
//	}
//	CreateTree(root, data);
//
//	printf("input the key value:\n");
//	scanf_s("%d", &key);
//
//	p = Search(root, key);
//
//	if (p) printf("the founded value is %d\n", p->key);
//	else printf("not found\n");
//	return 0;
//}