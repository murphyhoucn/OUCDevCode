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

//头插法创建单
node* CreatList(int* Arr, int length)
{

	int num = 0;
	if (length < 1)
		return NULL;
	node* head, * q;
	head = (ListNode*)malloc(sizeof(ListNode)); //创建有头结点的链表单元
	head->next = NULL;  //创建头结点
	for (int i = 0; i < length; i++)
	{
		q = (ListNode*)malloc(sizeof(ListNode));//新结点
		q->data = Arr[i];
		q->next = head->next;
		head->next = q;
	}
	return head;
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
	ListNode* p = NULL;//声明一个空指针
	int length;
	printf("请输入链表长度：\n");
	scanf("%d", &length);
	int* Arr;
	Arr = (int*)malloc(length * sizeof(int));
	printf("请输入数组：\n");
	for (int i = 0; i < length; i++) {
		scanf("%d", &Arr[i]);
	}
	p = CreatList(Arr, length);
	printf("创建的单链表：\n");
	PrintListNode(p);
	printf("\n");
	p = Delete(p);
	printf("删除奇数结点后的链表：\n");
	PrintListNode(p);
	return 0;
}


