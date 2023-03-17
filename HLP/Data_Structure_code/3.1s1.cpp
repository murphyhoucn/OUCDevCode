////设计算法借助栈实现单链表顺序逆转。创建一个单链表，然后创建一个空栈，把元素放进去在取出来
//#include<stdio.h>
//#include<stdlib.h>
//#include<malloc.h>
//#define Elemtype int
//#define STACKINCREMENT 10
//#define STACK_INIT_SIZE 20
//
////链表定义
//typedef struct node
//{
//	Elemtype data;
//
//	struct node* next;
//}ListNode;
//
////栈的定义
//typedef struct
//{
//	Elemtype* top;
//	Elemtype* base;
//	int stackSize;
//}SqStack;
//
////初始化
//void InitStack(SqStack* s)
//{
//	s->base = (Elemtype*)malloc(STACK_INIT_SIZE * sizeof(Elemtype));//分配空间
//	if (!s->base)  //分配失败则退出
//	{
//		exit(0);
//	}
//	s->top = s->base;//初始化
//	s->stackSize = STACK_INIT_SIZE;//栈的容量等于初始设的值
//}
//
////输出函数
//void PrintListNode(node* p)
//{
//	p = p->next;
//	if (p == NULL) {
//		printf("链表为空:\n");
//	}
//	else
//	{
//		printf("输出当前读入的链表：\n");
//		while (p != NULL)
//		{
//			printf("%d", p->data);
//			p = p->next;
//		}
//	}
//}
////链表正序读入
//node* CreatList()
//{
//	int num = 0, len;
//	printf("请输入链表长度：\n");
//	scanf_s("%d", &len);
//	if (len < 1)
//		return NULL;
//	node* head, * q;
//	head = (ListNode*)malloc(sizeof(ListNode)); //创建有头结点的链表单元
//	head->next = NULL;  //创建头结点
//	printf("请开始输入:\n");
//	for (int i = len - 1; i >= 0; i--)
//	{
//		q = (ListNode*)malloc(sizeof(ListNode));//新结点
//		scanf_s("%d", &q->data);
//		q->next = head->next;
//		head->next = q;
//	}
//	return head;
//}
//
////进栈操作
//void Push(SqStack* s, Elemtype e)
//{
//	if (s->top - s->base >= s->stackSize)  //检验是否满栈，栈满
//	{
//		s->base = (Elemtype*)realloc(s->base, (s->stackSize + STACK_INIT_SIZE) * sizeof(Elemtype));//重新分配空间，扩大栈的容量
//		if (!s->base)    //再次进行检查
//		{
//			exit(0);
//		}
//	}
//	*(s->top) = e;
//	s->top++;
//}
////出栈操作
//void Pop(SqStack* s, Elemtype* e)
//{
//	if (s->top == s->base)
//	{
//		return;
//	}
//	(s->top)--;
//	*e = *(s->top);
//}
////求下栈长
//int StackLen(SqStack s)
//{
//	return(s.top - s.base);
//}
////逆序
//void Revers(node* head)
//{
//	node* p = head;
//	SqStack s; Elemtype c; int len;
//	InitStack(&s);//初始化栈
//	while (p != NULL)
//	{
//		Push(&s, p->data);
//		p = p->next;
//	}
//	printf("输出逆转后的链表：\n");
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
