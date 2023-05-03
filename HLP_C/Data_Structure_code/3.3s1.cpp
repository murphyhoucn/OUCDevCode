//# include<stdio.h>
//# define n 20
//# define OK 1
//# define ERROR 0
//# define TRUE 1
//# define FALSE 0
//typedef int status;
//typedef char ElemType;
//typedef struct
//{
//    ElemType data[n];
//    int top;
//}SqStack;
//void Init_Sq(SqStack* S)
//{
//    S->top = -1;
//}
//status Push_Sq(SqStack* S, ElemType e)
//{
//    //printf("TEST:Push\n");
//    if (S->top + 1 == n)
//        return ERROR;
//    S->data[++S->top] = e;
//    return OK;
//}
//status Pop_Sq(SqStack* S, ElemType* e)
//{
//    //printf("TEST:Pop\n");
//    if (S->top == -1)
//        return ERROR;
//    *e = S->data[S->top--];
//    return OK;
//}
//status EmptyStack_Sq(SqStack S)
//{
//    if (S.top == -1)
//        return TRUE;
//    else
//        return FALSE;
//}
//status Train_Arrange(char* train)
//{
//    char* p = train, * q = train, e;
//    SqStack S;
//    Init_Sq(&S);
//    while (*p)
//    {//HSHSHSHSHS  
//        if (*p == 'H')
//        {
//            Push_Sq(&S, *p);
//            //printf("p==%p\n", *p);
//        }
//        else
//            *(q++) = *p;
//        p++;
//    }
//    while (EmptyStack_Sq(S) == FALSE)
//    {
//        Pop_Sq(&S, &e);
//        *(q++) = e;
//    }
//    return OK;
//}
//void Traverse_Sq(char* train)
//{
//    ElemType* p;
//    p = train;
//    while (*p != '\0')
//        printf("%c", *p++);
//    printf("\n");
//}
//int main()
//{
//    char train[100] = "HSSSHSHHSSHSHSHSSHHH";
//    printf("初始火车序列为:%s\n",train);
//    Train_Arrange(train);
//    printf("有序火车序列为:");
//    Traverse_Sq(train);
//    return 0;
//}
