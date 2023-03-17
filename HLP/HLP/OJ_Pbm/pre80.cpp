// Excel可以对一组纪录按任意指定列排序。现请你编写程序实现类似功能。

#include<stdio.h>
#include<algorithm>
#include<string.h>
#include<iostream>
using namespace std;

struct Student{
    char num[10];
    char name[8];
    int score;
}stu[100001];


bool cmp1(Student a,Student b){
    //if(strcmp(a.num,b.num)>0)
    return strcmp(a.num,b.num)<0;
}

bool cmp2(Student a,Student b){
    if(strcmp(a.name,b.name)!=0)return strcmp(a.name,b.name)<0;
    else return strcmp(a.num,b.num)<0;
}

bool cmp3(Student a,Student b){
    if(a.score!=b.score)return a.score<b.score;
    else return strcmp(a.num,b.num)<0;
}

int main()
{
    int n,c,i=0,casenum=0;
    while(scanf("%d %d",&n,&c)!=EOF&&n!=0)
    {
        i=0;
        while(n--)
        {
            scanf("%s %s %d",&stu[i].num,&stu[i].name,&stu[i].score);
            i++;
        }

        casenum++;
        if(c==1)
        {
            sort(stu,stu+i,cmp1);
        }
        else if(c==2)
        {
            sort(stu,stu+i,cmp2);
        }else if(c==3)
        {
            sort(stu,stu+i,cmp3);
        }

        printf("Case %d:\n",casenum);

        for(int j=0;j<i;j++)
        {
            printf("%s %s %d\n",stu[j].num,stu[j].name,stu[j].score);
        }
    }
    return 0;
}
