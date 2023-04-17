#include<iostream>
using namespace std;
class score{
     public:
    char name[100];
    double score1;
    double score2;
    double total_score;
    void read(double score3,double score4);
    score(){
        for(int i=0;i<100;i++)
        {
            name[i]='\0';
        }
    }
    void pushname(char a[],int count);
    void sum();
};
void score::read(double score3,double score4)
{
    score1=score3;
    score2=score4;
}
void score::pushname(char a[],int count)
{
    int cnt=0;
    for(int i=0;i<count;i++)
    {
        name[cnt++]=a[i];
    }
}
void score::sum()
{
    total_score=score1*0.4+score2*0.6;
}
int main()
{ 
    char n;
    int flag=0;
    score stu[100];
    while((n=getchar())!=EOF)
    {
        char a[30]={0};
        int count=0;
        a[0]=n;
        int i=0;
        char x;
        while((x=getchar())!=' ')
        {
            a[++i]=x;
        }
        stu[flag].pushname(a,i+1);
        double score3,score4;
        cin>>score3>>score4;
        stu[flag].read(score3,score4);
        stu[flag].sum();
        flag++;
        getchar();
    }
    for(int i=0;i<flag-1;i++)
    {
        for(int j=0;j<flag-1-i;j++)
        {
            if(stu[j].total_score<stu[j+1].total_score )
            {
                score te=stu[j];
                stu[j]=stu[j+1];
                stu[j+1]=te;
            }
        }
    }
    for(int i=0;i<flag;i++)
    {
        printf("%s %.2f %.2f %.2f\n",stu[i].name,stu[i].score1,stu[i].score2,stu[i].total_score);
    }
    return 0;
}
