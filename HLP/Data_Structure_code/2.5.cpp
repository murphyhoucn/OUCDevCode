#include<stdio.h>
#include<stdlib.h>

typedef int Elemtype;

typedef struct stru_DuLNode
{
	Elemtype data;
	struct stru_DuLNode* prior;
	struct stru_DuLNode* next;

}DuLNode;



int main(void)
{
	stru_DuLNode* CreatDuList(int* array, int array_length);
	void printDuLNode(DuLNode * head, int d);

	//输入链表的值，保存到链表中=========================
	int length;
	printf("请输入链表长度：");
	scanf_s("%d", &length);
	int* array;
	array = (int*)malloc(length * sizeof(int));
	printf("请输入存入链表的元素：\n");
	for (int i = 0; i < length; i++)
	{
		printf("%d:", i + 1);
		scanf_s("%d", &array[i]);
	}
	//======================================

	//标志d======================================
	int d;
	printf("输入d的数值（d=0时按照前驱方向输出，d=1时按照后继方向输出）：");
	scanf_s("%d", &d);
	//==============================================


	//创建链表=========================================
	DuLNode* HEAD = CreatDuList(array, length);//参数：数组和链表长度

	//输出链表===========================================
	printDuLNode(HEAD,d);

	return 0;
}

//创建双向循环链表
stru_DuLNode* CreatDuList(int* array, int array_length)
{
	if (array_length < 1) { return NULL; }

	stru_DuLNode* HEAD;

	HEAD = (DuLNode*)malloc(sizeof(DuLNode));
	HEAD->next = NULL;  //建立带有头结点的双向循环链表

	HEAD->prior = HEAD;  //表头结点的指针指向自己 
	HEAD->next = HEAD;

	//将单链表中的结点中的数据域赋值，并用指针形成链状
	int i;
	stru_DuLNode* newnode_1;
	newnode_1 = HEAD;

	stru_DuLNode* newnode_2;

	for (i = 0; i < array_length; i++)
	{
		newnode_2 = (DuLNode*)malloc(sizeof(DuLNode));  //对新结点内存分配

		newnode_2->data = array[i];

		newnode_2->prior = newnode_1;
		newnode_2->next = newnode_1->next;
		newnode_1->next = newnode_2;
		newnode_2->next->prior = newnode_2;
	}

	return HEAD;

}

void printDuLNode(DuLNode* head, int d)
{
	stru_DuLNode* p = head->prior;
	stru_DuLNode* q = head->next;

	if (d == 0)
	{
		while (p != head)
		{
			printf("%d ", p->data);
			p = p->prior;
		}
		printf("\n");
	}
	else if (d == 1)
	{
		while (q != head)
		{
			printf("%d ", q->data);
			q = q->next;
		}
		printf("\n");
	}
}
