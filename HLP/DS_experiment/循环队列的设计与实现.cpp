//#include<stdlib.h>
//#include<stdio.h>
//#define OVERFLOW -1
//#define OK 1
//#define ERROR 0
//#define MAXSIZE 100
//typedef struct
//{
//    int* elem;
//    int front;
//    int rear;
//} SqQueue;
//
//int InitQueue(SqQueue& Q)
//{
//    Q.elem = (int*) malloc (MAXSIZE * sizeof(int));
//    if (!Q.elem)  exit (OVERFLOW);
//    Q.front = Q.rear = -1;
//    for (int i = 0; i < MAXSIZE; i++)
//        Q.elem[i] = -1;
//    return OK;
//}
//
//int QueueLength(SqQueue Q)
//{
//    return (Q.rear - Q.front + MAXSIZE) % MAXSIZE;
//}
//void Display(SqQueue Q)
//{
//    for (int i = 0; i <= QueueLength(Q); i++)
//        if (Q.elem[i] != -1)   printf("%d ", Q.elem[i]);
//    printf("\n");
//}
//
//int EnQueue(SqQueue& Q, int e)
//{
//    Q.rear = (Q.rear + 1) % MAXSIZE;
//    if (Q.rear == Q.front) return ERROR;
//    Q.elem[Q.rear] = e;
//    return OK;
//}
//
//int DeQueue(SqQueue& Q, int& e)
//{
//    if (Q.front == Q.rear) return ERROR;
//    e = Q.elem[Q.front + 1];
//    Q.elem[Q.front + 1] = -1;
//    Q.front = (Q.front + 1) % MAXSIZE;
//    return OK;
//}
//
//int main()
//{
//    SqQueue Q;
//    InitQueue(Q);
//    int elem, e;
//    printf("Please input the date of queue(exit for0):\n");
//    scanf_s("%d", &elem);
//    while (elem != 0)
//    {
//        EnQueue(Q, elem);
//        scanf_s("%d", &elem);
//    }
//    printf("The current queue is:");
//    Display(Q);
//    DeQueue(Q, e);
//    printf("DeQueue() be excuted:");
//    Display(Q);
//}
