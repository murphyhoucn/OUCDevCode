#include<stdio.h>
#include<stdlib.h>
#define max 50
typedef struct btnode
{
	int data;
	struct btnode *llink;
	struct btnode *rlink;
}btnode,*btreetype;
btreetype createtree(int n){
	//int i;
	btreetype root=NULL;
	for(int i=0;i<n;i++){
		btreetype newnode;
		btreetype currentnode;
		btreetype parentnode;
		parentnode = (btreetype)malloc(sizeof(btnode));
		newnode=(btreetype)malloc(sizeof(btnode));
		scanf_s("%d",&newnode->data);
		newnode->llink=NULL;
		newnode->rlink=NULL;
		currentnode=root;
		if(currentnode==NULL)
			root=newnode;
		else
		{
			while(currentnode!=NULL)
			{
			parentnode=currentnode;
			if(newnode->data<currentnode->data)
				currentnode=currentnode->llink;
			else
				currentnode=currentnode->rlink;
			}
			if(newnode->data<parentnode->data)
				parentnode->llink=newnode;
			else
				parentnode->rlink=newnode;
		}
	}
	return root;
}
int depth(btreetype &root){
	btreetype p;
	p=root;
	int dep1;
	int dep2;
	if(root==NULL)
		return 0;
	else
	{
		dep1=depth(p->llink);
		dep2=depth(p->rlink);
		if(dep1>dep2)
			return (dep1+1);
		else
			return (dep2+1);
	}
		
}
int main()
{
	btreetype btree;
	int count;
	printf("input the number of elements:\n");
	scanf_s("%d",&count);
	printf("input data(num=%d):\n",count);
	btree=createtree(9);
	printf("建立的二叉树的深度为:%d",depth(btree));
	return 0;
} 
