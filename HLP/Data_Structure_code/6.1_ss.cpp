//#include<stdio.h>
//#include <malloc.h>
//typedef struct BiTNode {
//	char data;
//	struct BiTNode* lchild, * rchild;
//}BiTNode, * BiTree;
////�������������˳�򴴽���
//void CreateBiTree(BiTree& T) {
//	char ch;
//	scanf_s("%c", &ch, 100);
//	if (ch == '!')//��!��ʾ����Ϊ��
//		T = NULL;
//	else {
//		T = (BiTNode*)malloc(sizeof(BiTNode));//��̬��������
//		T->data = ch;//����ָ���������
//		CreateBiTree(T->lchild);//����������
//		CreateBiTree(T->rchild);//����������
//	}
//}
////�����������
//void InOrderTraverse(BiTree T) {
//	if (T) {
//		InOrderTraverse(T->lchild);//�ȷ�����ڵ�
//		printf("%c", T->data);//�����м�ڵ�
//		InOrderTraverse(T->rchild); //�������ҽڵ�
//	}
//}
////��ȡ��������ĵ� k �����
//int i = 0;
//void getNode(BiTree T, int k) {
//	if (T == NULL)//���� T Ϊ�յĻ���������һ��
//		return;
//	getNode(T->lchild, k);//����������
//	i++;
//	if (i == k) {// Ѱ�ҵ��� k �����֮������ýڵ�
//		printf("%c\n", T->data);
//	}getNode(T->rchild, k);//����������
//}
//int main() {
//	BiTree T;
//	printf("�������������Ԫ�أ�\n");
//	CreateBiTree(T);
//	printf("�����������Ϊ��\n");
//	InOrderTraverse(T);
//	int k;
//	printf("\n ���� k:");
//	scanf_s("%d", &k);
//	printf("����������еĵ�%d �����Ϊ��", k);
//	getNode(T, k);
//	return 0;
//}