//设计算法删除单链表奇数序号的节点 
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
	HEAD->next = NULL;  //建立带有头结点的单链表


	//将单链表中的结点中的数据域赋值，并用指针形成链状
	int i;
	node* newnode;

	for (i = 0; i < array_length; i++)
	{
		newnode = (ListNode*)malloc(sizeof(ListNode)); //创建按新结点
		newnode->data = array[i]; //数据域赋值
		newnode->next = HEAD->next;//指针域形成链状
		HEAD->next = newnode;
	}


	return HEAD;

}

//删除操作  ok
node* Delete(ListNode* head)
{
	ListNode* p, * q;
	p = head;
	q = head->next;
	while (q != NULL)
	{
		p->next = q->next;
		free(q);//释放节点p
		p = p->next;
		if (p == NULL)
			break;
		q = p->next;
	}
	return head;
}
//输出函数
void PrintListNode(ListNode* p)
{
	p = p->next;
	if (p == NULL) {
		printf("链表为空:\n");
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
	printf("请输入链表长度：\n");
	scanf_s("%d", &length);

	int* array;
	array = (int*)malloc(length * sizeof(int));
	printf("请输入数组元素：\n");
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


