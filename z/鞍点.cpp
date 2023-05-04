#include<iostream>
using namespace std;
class andian{
    private:
    int n;
    int a[100][100];
    int x,y;
    public:
    andian(int num,int b[][num]):n(num){
        for(int i=0;i<n+1;i++)
        {
            for(int j=0;j<n+1;j++)
            {
                a[i][j]=b[i][j];
            }
        }
    }
    ~andian(){};
    int  find();
    void print(){
        cout<<x<<y;
    }
};
int  andian::find()
{
    int max=0,min=0;
    int flag1,flag2=-1,flag3=-1;
    int flag=0;
    for(int i=1;i<n+1;i++)
    {
        max=a[i][1];
        for(int j=1;j<n+1;j++)
        {
            if(a[i][j]>max)
            {
                max=a[i][j];
                flag1=i;flag2=j;
            }
        }
        min=a[1][flag2];
        for(int k=1;k<n+1;k++)
        {
            if(a[k][flag2]<min)
            {
                min=a[k][flag2];
                flag3=k;
            }
        }
        if(flag3==flag2)
        {
            x=flag1;
            y=flag2;
            flag=0;
        }
      if(flag)
      return 1;
      else
      return 0;  
    }
}
int main()
{
    int n;
    cin>>n;
    int b[n+1][n+1];
    for(int i=1;i<n+1;i++)
    {
        for(int j=1;j<n+1;j++)
        {
            int x;
            cin>>x;
            b[i][j]=x;
        }
    }
    andian a(n,b[]);
    if(a.find()==1)
    {
        a.print();
    }
    else
    {
        cout<<"No";
    }
}