//#include<stdio.h>
//#include <malloc.h>
//typedef struct BiTNode {
//	char data;
//	struct BiTNode* lchild, * rchild;
//}BiTNode, * BiTree;
////按照先序遍历的顺序创建树
//void CreateBiTree(BiTree& T) {
//	char ch;
//	scanf_s("%c", &ch, 100);
//	if (ch == '!')//用!表示子树为空
//		T = NULL;
//	else {
//		T = (BiTNode*)malloc(sizeof(BiTNode));//动态创建子树
//		T->data = ch;//子树指向的数据区
//		CreateBiTree(T->lchild);//创建左子树
//		CreateBiTree(T->rchild);//创建右子树
//	}
//}
////中序遍历程序
//void InOrderTraverse(BiTree T) {
//	if (T) {
//		InOrderTraverse(T->lchild);//先访问左节点
//		printf("%c", T->data);//访问中间节点
//		InOrderTraverse(T->rchild); //最后访问右节点
//	}
//}
////获取中序遍历的第 k 个结点
//int i = 0;
//void getNode(BiTree T, int k) {
//	if (T == NULL)//子树 T 为空的话，返回上一级
//		return;
//	getNode(T->lchild, k);//访问左子树
//	i++;
//	if (i == k) {// 寻找到第 k 个结点之后，输出该节点
//		printf("%c\n", T->data);
//	}getNode(T->rchild, k);//访问右子树
//}
//int main() {
//	BiTree T;
//	printf("请输入二叉树的元素：\n");
//	CreateBiTree(T);
//	printf("中序遍历序列为：\n");
//	InOrderTraverse(T);
//	int k;
//	printf("\n 输入 k:");
//	scanf_s("%d", &k);
//	printf("中序遍历序列的第%d 个结点为：", k);
//	getNode(T, k);
//	return 0;
//}