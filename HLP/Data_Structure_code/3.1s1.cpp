////����㷨����ջʵ�ֵ�����˳����ת������һ��������Ȼ�󴴽�һ����ջ����Ԫ�طŽ�ȥ��ȡ����
//#include<stdio.h>
//#include<stdlib.h>
//#include<malloc.h>
//#define Elemtype int
//#define STACKINCREMENT 10
//#define STACK_INIT_SIZE 20
//
////������
//typedef struct node
//{
//	Elemtype data;
//
//	struct node* next;
//}ListNode;
//
////ջ�Ķ���
//typedef struct
//{
//	Elemtype* top;
//	Elemtype* base;
//	int stackSize;
//}SqStack;
//
////��ʼ��
//void InitStack(SqStack* s)
//{
//	s->base = (Elemtype*)malloc(STACK_INIT_SIZE * sizeof(Elemtype));//����ռ�
//	if (!s->base)  //����ʧ�����˳�
//	{
//		exit(0);
//	}
//	s->top = s->base;//��ʼ��
//	s->stackSize = STACK_INIT_SIZE;//ջ���������ڳ�ʼ���ֵ
//}
//
////�������
//void PrintListNode(node* p)
//{
//	p = p->next;
//	if (p == NULL) {
//		printf("����Ϊ��:\n");
//	}
//	else
//	{
//		printf("�����ǰ���������\n");
//		while (p != NULL)
//		{
//			printf("%d", p->data);
//			p = p->next;
//		}
//	}
//}
////�����������
//node* CreatList()
//{
//	int num = 0, len;
//	printf("�����������ȣ�\n");
//	scanf_s("%d", &len);
//	if (len < 1)
//		return NULL;
//	node* head, * q;
//	head = (ListNode*)malloc(sizeof(ListNode)); //������ͷ��������Ԫ
//	head->next = NULL;  //����ͷ���
//	printf("�뿪ʼ����:\n");
//	for (int i = len - 1; i >= 0; i--)
//	{
//		q = (ListNode*)malloc(sizeof(ListNode));//�½��
//		scanf_s("%d", &q->data);
//		q->next = head->next;
//		head->next = q;
//	}
//	return head;
//}
//
////��ջ����
//void Push(SqStack* s, Elemtype e)
//{
//	if (s->top - s->base >= s->stackSize)  //�����Ƿ���ջ��ջ��
//	{
//		s->base = (Elemtype*)realloc(s->base, (s->stackSize + STACK_INIT_SIZE) * sizeof(Elemtype));//���·���ռ䣬����ջ������
//		if (!s->base)    //�ٴν��м��
//		{
//			exit(0);
//		}
//	}
//	*(s->top) = e;
//	s->top++;
//}
////��ջ����
//void Pop(SqStack* s, Elemtype* e)
//{
//	if (s->top == s->base)
//	{
//		return;
//	}
//	(s->top)--;
//	*e = *(s->top);
//}
////����ջ��
//int StackLen(SqStack s)
//{
//	return(s.top - s.base);
//}
////����
//void Revers(node* head)
//{
//	node* p = head;
//	SqStack s; Elemtype c; int len;
//	InitStack(&s);//��ʼ��ջ
//	while (p != NULL)
//	{
//		Push(&s, p->data);
//		p = p->next;
//	}
//	printf("�����ת�������\n");
//	len = StackLen(s);
//	while (len > 1) {
//		Pop(&s, &c);
//		printf("%d", c);
//		len--;
//	}
//	return;
//}
//
//int main()
//{
//	node* head;
//	head = CreatList();
//	PrintListNode(head);
//	printf("\n");
//	Revers(head);
//	return 0;
//}
//
//
