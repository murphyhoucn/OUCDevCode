////����һ��ѭ��������Ȼ����һ���������
//#include<stdio.h>
//#include<stdlib.h>
//#include<malloc.h>
//#define Elemtype int
//
////˫��ѭ������Ķ���
//typedef struct DULnode
//{
//	Elemtype data;
//	struct DULnode* prior;
//	struct DULnode* next;
//}DULnode, * DULinkList;
//// ͷ�巨�������� 
//DULinkList CreatDnode(DULinkList* head, int len)
//{
//	DULnode* p, * q;
//	(*head) = (DULnode*)malloc(sizeof(DULnode));
//	if ((*head) == NULL)
//	{
//		printf("�洢�����\n");
//		exit(1);
//	}
//	(*head)->prior = (*head)->next = (*head);//��ͷ����ָ��ָ���Լ� 
//	p = *head;
//	printf("�뿪ʼ���룺\n");
//	for (int i = 0; i < len; i++)
//	{
//		q = (DULnode*)malloc(sizeof(DULnode));
//		scanf_s("%d", &q->data);//�������
//
//		q->prior = p;
//		q->next = p->next;
//		p->next = q;
//		q->next->prior = q;
//	}
//	return *head;
//}
//
////�������
//void PrintDULink(DULnode* head, int d)
//{
//	DULnode* p = head->prior;
//	DULnode* q = head->next;
//	if (d == 0)//�������
//	{
//		printf("��ǰ�����������\n");
//		while (p != head)
//		{
//			printf("%d ", p->data);
//			p = p->prior;
//		}
//		printf("\n");
//	}
//	if (d == 1) //˳�����
//	{
//		printf("���������������\n");
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
//	printf("�����������ȣ�\n");
//	scanf_s("%d", &len);
//	s = CreatDnode(&s, len);
//	for (int i = 0; i < 2; i++)
//	{
//		printf("������d��ֵ 0����1��\n");
//		scanf_s("%d", &d);
//		PrintDULink(s, d);
//	}
//	return 0;
//}
//
