#define maxvalue 10000
#define maxleaf 30
#define maxnode 59
#define maxbit 10
#include<stdio.h>
//哈夫曼树结构 
typedef struct
{
	int data;//结点值
	int weight;//权重 
	int flag;//是否为待构节点，0=是，1=不是 
	int parent;//父节点 
	int lchild;//左节点 
	int rchild;//右结点 
}hnodetype;
typedef struct
{
	int bit[maxbit];
	int start;
}hcodetype;
//哈夫曼结点初始化
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
		printf("输出第%d个叶结点值:",i+1);
		scanf_s("%c",&huffnode[i].data);
		printf("输入对应结点权值:");
		scanf_s("%d",&huffnode[i].weight); 
	}
}
//输出哈夫曼编码
void outputhaffman(hnodetype huffnode[],hcodetype huffcode[],int n)
{
	int i,j;
	printf("%d个叶结点对应编码为:\n",n);
	for(i=0;i<n;i++){
		printf("%c----",huffnode[i].data);
		for(j=huffcode[i].start+1;j<n;j++)
			printf("%d",huffcode[i].bit[j]);
		printf("\n");
	} 
}
//构建哈夫曼树 
void haffman(hnodetype huffnode[],hcodetype huffcode[],int n)
{
	int i,j,m1,m2,x1,x2,c,p;
	hcodetype cd;
	//构造哈夫曼树 
	for(i=0;i<n-1;i++){
		m1=m2=maxvalue;
		x1=x2=0;
		for(j=0;j<n+i;j++){
			if(huffnode[j].weight<m1&&huffnode[j].flag==0)
			{
				m2=m1;
				x2=x1;
				m1=huffnode[j].weight;
				x1=j;//存下x1的地址 
			}
			else if(huffnode[j].weight<m2&&huffnode[j].flag==0){
				m2=huffnode[j].weight;
				x2=j;//存下x2的地址 
			}
		}
//把找到的两个节点按照哈夫曼树的规则构建成一个二叉树x1为左孩子,x2为右孩子
		huffnode[x1].parent=n+i; 
		huffnode[x2].parent=n+i;
		huffnode[x1].flag=1;
		huffnode[x2].flag=1;
		huffnode[n+i].weight=huffnode[x1].weight+huffnode[x2].weight;
		huffnode[n+i].lchild=x1;
		huffnode[n+i].rchild=x2;	
	}
	//根据哈夫曼树形成哈夫曼编码
	for(i=0;i<n;i++){
		cd.start=n-1;
		c=i;
		p=huffnode[c].parent;
		//当父节点不为根节点时候，逆序往上找
		while(p!=0)
		{
			//如果当前是左孩子，编码为0
			if(huffnode[p].lchild==c)
			cd.bit[cd.start]=0;
			//如果是当前右孩子,编码为1	
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
//主体函数 
int main()
{
	hnodetype huffnode[maxnode];
	hcodetype huffcode[maxleaf];
	int n;
	printf("输出叶结点个数n:\n");
	scanf_s("%d",&n);
	inithaffman(huffnode,huffcode,n);
	haffman(huffnode,huffcode,n);
	outputhaffman(huffnode,huffcode,n);
	return 0;
}
