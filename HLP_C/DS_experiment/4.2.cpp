//#include<stdio.h>
//#include<stdlib.h>
//#define max 50
//typedef struct btnode
//{
//	int data;
//	struct btnode *llink;
//	struct btnode *rlink;
//}btnode,*btreetype;
//btreetype createtree(int n){
//	//int i;
//	btreetype root=NULL;
//	for(int i=0;i<n;i++){
//		btreetype newnode;
//		btreetype currentnode;
//		btreetype parentnode;
//
//		parentnode=(btreetype)malloc(sizeof(btnode));
//		
//		newnode=(btreetype)malloc(sizeof(btnode));
//		scanf_s("%d",&newnode->data);
//		newnode->llink=NULL;
//		newnode->rlink=NULL;
//		currentnode=root;
//		if(currentnode==NULL)
//			root=newnode;
//		else
//		{
//			while(currentnode!=NULL)
//			{
//			parentnode=currentnode;
//			if(newnode->data<currentnode->data)
//				currentnode=currentnode->llink;
//			else
//				currentnode=currentnode->rlink;
//			}
//			if(newnode->data<parentnode->data)
//				parentnode->llink=newnode;
//			else
//				parentnode->rlink=newnode;
//		}
//	}
//	return root;
//}
//void outputtree(btreetype &root){
//	btreetype p;
//	p=root->llink;
//	printf("建立的二叉树的左子树为:");
//	while(p!=NULL)
//	{
//		printf("%d",p->data);
//		p=p->llink;
//	}
//	p=root->rlink;
//	printf("\n建立的二叉树的右子树为");
//	while(p!=NULL){
//		printf("%d",p->data);
//		p=p->rlink;
//	} 
//}
//
//int main(){
//	btreetype btree;
//	int count;
//	printf("input the number of elements:\n");
//	scanf_s("%d",&count);
//	printf("input data(num=%d):\n",count);
//	btree=createtree(9);
//	outputtree(btree); 
//	return 0;
//}
//
