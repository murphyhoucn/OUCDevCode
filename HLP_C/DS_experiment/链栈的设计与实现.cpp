//#include<stdlib.h>
//#include<stdio.h>
//
//#define Stack_Length 6
//#define OK 1
//#define  ERROR  0
//
//
//typedef  int SElemType;
//typedef struct SNode
//{
//	SElemType data;
//	struct SNode* next;
//}SNode,*LinkStack;
//
//void CreateTwo(LinkStack& head, int n)
//{
//	 int i;
//	 SNode* p;
//	 head = (LinkStack)malloc(sizeof(SNode));
//	 head->next = NULL;
//	 printf("Please input the data LinkList Nodes: \n");
//	 for (i = n; i > 0; --i)
//	 {
//	  p = (SNode*)malloc(sizeof(SNode));
//	  scanf_s("%d", &p->data);
//	  p->next = head->next;
//	  head->next = p;
//	 }
//}
//
//
//int Push(LinkStack& top, SElemType e)
//{
//	 SNode* q;
//	 q = (LinkStack)malloc(sizeof(SNode));
//	 if (!q)
//	 {
//	  printf("Overfolow  !\n");
//	  return (ERROR);
//	 }
//	 q->data = e;
//	 q->next =top->next;
//	 top->next = q;
//	 return (OK);
//}
//
//
//int Pop(LinkStack& top, SElemType& e)
//{
//	 SNode* q;
//	 if (!top->next)
//	 {
//	  printf("error");
//	  return(ERROR);
//	 }
//	 e = top->next->data;
//	 q = top->next;
//	 top->next = q->next;
//	 free(q);
//	 return (OK);
//}
//int main()
//{
//	 int e;
//	 LinkStack top;
//	 CreateTwo(top, 3);
//	 LinkStack p;
//	 printf("\nThe old LinkStack is (top to bottom):\n");
//	 p = top;
//	 while (p->next)
//	 {
//	  p = p->next;
//	  printf("%d ", p->data);
//	 }
//	 printf("\nPlease input the data to push:");
//	 scanf_s("%d", &e);
//	 if (Push(top, e))
//	  printf("success to push");
//	 printf("\nThe new LinkStack is:\n");
//	 while (top->next)
//	 {
//	  top = top->next;
//	  printf("%d ", top->data);
//	 }
//}
