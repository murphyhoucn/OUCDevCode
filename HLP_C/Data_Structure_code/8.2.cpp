//【二叉排序树算法】 对于二叉排序树 bt，设计一个算法，输出在该树中查找某个关键字 k 所经过的路径


#include <stdio.h>
#include <stdlib.h>
#define MaxSize 100
typedef int KeyType;                    
typedef struct node                     
{
    KeyType key;                                           
    struct node* lchild, * rchild;        
} BSTNode;
int path[MaxSize];                      
void DispBST(BSTNode* b);               
int InsertBST(BSTNode*& p, KeyType k)    
{
    if (p == NULL)                        
    {
        p = (BSTNode*)malloc(sizeof(BSTNode));
        p->key = k;
        p->lchild = p->rchild = NULL;
        return 1;
    }
    else if (k == p->key)
        return 0;
    else if (k < p->key)
        return InsertBST(p->lchild, k);  
    else
        return InsertBST(p->rchild, k);  
}
BSTNode* CreatBST(KeyType A[], int n)
{
    BSTNode* bt = NULL;                  
    int i = 0;
    while (i < n)
        InsertBST(bt, A[i++]);     
    return bt;                       
}


int SearchBST(BSTNode* bt, KeyType k, KeyType path[], int i)
{
    if (bt == NULL)
        return i;
    else if (k == bt->key)    
    {
        path[i + 1] = bt->key; 
        return i + 1;
    }
    else
    {
        path[i + 1] = bt->key;
        if (k < bt->key)
            SearchBST(bt->lchild, k, path, i + 1);
        else
            SearchBST(bt->rchild, k, path, i + 1);  
    }
}


void SearchResult(BSTNode* bt, int k1)
{
    int r, j;
    r = SearchBST(bt, k1, path, -1);
    for (j = 0; j <= r; j++)
        printf("%3d", path[j]);
    printf("\n");
}

void DispBST(BSTNode* bt)
{
    if (bt != NULL)
    {
        printf("%d", bt->key);
        if (bt->lchild != NULL || bt->rchild != NULL)
        {
            printf("(");
            DispBST(bt->lchild);
            if (bt->rchild != NULL) printf(",");
            DispBST(bt->rchild);
            printf(")");
        }
    }
}

int main()
{
    BSTNode* bt;

    int* arr = NULL;
    int length;
    printf("请输入数组长度：");
    scanf_s("%d", &length);
    arr=(int*)malloc(sizeof(int)*length);
    
    if (arr == NULL) {
    	printf("内存申请失败！");
    	exit(1);
    }
    
    printf("请输入数组元素：");
    for (int i = 0; i < length; i++) {
    	scanf_s("%d", &arr[i]);
    }
    printf("创建的BST树:");
    bt = CreatBST(arr, length);
    DispBST(bt);

    int k;
    printf("输出查找的关键字:");
    scanf_s("%d", &k);
    printf("\n");
    printf("  查找%d关键字:", k);
    SearchResult(bt, k);
    return 0;
}
