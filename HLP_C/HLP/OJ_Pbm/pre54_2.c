// 可行
#include<stdio.h>
#include<math.h>
int main()
{
    int n;
    scanf("%d" ,&n);
    float A[n],B[n];
    for(int i=0;i<n;i++){
        scanf("%F %f",&A[i],&B[i]);
    }
    int k=0, z=0;
    float C[100];
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            C[k]=(A[i]-A[j])*(A[i]-A[j])+(B[i]-B[j])*(B[i]-B[j]);
            k++;
        }
    }
    int maxd1=0;

    for(int i=0;i<k ;i++)
    {
        if(C[i]>C[maxd1])
        {
            maxd1=i;
        }
        
    }

    float h=sqrt(C[maxd1]);
    printf("%.4f",h);
    return 0;
}
