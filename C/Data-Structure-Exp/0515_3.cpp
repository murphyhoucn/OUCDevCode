#include <stdio.h>
#include <stdlib.h>

typedef int ElemType;

typedef struct LNode
{
	ElemType data;

	struct LNode* next;

} LNode,*LinkList;


LNode* CreateOne(int n)
{
	int i;
	LNode* head;
	LNode* p;

	head = (LNode*)malloc(sizeof(LNode));

	head->next = NULL;

	printf("please input the data for LinkList Nodes :\n");

	for (i = n; i > 0; --i)
	{
		p = (LNode*)malloc(sizeof(LNode));

		scanf_s("%d", &p->data);

		p->next = head->next;
		head->next = p;

	}

	return head;

}

void CreateTwo(LinkList &head,int n)
{
	int i;
	LNode* p;

	head = (LNode*)malloc(sizeof(LNode));

	head->next = NULL;

	printf("please input the data for LinkList Nodes :\n");

	for (i = n; i > 0; --i)
	{
		p = (LNode*)malloc(sizeof(LNode));

		scanf_s("%d", &p->data);

		p->next = head->next;
		head->next = p;

	}
}

int InsertNode(LNode* L, int i, int e)
{
	LNode* p = L;
	int j = 0;

	while (p && j < i - 1)
	{
		p = p->next;
		++j;

	}

	if (!p || j > i - 1)
	{
		printf("Error the location is illegal");
		return 0;
	}

	LNode* s;

	s= (LNode*)malloc(sizeof(LNode));
	s->data = e;

	s->next = p->next;
	p->next = s;

	return 1;
}

ElemType DeleteNode(LinkList& L, int i, int& e)
{
	LNode* p;
	p = L;

	LNode* q;

	int j = 0;

	while (p->next && j < i - 1)
	{
		p = p->next;
		++j;

	}

	if (!p || j > i - 1)
	{
		printf("element is not exit");
		return 0;

	}

	q = p->next;
	p->next = q->next;

	e = q->data;
	free(q);

	return (e);

}

void DisplayList(LinkList& L)
{
	LNode* p;
	p=L->next;

	while (p != NULL)
	{
		printf("%d ", p->data);
		p = p->next;

	}

	printf("\n");

}

int main(void)
{
	LNode* L1;

	int NodeNum;

	printf("please input the Init LinkNode NUmber:\n");
	scanf_s("%d", &NodeNum);
	L1 = CreateOne(NodeNum);
	printf("the current L1 is  :");
	DisplayList(L1);

	int result;

	result = InsertNode(L1, 2, 88);
	if (result)
	{
		printf("success to insert !\n");
		printf("the current L1 is:");

		DisplayList(L1);
	}

	return 0;
}