//#include<stdio.h>
//#include<stdlib.h>
//#define max 50
////存储结构 
//typedef struct btnode
//{
//	int data;//节点数据内容 
//	struct btnode *llink;//左子树指针 
//	struct btnode *rlink;//右子树指针 
//}btnode,*btreetype;
////建立二叉树 
//btreetype createtree(int n){
//	//int i;
//	btreetype root=NULL;
//	for(int i=0;i<n;i++){
//		btreetype newnode;
//		btreetype currentnode;
//		btreetype parentnode;
//		//建立新结点 
//		parentnode = (btreetype)malloc(sizeof(btnode));
//		newnode=(btreetype)malloc(sizeof(btnode));
//		scanf_s("%d",&newnode->data);
//		newnode->llink=NULL;
//		newnode->rlink=NULL;
//		currentnode=root;//储存当前结点指针 
//		if(currentnode==NULL)
//			root=newnode;
//		else
//		{
//			while(currentnode!=NULL)
//			{
//			parentnode=currentnode;//储存当前节点的双亲 
//			if(newnode->data<currentnode->data)//比较节点数值大小 
//				currentnode=currentnode->llink;//左子树 
//			else
//				currentnode=currentnode->rlink;//右子树 
//			}
//			//根据数值大小连接双亲和孩子 
//			if(newnode->data<parentnode->data)
//				parentnode->llink=newnode;
//			else
//				parentnode->rlink=newnode;
//		}
//	}
//	return root;
//}
////输出二叉树
//void outputtree(btreetype &root){
//	btreetype p;
//	//打印左子树 
//	p=root->llink;
//	printf("建立的左子树为：");
//	while(p!=NULL)
//	{
//		printf("%d ",p->data);
//		p=p->llink;
//	}
//	//打印右子树 
//	p=root->rlink;
//	printf("\n建立的右子树为："); 
//	while(p!=NULL)
//	{
//		printf("%d ",p->data);
//		p=p->llink;	
//	} 
//} 
////先序遍历二叉树
//void preorder(btreetype &root){
//	btreetype p;
//	p=root;
//	if(p!=NULL){
//		printf("%d ",p->data);
//		preorder(p->llink);
//		preorder(p->rlink);
//	}
//} 
////中序遍历二叉树
//void inorder(btreetype &root){
//	btreetype p;
//	p=root;
//	if(p!=NULL){
//		inorder(p->llink);//递归处理左树 
//		printf("%d ",p->data);
//		inorder(p->rlink);//递归处理右书 
//	}
//} 
////后序遍历二叉树
//void postorder(btreetype &root){
//	btreetype p;
//	p=root;
//	if(p!=NULL){
//		preorder(p->llink);//递归处理左树
//		preorder(p->rlink);//递归处理右树
//		printf("%d ",p->data); 
//	}
//} 
////测试主程序 
//int main(){
//	btreetype btree;
//	int count;
//	printf("input the number of elements:\n");
//	scanf_s("%d",&count);
//	printf("input data(num=%d):\n",count);
//	btree=createtree(count);
//	//几种遍历形式
//	printf("\n先序遍历的二叉树：");
//	preorder(btree);
//	printf("\n中序遍历的二叉树（递归方式）：");
//	inorder(btree);
//	printf("\n中序遍历的二叉树（非递归方式）：");
//	inorder(btree);
//	printf("\n后序遍历的二叉树：");
//	postorder(btree);	 
//	return 0;
//}
//
//
//
//
//
//
