#include<stdio.h>
#include <stdlib.h>

#define TElemType char
#define OVERFLOW -1

typedef struct BiTNode
{
	TElemType data;  //数据
	struct BiTNode* lchild, * rchild;  //左右孩子指针
}BiTNode,*BiTree;

int main(void) 
{
	void InitBiTree(BiTree & T);
	void CreateBiTree(BiTree & T);
	void Inorder(BiTree T, int k);


	BiTree T;
	printf("请输入二叉树的元素：\n");
	CreateBiTree(T);


	int k;
	printf("\n 输入 k:");
	scanf_s("%d", &k);
	printf("中序遍历序列的第%d 个结点为：", k);
	Inorder(T, k);

	return 0;
}



//初始化：构造空的二叉树，T
void InitBiTree(BiTree& T)
{
	//printf("InitBiTree OK\n");
	T = (BiTree)malloc(sizeof(BiTNode));

	T->lchild = NULL;
	T->rchild = NULL;
}
//创建二叉树：将已经初始化的二叉树T进行赋值
void CreateBiTree(BiTree& T)
{
	//printf("1111CreateBiTree OK\n");
	char ch;
	scanf_s("%c", &ch, 10);

	if (ch == '#')
	{
		T = NULL;
	}
	else
	{
		if (!(T = (BiTree)malloc(sizeof(BiTNode)))) { exit(OVERFLOW); }
		T->data = ch;

		CreateBiTree(T->lchild);
		CreateBiTree(T->rchild);
		//printf("222CreateBiTree OK\n");
	}
}

//中序输出函数
int num = 0;  //num要设置为全局变量，要不然在递归的时候，num的值会归零
void Inorder(BiTree T,int k)
{
	if (T != NULL)
	{
		//printf("Inorder OK\n");
		
		Inorder(T->lchild,k);
		
		//输出第k个
		num++;
		//printf("test:num=%d\n", num);
		if (num==k){ printf("%c\n", T->data); }
		
		//中序输出全部
		//printf("%c\n", T->data);
		
		Inorder(T->rchild,k);
	}
}
