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

//ͷ�巨������
node* CreatList(int* Arr, int length)
{

	int num = 0;
	if (length < 1)
		return NULL;
	node* head, * q;
	head = (ListNode*)malloc(sizeof(ListNode)); //������ͷ��������Ԫ
	head->next = NULL;  //����ͷ���
	for (int i = 0; i < length; i++)
	{
		q = (ListNode*)malloc(sizeof(ListNode));//�½��
		q->data = Arr[i];
		q->next = head->next;
		head->next = q;
	}
	return head;
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
	ListNode* p = NULL;//����һ����ָ��
	int length;
	printf("�����������ȣ�\n");
	scanf("%d", &length);
	int* Arr;
	Arr = (int*)malloc(length * sizeof(int));
	printf("���������飺\n");
	for (int i = 0; i < length; i++) {
		scanf("%d", &Arr[i]);
	}
	p = CreatList(Arr, length);
	printf("�����ĵ�����\n");
	PrintListNode(p);
	printf("\n");
	p = Delete(p);
	printf("ɾ���������������\n");
	PrintListNode(p);
	return 0;
}


