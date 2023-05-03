#include<stdio.h>
#include <stdlib.h>

#define TElemType char
#define OVERFLOW -1

typedef struct BiTNode
{
	TElemType data;  //����
	struct BiTNode* lchild, * rchild;  //���Һ���ָ��
}BiTNode,*BiTree;

int main(void) 
{
	void InitBiTree(BiTree & T);
	void CreateBiTree(BiTree & T);
	void Inorder(BiTree T, int k);


	BiTree T;
	printf("�������������Ԫ�أ�\n");
	CreateBiTree(T);


	int k;
	printf("\n ���� k:");
	scanf_s("%d", &k);
	printf("����������еĵ�%d �����Ϊ��", k);
	Inorder(T, k);

	return 0;
}



//��ʼ��������յĶ�������T
void InitBiTree(BiTree& T)
{
	//printf("InitBiTree OK\n");
	T = (BiTree)malloc(sizeof(BiTNode));

	T->lchild = NULL;
	T->rchild = NULL;
}
//���������������Ѿ���ʼ���Ķ�����T���и�ֵ
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

//�����������
int num = 0;  //numҪ����Ϊȫ�ֱ�����Ҫ��Ȼ�ڵݹ��ʱ��num��ֵ�����
void Inorder(BiTree T,int k)
{
	if (T != NULL)
	{
		//printf("Inorder OK\n");
		
		Inorder(T->lchild,k);
		
		//�����k��
		num++;
		//printf("test:num=%d\n", num);
		if (num==k){ printf("%c\n", T->data); }
		
		//�������ȫ��
		//printf("%c\n", T->data);
		
		Inorder(T->rchild,k);
	}
}
