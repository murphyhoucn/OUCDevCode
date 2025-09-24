#include <stdio.h>
#include <stdlib.h>

typedef struct _node
{
	int value;
	struct _node* next;
}Node;
Node * add(Node* head, int number);

int main(void)
{
	Node* head = NULL;

	int number;

	do
	{
		scanf_s("%d", &number);
		if (number != -1)
		{
			head = add(head, number);
		}

	} while (number != -1);

	return 0;
}
Node * add(Node* head, int number)
{
	// add to link-list
	Node* p = (Node*)malloc(sizeof(Node));
	p->value = number;
	p->next = NULL;
	// find the last

	Node* last = head;
	if (last)
	{
		while (last->next)
		{
			last = last->next;
		}
		// attach
		last->next = p;
	}
	else
	{
		head = p;
	}

	return head;
}
