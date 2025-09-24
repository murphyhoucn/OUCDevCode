//#include<stdio.h>
//#include<stdlib.h>
//
//typedef struct
//{ //顺序栈定义
//    float* base; //栈底指针
//    float* top; //栈顶指针
//    int stacksize; //当前已分配的存储空间
//} SeqStack;
//typedef struct Node
//{
//    float data;
//    struct Node* next;
//} SeqNode, * SeqList;
//
//int createList(SeqList& L); //创建并进行链表的输入
//void printList(SeqList& L); //对链表中的数据进行输出 
//void tool(SeqList& L, SeqStack& M); //借助栈实现单链表链接顺序的逆转 
//void InitStack(SeqStack& M, int num); //对栈进行初始化 
//
//int main()
//{
//    int num;
//    while (1)
//    {
//        SeqList L; SeqStack M;
//        printf("#直接向链表L中输入浮点数：\n");
//        num = createList(L);
//        InitStack(M, num);
//        printf("通过栈将链表中的数据进行倒转\n");
//        tool(L, M);
//        printf("#倒叙输出链表L中的浮点数：\n");
//        printList(L);
//        free(L);
//    }
//}
//int createList(SeqList& L)
//{
//    L = (SeqList)malloc(sizeof(SeqNode));
//    SeqList head = L;
//    char temp = '\0';
//    int n = 0;
//    while (temp != '\n')
//    {
//        head->next = (SeqList)malloc(sizeof(SeqNode));
//        head = head->next;
//        scanf("%f", &head->data);
//        temp = getchar();
//        n++;
//    }
//    head->next = NULL;
//    return n;
//}
//void printList(SeqList& L)
//{
//    SeqList head = L;
//    while (head->next != NULL)
//    {
//        head = head->next;
//        printf("%g,", head->data);
//    }
//    printf("\n\n");
//}
//void tool(SeqList& L, SeqStack& M)
//{
//    SeqList head = L;
//    while (head->next != NULL)
//    {
//        head = head->next;
//        *(M.top++) = head->data;
//    }
//    head = L;
//    while (head->next != NULL)
//    {
//        head = head->next;
//        head->data = *(--M.top);
//    }
//}
//void InitStack(SeqStack& M, int num)
//{
//    M.stacksize = num;
//    M.base = (float*)malloc(sizeof(float) * num);
//    if (!M.base) exit;
//    M.top = M.base;
//}
