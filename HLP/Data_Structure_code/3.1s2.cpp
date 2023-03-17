//#include<stdio.h>
//#include<stdlib.h>
//
//typedef struct
//{ //˳��ջ����
//    float* base; //ջ��ָ��
//    float* top; //ջ��ָ��
//    int stacksize; //��ǰ�ѷ���Ĵ洢�ռ�
//} SeqStack;
//typedef struct Node
//{
//    float data;
//    struct Node* next;
//} SeqNode, * SeqList;
//
//int createList(SeqList& L); //�������������������
//void printList(SeqList& L); //�������е����ݽ������ 
//void tool(SeqList& L, SeqStack& M); //����ջʵ�ֵ���������˳�����ת 
//void InitStack(SeqStack& M, int num); //��ջ���г�ʼ�� 
//
//int main()
//{
//    int num;
//    while (1)
//    {
//        SeqList L; SeqStack M;
//        printf("#ֱ��������L�����븡������\n");
//        num = createList(L);
//        InitStack(M, num);
//        printf("ͨ��ջ�������е����ݽ��е�ת\n");
//        tool(L, M);
//        printf("#�����������L�еĸ�������\n");
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
