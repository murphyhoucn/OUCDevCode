////创建一个循环单链表，然后设一个输出函数
//#include<stdio.h>
//#include<stdlib.h>
//#include<malloc.h>
//#define Elemtype int
//
////双向循环链表的定义
//typedef struct DULnode
//{
//	Elemtype data;
//	struct DULnode* prior;
//	struct DULnode* next;
//}DULnode, * DULinkList;
//// 头插法创建链表 
//DULinkList CreatDnode(DULinkList* head, int len)
//{
//	DULnode* p, * q;
//	(*head) = (DULnode*)malloc(sizeof(DULnode));
//	if ((*head) == NULL)
//	{
//		printf("存储分配错！\n");
//		exit(1);
//	}
//	(*head)->prior = (*head)->next = (*head);//表头结点的指针指向自己 
//	p = *head;
//	printf("请开始输入：\n");
//	for (int i = 0; i < len; i++)
//	{
//		q = (DULnode*)malloc(sizeof(DULnode));
//		scanf_s("%d", &q->data);//存放数据
//
//		q->prior = p;
//		q->next = p->next;
//		p->next = q;
//		q->next->prior = q;
//	}
//	return *head;
//}
//
////输出函数
//void PrintDULink(DULnode* head, int d)
//{
//	DULnode* p = head->prior;
//	DULnode* q = head->next;
//	if (d == 0)//倒着输出
//	{
//		printf("按前驱方向输出：\n");
//		while (p != head)
//		{
//			printf("%d ", p->data);
//			p = p->prior;
//		}
//		printf("\n");
//	}
//	if (d == 1) //顺着输出
//	{
//		printf("按后驱方向输出：\n");
//		while (q != head)
//		{
//			printf("%d ", q->data);
//			q = q->next;
//		}
//		printf("\n");
//	}
//}
//int main()
//{
//	int len, d;
//	DULinkList s;
//	printf("请输入链表长度：\n");
//	scanf_s("%d", &len);
//	s = CreatDnode(&s, len);
//	for (int i = 0; i < 2; i++)
//	{
//		printf("请输入d的值 0或者1：\n");
//		scanf_s("%d", &d);
//		PrintDULink(s, d);
//	}
//	return 0;
//}
//
