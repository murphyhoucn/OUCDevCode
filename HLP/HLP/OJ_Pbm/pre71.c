#include<stdio.h>
#define N 50
void judge(int *pid,float *pse,int n,float level,int count[]);
void sorts(int count[],int *pid,float *pse,int n);
void st(int count[],int id[],float se[],int n);
int  k = 0;
int main()
{
    int num = 0;//病人的个数
    float level = 0.0;//住入病房的最低严重值
    int id[N];
    float se[N];
    int count[N];
    scanf("%d %f",&num,&level);
    for(int i=0;i<num;i++)
    {
        scanf("%d %f",&id[i],&se[i]);
    }
    judge(id,se,num,level,count);
    
    st(count,id,se,k);
    if(k==0)
        printf("None.");
    else{
            for(int i=0;i<k;i++)
            {
                printf("%03d %.1f",id[count[i]],se[count[i]]);
                if(i<k-1)
                    printf("\n");
            }
    }
    return 0;
}
 
 
void judge(int *pid,float *pse,int n,float level,int count[])
{
    for(int i=0;i<n;i++)
    {
        if(*(pse+i)>=level) 
            count[k++]=i;  
    }
 }

void st(int count[],int id[],float se[],int n)
{
    for(int i = 0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(se[count[i]]<se[count[j]])
            {
                int temp = count[i];
                count[i] = count[j];
                count[j] = temp;
            }
        }
    }
}