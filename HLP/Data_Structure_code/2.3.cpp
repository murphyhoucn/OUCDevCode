#include <stdio.h>
#include <stdlib.h>

typedef int ElemType;

typedef struct stru_LNode  //构造线性表
{
	ElemType data; //链表数据域
	struct stru_LNode* next;   //链表指针域
	//因为tydedef语句还没有写完，只能用原始的方式定义变量
	//等价于ListNode* next；
}ListNode;


int main(void)
{
	stru_LNode* CreatList_L(int* arr, int length);
	stru_LNode* DeletNode(ListNode * HEAD);
	void PrintListNode(ListNode * p);

	int length;
	printf("请输入链表长度：");
	scanf_s("%d", &length);

	int* array;
	array = (int*)malloc(length * sizeof(int));
	printf("请输入存入链表的元素：\n");
	for (int i = 0; i < length; i++)
	{
		printf("%d:", i + 1);
		scanf_s("%d", &array[i]);
	}


	ListNode* p = CreatList_L(array, length);
	printf("===初始链表===\n");
	PrintListNode(p);
	p = DeletNode(p);
	printf("\n===删除后的链表===\n");
	PrintListNode(p);
	return 0;
}

 //创建单链表
stru_LNode*CreatList_L(int *array ,int array_length)
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
		newnode= (ListNode*)malloc(sizeof(ListNode)); //创建按新结点
		newnode->data = array[i]; //数据域赋值
		newnode->next = HEAD->next;
		HEAD->next = newnode;//指针域形成链状
	}


	return HEAD;

}

//删除奇数节点
stru_LNode* DeletNode(ListNode* head)
{
	ListNode* p, * q;
	p = head;
	q = head->next;
	while (q)
	{
		p->next = q->next; //第二个结点（偶数）的指针覆盖第一个结点（奇数）的地址
		free(q);

		p = p->next;

		if (p == NULL){ break; }
		q = p->next;
	}
	return head;

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