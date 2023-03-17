#include <stdio.h>
#include <stdlib.h>

typedef int ElemType;

typedef struct stru_LNode  //�������Ա�
{
	ElemType data; //����������
	struct stru_LNode* next;   //����ָ����
	//��Ϊtydedef��仹û��д�ֻ꣬����ԭʼ�ķ�ʽ�������
	//�ȼ���ListNode* next��
}ListNode;


int main(void)
{
	stru_LNode* CreatList_L(int* arr, int length);
	stru_LNode* DeletNode(ListNode * HEAD);
	void PrintListNode(ListNode * p);

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


	ListNode* p = CreatList_L(array, length);
	printf("===��ʼ����===\n");
	PrintListNode(p);
	p = DeletNode(p);
	printf("\n===ɾ���������===\n");
	PrintListNode(p);
	return 0;
}

 //����������
stru_LNode*CreatList_L(int *array ,int array_length)
{
	if (array_length < 1) { return NULL; }

	stru_LNode* HEAD; //ͷ���

	HEAD = (ListNode*)malloc(sizeof(ListNode));
	HEAD->next = NULL;  //��������ͷ���ĵ�����


	//���������еĽ���е�������ֵ������ָ���γ���״
	int i;
	stru_LNode* newnode; //����һ���½��

	for (i = 0; i < array_length; i++)
	{
		newnode= (ListNode*)malloc(sizeof(ListNode)); //�������½��
		newnode->data = array[i]; //������ֵ
		newnode->next = HEAD->next;
		HEAD->next = newnode;//ָ�����γ���״
	}


	return HEAD;

}

//ɾ�������ڵ�
stru_LNode* DeletNode(ListNode* head)
{
	ListNode* p, * q;
	p = head;
	q = head->next;
	while (q)
	{
		p->next = q->next; //�ڶ�����㣨ż������ָ�븲�ǵ�һ����㣨�������ĵ�ַ
		free(q);

		p = p->next;

		if (p == NULL){ break; }
		q = p->next;
	}
	return head;

}


//�������
void PrintListNode(ListNode* p)
{
	p = p->next;
	if (p == NULL) 
	{
		printf("����Ϊ��:\n");
	}
	else
	{
		while (p)
		{
			printf("%d ", p->data);
			p = p->next;
		}
	}
}