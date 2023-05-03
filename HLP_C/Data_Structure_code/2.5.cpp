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

	//���������ֵ�����浽������=========================
	int length;
	printf("�����������ȣ�");
	scanf_s("%d", &length);
	int* array;
	array = (int*)malloc(length * sizeof(int));
	printf("��������������Ԫ�أ�\n");
	for (int i = 0; i < length; i++)
	{
		printf("%d:", i + 1);
		scanf_s("%d", &array[i]);
	}
	//======================================

	//��־d======================================
	int d;
	printf("����d����ֵ��d=0ʱ����ǰ�����������d=1ʱ���պ�̷����������");
	scanf_s("%d", &d);
	//==============================================


	//��������=========================================
	DuLNode* HEAD = CreatDuList(array, length);//�����������������

	//�������===========================================
	printDuLNode(HEAD,d);

	return 0;
}

//����˫��ѭ������
stru_DuLNode* CreatDuList(int* array, int array_length)
{
	if (array_length < 1) { return NULL; }

	stru_DuLNode* HEAD;

	HEAD = (DuLNode*)malloc(sizeof(DuLNode));
	HEAD->next = NULL;  //��������ͷ����˫��ѭ������

	HEAD->prior = HEAD;  //��ͷ����ָ��ָ���Լ� 
	HEAD->next = HEAD;

	//���������еĽ���е�������ֵ������ָ���γ���״
	int i;
	stru_DuLNode* newnode_1;
	newnode_1 = HEAD;

	stru_DuLNode* newnode_2;

	for (i = 0; i < array_length; i++)
	{
		newnode_2 = (DuLNode*)malloc(sizeof(DuLNode));  //���½���ڴ����

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
