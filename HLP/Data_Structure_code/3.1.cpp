//���һ���㷨������ջʵ�ֵ���������˳�����ת��

#include <stdio.h>
#include <stdlib.h>

#define STACK_INIT_SIZE 100  //�洢�ռ��ʼ������
#define STACKINGREMENT 10  //�洢�ռ��������
typedef int ElemType;


typedef struct stru_LNode  //�������Ա�
{
	ElemType data; //����������
	struct stru_LNode* next;   //����ָ����
	//��Ϊtydedef��仹û��д�ֻ꣬����ԭʼ�ķ�ʽ�������
	//�ȼ���ListNode* next��
}ListNode;

typedef struct  //����ջ
{
	ElemType* top;  //(int * top;)ָ��top ָ��ջ��Ԫ����˳��ջ�е���һ��λ�ã����ߵĵ�ַ��
	ElemType* base; //(int * base;)ָ��base Ϊջ��ָ�� ��ָ��ջ�׵�λ��

	int stacksize;  //��ǰ�Ѿ�����Ĵ洢�ռ�
}SqStack;

int main(void)
{
	stru_LNode* CreatList_L(int* arr, int length);
	void PrintListNode(ListNode * p);

	void InitStack(SqStack * S);  //�ÿ�ջ
	void Push(SqStack * S, ElemType x); //��ջ
	int Pop(SqStack * S, ElemType * x); //��ջ

	int length;
	printf("�����������ȣ�");
	scanf_s("%d", &length);

	int* array;
	array = (int*)malloc(length * sizeof(int));    //��̬����洢�ռ�
	//������int array[length]  ���÷�ʽ���ܶ�̬����洢�ռ�

	printf("��������������Ԫ�أ�\n");
	int i;
	for (i= 0; i < length; i++)
	{
		printf("%d:", i + 1);
		scanf_s("%d", &array[i]);  //�Ƚ��浽�����е�Ԫ���ݴ浽������
	}
	//for (i = 0; i < length; i++)
	//{
	//	printf("test:%d  ", array[i]);
	//}
	//printf("\n");

	ListNode* p = CreatList_L(array, length);
	printf("===��ʼ����===\n");
	PrintListNode(p);
	printf("\n");

	ListNode* q = p;
	SqStack S; 
	InitStack(&S);//��ʼ��ջ

	while (q != NULL)
	{
		Push(&S, q->data);   //�������е�Ԫ��ѹջ
		q = q->next;
	}

	//pop����Ԫ��������ģ������������
	ElemType temp;
	//int length_stack;
	//length_stack = S.top - S.base;
	int length2 = length;  //��������

	int* array_reverse;  //��һ�����飬������POP��ջ��Ԫ�أ���������������Ԫ��
	array_reverse = (int*)malloc(length2 * sizeof(int));    //��̬����洢�ռ�

	//printf("ջ��test:%d\n", length_stack);
	//int i_reverse = 0;

	while (length2 > 0)
	{
		Pop(&S, &temp);
		//printf("pop test:%d ", temp);
		array_reverse[length2-1] = temp; //��һ�����飬������POP��ջ��Ԫ�أ���������������Ԫ��
		//i_reverse++;
		length2--;
	}
	//printf("\n");

	//for (i = 0; i < length; i++)
	//{
	//	printf("array test:%d  ", array_reverse[i]);
	//}
	//printf("\n");

	ListNode* p_reverse = CreatList_L(array_reverse, length);  //�½�һ��������ʼ����Ԫ�ؾ���ԭ����������򣬴Ӷ�ʵ������
	printf("===��������===\n");
	PrintListNode(p_reverse);

	return 0;
}

//����������
stru_LNode* CreatList_L(int* array, int array_length)
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
		newnode = (ListNode*)malloc(sizeof(ListNode)); //�������½��
		newnode->data = array[i]; //������ֵ
		newnode->next = HEAD->next;
		HEAD->next = newnode;//ָ�����γ���״
	}


	return HEAD;

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


void InitStack(SqStack* S)  //�ÿ�ջ
{
	S->base = (ElemType*)malloc(STACK_INIT_SIZE * sizeof(ElemType));//����ռ�
	if (!S->base)  //����ʧ�����˳�
	{
		exit(-1);
	}
	S->top = S->base;//��ʼ��
	S->stacksize = STACK_INIT_SIZE;//ջ���������ڳ�ʼ���ֵ
}

void Push(SqStack* S, ElemType x) //��ջ
{
	if (S->top - S->base == S->stacksize) //ջ������Ҫ����ջ������
	{
		S->base = (ElemType*)realloc(S->base,(S->stacksize + STACKINGREMENT) * sizeof(ElemType));


		if (!S->base) { exit(-1); }    //���S->base�ĳ�ֵΪ�㣬��ô!S->base�����棬ִ�����

		S->top = S->base + S->stacksize;
		S->stacksize += STACKINGREMENT; //׷�Ӵ洢�ռ�
	}

	*(S->top) = x;
	(S->top)++;	
}
int Pop(SqStack* S, ElemType* x) //��ջ
{
	if (S->top == S->base)  //��ջ
	{
		return -1;
	}
	(S->top)--;
	*x = *(S->top);

	return 0;
}