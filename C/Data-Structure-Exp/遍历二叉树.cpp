#include<stdio.h>
#include<stdlib.h>
#define max 50
//�洢�ṹ 
typedef struct btnode
{
	int data;//�ڵ��������� 
	struct btnode *llink;//������ָ�� 
	struct btnode *rlink;//������ָ�� 
}btnode,*btreetype;
//���������� 
btreetype createtree(int n){
	//int i;
	btreetype root=NULL;
	for(int i=0;i<n;i++){
		btreetype newnode;
		btreetype currentnode;
		btreetype parentnode;
		//�����½�� 
		parentnode = (btreetype)malloc(sizeof(btnode));
		newnode=(btreetype)malloc(sizeof(btnode));
		scanf_s("%d",&newnode->data);
		newnode->llink=NULL;
		newnode->rlink=NULL;
		currentnode=root;//���浱ǰ���ָ�� 
		if(currentnode==NULL)
			root=newnode;
		else
		{
			while(currentnode!=NULL)
			{
			parentnode=currentnode;//���浱ǰ�ڵ��˫�� 
			if(newnode->data<currentnode->data)//�ȽϽڵ���ֵ��С 
				currentnode=currentnode->llink;//������ 
			else
				currentnode=currentnode->rlink;//������ 
			}
			//������ֵ��С����˫�׺ͺ��� 
			if(newnode->data<parentnode->data)
				parentnode->llink=newnode;
			else
				parentnode->rlink=newnode;
		}
	}
	return root;
}
//���������
void outputtree(btreetype &root){
	btreetype p;
	//��ӡ������ 
	p=root->llink;
	printf("������������Ϊ��");
	while(p!=NULL)
	{
		printf("%d ",p->data);
		p=p->llink;
	}
	//��ӡ������ 
	p=root->rlink;
	printf("\n������������Ϊ��"); 
	while(p!=NULL)
	{
		printf("%d ",p->data);
		p=p->llink;	
	} 
} 
//�������������
void preorder(btreetype &root){
	btreetype p;
	p=root;
	if(p!=NULL){
		printf("%d ",p->data);
		preorder(p->llink);
		preorder(p->rlink);
	}
} 
//�������������
void inorder(btreetype &root){
	btreetype p;
	p=root;
	if(p!=NULL){
		inorder(p->llink);//�ݹ鴦������ 
		printf("%d ",p->data);
		inorder(p->rlink);//�ݹ鴦������ 
	}
} 
//�������������
void postorder(btreetype &root){
	btreetype p;
	p=root;
	if(p!=NULL){
		preorder(p->llink);//�ݹ鴦������
		preorder(p->rlink);//�ݹ鴦������
		printf("%d ",p->data); 
	}
} 
//���������� 
int main(){
	btreetype btree;
	int count;
	printf("input the number of elements:\n");
	scanf_s("%d",&count);
	printf("input data(num=%d):\n",count);
	btree=createtree(count);
	//���ֱ�����ʽ
	printf("\n��������Ķ�������");
	preorder(btree);
	printf("\n��������Ķ��������ݹ鷽ʽ����");
	inorder(btree);
	printf("\n��������Ķ��������ǵݹ鷽ʽ����");
	inorder(btree);
	printf("\n��������Ķ�������");
	postorder(btree);	 
	return 0;
}






