////铁路车厢调度问题。图 1 是一个铁道调车场的示意图，两侧铁道均为单向行驶
////道，中间有一段用于调度的“栈道”，调车场的入口处有 n 节硬座和软座车厢（分
////别用 H 和 S 表示），设计一个算法，把所有的软座车厢调度到硬座车厢前面来，
////要求输出对这 n 节车厢进行调度的（车厢编号）结果序列。
//
////Train = ‘HSSSHSHHSSHSHSHSSHHH"
//
//
#include <stdio.h>
#include <stdlib.h>
#define STACK_INIT_SIZE 100  //存储空间初始分配量
#define STACKINGREMENT 10  //存储空间分配增量
typedef char ElemType;

typedef struct  //定义栈
{
	ElemType* top;  //(int * top;)指针top 指向栈顶元素在顺序栈中的下一个位置（更高的地址）
	ElemType* base; //(int * base;)指针base 为栈底指针 ，指向栈底的位置

	int stacksize;  //当前已经分配的存储空间
}SqStack;

int main(void)
{

	void InitStack(SqStack * S);
	void Push(SqStack * S, ElemType x);
	int Pop(SqStack * S, ElemType * x);
	void Arrangement(SqStack * S, char* train);
	void Print(char* train);
	int EmptyStack_Sq(SqStack S);

	SqStack S;
	InitStack(&S);

	char Train[100] = { "HSSSHSHHSSHSHSHSSHHH" };
	//char Train[4] = { "HSH" };
	printf("初始火车序列为:%s\n", Train);

	Arrangement(&S, Train);
	printf("有序火车序列为:");
	Print(Train);

	return 0;
}

void InitStack(SqStack* S)  //置空栈
{
	//printf("TEST:InitStack_secceed\n");
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
	//printf("TEST:Push\n");
	if (S->top - S->base == S->stacksize) //栈满，需要增加栈的容量
	{
		S->base = (ElemType*)realloc(S->base, (S->stacksize + STACKINGREMENT) * sizeof(ElemType));

		if (!S->base) { exit(-1); }    //如果S->base的初值为零，那么!S->base就是真，执行语句

		S->top = S->base + S->stacksize;
		S->stacksize += STACKINGREMENT; //追加存储空间
	}

	*(S->top) = x;
	(S->top)++;
}
int Pop(SqStack* S, ElemType* x) //出栈
{
	//printf("TEST:Pop\n");
	if (S->top == S->base)  //空栈
	{
		return -1;
	}
	(S->top)--;
	*x = *(S->top);

	return 0;
}

int EmptyStack_Sq(SqStack S)
{
	if (S.top==S.base)
		return 1;
	else
		return 0;
}

void Arrangement(SqStack* S, char* train)
{
	//printf("TEST:Arrangement\n");
	char* p = train;
	char* q = train;
	char e;
	while (*p)  //遍历
	{
	    if (*p == 'H'){Push(S, *p);}  //先将H入栈
		else { *(q++) = *p; }
	    p++;
	}

	//int  flag= 0;
	//if (S->top ==S->base){ flag = 1; }//判断是否栈空
	//else { flag = 0; }
		
	while (EmptyStack_Sq(*S)==0)
	{
	    Pop(S, &e);
	    *(q++) = e;
	}
}

void Print(char* train)
{
	//printf("TEST:Print\n");
    ElemType* p;
    p = train;
    while (*p != '\0'){ printf("%c", *p++); }
    printf("\n");
}