//设计一个算法，借助栈实现单链表链接顺序的逆转。

#include <stdio.h>
#include <stdlib.h>

#define STACK_INIT_SIZE 100  //存储空间初始分配量
#define STACKINGREMENT 10  //存储空间分配增量
typedef int ElemType;


typedef struct stru_LNode  //构造线性表
{
	ElemType data; //链表数据域
	struct stru_LNode* next;   //链表指针域
	//因为tydedef语句还没有写完，只能用原始的方式定义变量
	//等价于ListNode* next；
}ListNode;

typedef struct  //定义栈
{
	ElemType* top;  //(int * top;)指针top 指向栈顶元素在顺序栈中的下一个位置（更高的地址）
	ElemType* base; //(int * base;)指针base 为栈底指针 ，指向栈底的位置

	int stacksize;  //当前已经分配的存储空间
}SqStack;

int main(void)
{
	stru_LNode* CreatList_L(int* arr, int length);
	void PrintListNode(ListNode * p);

	void InitStack(SqStack * S);  //置空栈
	void Push(SqStack * S, ElemType x); //入栈
	int Pop(SqStack * S, ElemType * x); //出栈

	int length;
	printf("请输入链表长度：");
	scanf_s("%d", &length);

	int* array;
	array = (int*)malloc(length * sizeof(int));    //动态分配存储空间
	//类似于int array[length]  但该方式不能动态分配存储空间

	printf("请输入存入链表的元素：\n");
	int i;
	for (i= 0; i < length; i++)
	{
		printf("%d:", i + 1);
		scanf_s("%d", &array[i]);  //先将存到链表中的元素暂存到数组中
	}
	//for (i = 0; i < length; i++)
	//{
	//	printf("test:%d  ", array[i]);
	//}
	//printf("\n");

	ListNode* p = CreatList_L(array, length);
	printf("===初始链表===\n");
	PrintListNode(p);
	printf("\n");

	ListNode* q = p;
	SqStack S; 
	InitStack(&S);//初始化栈

	while (q != NULL)
	{
		Push(&S, q->data);   //把链表中的元素压栈
		q = q->next;
	}

	//pop出的元素是逆序的，保存的数组中
	ElemType temp;
	//int length_stack;
	//length_stack = S.top - S.base;
	int length2 = length;  //保护数据

	int* array_reverse;  //建一个数组，用来存POP出栈的元素，这就是链表的逆序元素
	array_reverse = (int*)malloc(length2 * sizeof(int));    //动态分配存储空间

	//printf("栈长test:%d\n", length_stack);
	//int i_reverse = 0;

	while (length2 > 0)
	{
		Pop(&S, &temp);
		//printf("pop test:%d ", temp);
		array_reverse[length2-1] = temp; //建一个数组，用来存POP出栈的元素，这就是链表的逆序元素
		//i_reverse++;
		length2--;
	}
	//printf("\n");

	//for (i = 0; i < length; i++)
	//{
	//	printf("array test:%d  ", array_reverse[i]);
	//}
	//printf("\n");

	ListNode* p_reverse = CreatList_L(array_reverse, length);  //新建一个链表，初始化的元素就是原来链表的逆序，从而实现逆序
	printf("===逆序链表===\n");
	PrintListNode(p_reverse);

	return 0;
}

//创建单链表
stru_LNode* CreatList_L(int* array, int array_length)
{
	if (array_length < 1) { return NULL; }

	stru_LNode* HEAD; //头结点

	HEAD = (ListNode*)malloc(sizeof(ListNode));
	HEAD->next = NULL;  //建立带有头结点的单链表


	//将单链表中的结点中的数据域赋值，并用指针形成链状
	int i;
	stru_LNode* newnode; //建立一个新结点

	for (i = 0; i < array_length; i++)
	{
		newnode = (ListNode*)malloc(sizeof(ListNode)); //创建按新结点
		newnode->data = array[i]; //数据域赋值
		newnode->next = HEAD->next;
		HEAD->next = newnode;//指针域形成链状
	}


	return HEAD;

}

//输出函数
void PrintListNode(ListNode* p)
{
	p = p->next;
	if (p == NULL)
	{
		printf("链表为空:\n");
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


void InitStack(SqStack* S)  //置空栈
{
	S->base = (ElemType*)malloc(STACK_INIT_SIZE * sizeof(ElemType));//分配空间
	if (!S->base)  //分配失败则退出
	{
		exit(-1);
	}
	S->top = S->base;//初始化
	S->stacksize = STACK_INIT_SIZE;//栈的容量等于初始设的值
}

void Push(SqStack* S, ElemType x) //入栈
{
	if (S->top - S->base == S->stacksize) //栈满，需要增加栈的容量
	{
		S->base = (ElemType*)realloc(S->base,(S->stacksize + STACKINGREMENT) * sizeof(ElemType));


		if (!S->base) { exit(-1); }    //如果S->base的初值为零，那么!S->base就是真，执行语句

		S->top = S->base + S->stacksize;
		S->stacksize += STACKINGREMENT; //追加存储空间
	}

	*(S->top) = x;
	(S->top)++;	
}
int Pop(SqStack* S, ElemType* x) //出栈
{
	if (S->top == S->base)  //空栈
	{
		return -1;
	}
	(S->top)--;
	*x = *(S->top);

	return 0;
}