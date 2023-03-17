#define maxvalue 10000
#define maxleaf 30
#define maxnode 59
#define maxbit 10
#include<stdio.h>
//���������ṹ 
typedef struct
{
	int data;//���ֵ
	int weight;//Ȩ�� 
	int flag;//�Ƿ�Ϊ�����ڵ㣬0=�ǣ�1=���� 
	int parent;//���ڵ� 
	int lchild;//��ڵ� 
	int rchild;//�ҽ�� 
}hnodetype;
typedef struct
{
	int bit[maxbit];
	int start;
}hcodetype;
//����������ʼ��
void inithaffman(hnodetype huffnode[],hcodetype huffcode[],int n){
	int i;
	for(int i=0;i<2*n-1;i++){
		huffnode[i].weight=0;
		huffnode[i].parent=0;
		huffnode[i].flag=0;
		huffnode[i].lchild=-1;
		huffnode[i].rchild=-1;
	}	
	for(i=0;i<n;i++){
		getchar();
		printf("�����%d��Ҷ���ֵ:",i+1);
		scanf_s("%c",&huffnode[i].data);
		printf("�����Ӧ���Ȩֵ:");
		scanf_s("%d",&huffnode[i].weight); 
	}
}
//�������������
void outputhaffman(hnodetype huffnode[],hcodetype huffcode[],int n)
{
	int i,j;
	printf("%d��Ҷ����Ӧ����Ϊ:\n",n);
	for(i=0;i<n;i++){
		printf("%c----",huffnode[i].data);
		for(j=huffcode[i].start+1;j<n;j++)
			printf("%d",huffcode[i].bit[j]);
		printf("\n");
	} 
}
//������������ 
void haffman(hnodetype huffnode[],hcodetype huffcode[],int n)
{
	int i,j,m1,m2,x1,x2,c,p;
	hcodetype cd;
	//����������� 
	for(i=0;i<n-1;i++){
		m1=m2=maxvalue;
		x1=x2=0;
		for(j=0;j<n+i;j++){
			if(huffnode[j].weight<m1&&huffnode[j].flag==0)
			{
				m2=m1;
				x2=x1;
				m1=huffnode[j].weight;
				x1=j;//����x1�ĵ�ַ 
			}
			else if(huffnode[j].weight<m2&&huffnode[j].flag==0){
				m2=huffnode[j].weight;
				x2=j;//����x2�ĵ�ַ 
			}
		}
//���ҵ��������ڵ㰴�չ��������Ĺ��򹹽���һ��������x1Ϊ����,x2Ϊ�Һ���
		huffnode[x1].parent=n+i; 
		huffnode[x2].parent=n+i;
		huffnode[x1].flag=1;
		huffnode[x2].flag=1;
		huffnode[n+i].weight=huffnode[x1].weight+huffnode[x2].weight;
		huffnode[n+i].lchild=x1;
		huffnode[n+i].rchild=x2;	
	}
	//���ݹ��������γɹ���������
	for(i=0;i<n;i++){
		cd.start=n-1;
		c=i;
		p=huffnode[c].parent;
		//�����ڵ㲻Ϊ���ڵ�ʱ������������
		while(p!=0)
		{
			//�����ǰ�����ӣ�����Ϊ0
			if(huffnode[p].lchild==c)
			cd.bit[cd.start]=0;
			//����ǵ�ǰ�Һ���,����Ϊ1	
			else cd.bit[cd.start]=1;
			cd.start--;
			c=p;
			p=huffnode[c].parent;
		} 
		for(j=cd.start+1;j<n;j++){
			huffcode[i].bit[j]=cd.bit[j];
			huffcode[i].start=cd.start;
		}
	}	
} 
//���庯�� 
int main()
{
	hnodetype huffnode[maxnode];
	hcodetype huffcode[maxleaf];
	int n;
	printf("���Ҷ������n:\n");
	scanf_s("%d",&n);
	inithaffman(huffnode,huffcode,n);
	haffman(huffnode,huffcode,n);
	outputhaffman(huffnode,huffcode,n);
	return 0;
}
