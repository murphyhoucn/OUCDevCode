//����㷨ɾ��������������ŵĽڵ� 
#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>
#define Elemtype int

typedef struct node
{
	Elemtype data;

	struct node* next;
}ListNode;

node* CreatList(int* array, int array_length)
{
	if (array_length < 1) { return NULL; }

	node* HEAD;

	HEAD = (ListNode*)malloc(sizeof(ListNode));
	HEAD->next = NULL;  //��������ͷ���ĵ�����


	//���������еĽ���е�������ֵ������ָ���γ���״
	int i;
	node* newnode;

	for (i = 0; i < array_length; i++)
	{
		newnode = (ListNode*)malloc(sizeof(ListNode)); //�������½��
		newnode->data = array[i]; //������ֵ
		newnode->next = HEAD->next;//ָ�����γ���״
		HEAD->next = newnode;
	}


	return HEAD;

}

//ɾ������  ok
node* Delete(ListNode* head)
{
	ListNode* p, * q;
	p = head;
	q = head->next;
	while (q != NULL)
	{
		p->next = q->next;
		free(q);//�ͷŽڵ�p
		p = p->next;
		if (p == NULL)
			break;
		q = p->next;
	}
	return head;
}
//�������
void PrintListNode(ListNode* p)
{
	p = p->next;
	if (p == NULL) {
		printf("����Ϊ��:\n");
	}
	else
	{
		while (p != NULL)
		{
			printf("%d ", p->data);
			p = p->next;
		}
	}
}
int main()
{
	node* CreatList(int* arr, int length);
	node* Delete(ListNode * HEAD);
	void PrintListNode(ListNode * p);

	int length;
	printf("�����������ȣ�\n");
	scanf_s("%d", &length);

	int* array;
	array = (int*)malloc(length * sizeof(int));
	printf("����������Ԫ�أ�\n");
	for (int i = 0; i < length; i++)
	{
		printf("%d:", i + 1);
		scanf_s("%d", &array[i]);
	}


	ListNode* p = CreatList(array, length);
	PrintListNode(p);
	p = Delete(p);
	PrintListNode(p);
	return 0;
}


