#include <stdio.h>
#include "node.h"
#include <stdlib.h>

//typedef struct _node
//{
//	int value;
//	struct _node *next;
//}Node;

int main()
{
	Node *head = NULL;
	int number;
	do {
		scanf_s("%d", &number);
		if (number != -1) {
			//add to linked-list
			Node *p = (Node*)malloc(sizeof(Node));
			p->value = number;
			p->next = NULL;
			//find the last
			Node *last = head;
			if (last != NULL) {
				while (last->next) {
					last = last->next;
				}
				last->next = p;
			}
			else {
				head = p;
			}
			
		}
	} while (number != -1);



	return 0;
}