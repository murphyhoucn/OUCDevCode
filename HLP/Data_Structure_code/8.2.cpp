//�������������㷨�� ���ڶ��������� bt�����һ���㷨������ڸ����в���ĳ���ؼ��� k ��������·��


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
    printf("���������鳤�ȣ�");
    scanf_s("%d", &length);
    arr=(int*)malloc(sizeof(int)*length);
    
    if (arr == NULL) {
    	printf("�ڴ�����ʧ�ܣ�");
    	exit(1);
    }
    
    printf("����������Ԫ�أ�");
    for (int i = 0; i < length; i++) {
    	scanf_s("%d", &arr[i]);
    }
    printf("������BST��:");
    bt = CreatBST(arr, length);
    DispBST(bt);

    int k;
    printf("������ҵĹؼ���:");
    scanf_s("%d", &k);
    printf("\n");
    printf("  ����%d�ؼ���:", k);
    SearchResult(bt, k);
    return 0;
}
