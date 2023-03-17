//#include<stdio.h>
//#include<stdlib.h>
//#include<malloc.h>
//#define OK 1
//#define FALSE 0
//#define TRUE 1
//#define ERROR 0
//#define OVERFLOW -2
//#define MAXQSIZE 100
//typedef struct BiTNode
//{
//    char data;
//    struct BiTNode* lchild, * rchild;
//}BiTNode, * BiTree;
//BiTree T;
//int CreateBiTree(BiTree& T)
//{
//    char ch;
//    scanf_s("%c", &ch);
//    if (ch == '#') T = NULL;
//    else
//    {
//        T = (BiTNode*)malloc(sizeof(BiTNode));
//        T->data = ch;
//        CreateBiTree(T->lchild);
//        CreateBiTree(T->rchild);
//    }
//    return OK;
//}
//void  Judge(BiTree T)
//{
//    int	f = 0, r = 0, s = 0;
//    BiTree p, q[MAXQSIZE];
//    q[r++] = T;//根结点入队 
//    while (f < r)
//    {
//        p = q[f++];//根结点出队 
//        if (p)
//        {
//            q[r++] = p->lchild;//左孩子入队 
//            q[r++] = p->rchild;//右孩子入队 
//        }
//        else
//        {
//            while (f < r)
//            {
//                p = q[f++];
//                if (p)s++;
//            }
//        }
//    }
//    if (s != 0)printf("二叉树不是完全二叉树\n");
//    if (s == 0)printf("二叉树是完全二叉树\n");
//}
//int main()
//{
//    printf("请依次输入二叉树的结点：\n");
//    CreateBiTree(T);
//    Judge(T);
//    system("pause");
//}
////ABC##DE##F###
//
