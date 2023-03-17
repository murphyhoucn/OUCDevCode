////��·����������⡣ͼ 1 ��һ��������������ʾ��ͼ������������Ϊ������ʻ
////�����м���һ�����ڵ��ȵġ�ջ����������������ڴ��� n ��Ӳ�����������ᣨ��
////���� H �� S ��ʾ�������һ���㷨�������е�����������ȵ�Ӳ������ǰ������
////Ҫ��������� n �ڳ�����е��ȵģ������ţ�������С�
//
////Train = ��HSSSHSHHSSHSHSHSSHHH"
//
//
#include <stdio.h>
#include <stdlib.h>
#define STACK_INIT_SIZE 100  //�洢�ռ��ʼ������
#define STACKINGREMENT 10  //�洢�ռ��������
typedef char ElemType;

typedef struct  //����ջ
{
	ElemType* top;  //(int * top;)ָ��top ָ��ջ��Ԫ����˳��ջ�е���һ��λ�ã����ߵĵ�ַ��
	ElemType* base; //(int * base;)ָ��base Ϊջ��ָ�� ��ָ��ջ�׵�λ��

	int stacksize;  //��ǰ�Ѿ�����Ĵ洢�ռ�
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
	printf("��ʼ������Ϊ:%s\n", Train);

	Arrangement(&S, Train);
	printf("���������Ϊ:");
	Print(Train);

	return 0;
}

void InitStack(SqStack* S)  //�ÿ�ջ
{
	//printf("TEST:InitStack_secceed\n");
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
	//printf("TEST:Push\n");
	if (S->top - S->base == S->stacksize) //ջ������Ҫ����ջ������
	{
		S->base = (ElemType*)realloc(S->base, (S->stacksize + STACKINGREMENT) * sizeof(ElemType));

		if (!S->base) { exit(-1); }    //���S->base�ĳ�ֵΪ�㣬��ô!S->base�����棬ִ�����

		S->top = S->base + S->stacksize;
		S->stacksize += STACKINGREMENT; //׷�Ӵ洢�ռ�
	}

	*(S->top) = x;
	(S->top)++;
}
int Pop(SqStack* S, ElemType* x) //��ջ
{
	//printf("TEST:Pop\n");
	if (S->top == S->base)  //��ջ
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
	while (*p)  //����
	{
	    if (*p == 'H'){Push(S, *p);}  //�Ƚ�H��ջ
		else { *(q++) = *p; }
	    p++;
	}

	//int  flag= 0;
	//if (S->top ==S->base){ flag = 1; }//�ж��Ƿ�ջ��
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